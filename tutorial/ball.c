#include <gtk/gtk.h>
#include <math.h>
#include <stdlib.h>

#define N 10
#define CANVAS_WIDTH 800
#define CANVAS_HEIGHT 800
#define RADIUS 30

struct Circle
{
  int x;
  int y;
  int r;
  int vx;
  int vy;
};

static struct Circle circles[N];

static void
draw_function (GtkDrawingArea *area, cairo_t *cr, int width, int height, gpointer user_data)
{

  cairo_set_source_rgb (cr, 1.0, 1.0, 1.0); /* white */
  cairo_paint (cr);
  cairo_set_line_width (cr, 2.0);
  cairo_set_source_rgb (cr, 0.0, 0.0, 0.0); /* black */

  // draw
  for (int i = 0; i < N; ++i)
    {
      cairo_arc (cr, circles[i].x, circles[i].y, RADIUS, 0.0, 2 * M_PI);
      cairo_stroke (cr);

      // update
      int x = circles[i].x += circles[i].vx;
      if (x - RADIUS <= 0)
        {
          circles[i].x = RADIUS;
          circles[i].vx = -circles[i].vx;
        }
      else if (x + RADIUS >= CANVAS_WIDTH)
        {
          circles[i].x = CANVAS_WIDTH - RADIUS;
          circles[i].vx = -circles[i].vx;
        }

      int y = circles[i].y += circles[i].vy;
      if (y - RADIUS <= 0)
        {
          circles[i].y = RADIUS;
          circles[i].vy = -circles[i].vy;
        }
      else if (y + RADIUS >= CANVAS_HEIGHT)
        {
          circles[i].y = CANVAS_HEIGHT - RADIUS;
          circles[i].vy = -circles[i].vy;
        }
    }
}

gboolean
time_handler (GtkWidget *widget)
{

  gtk_widget_queue_draw (widget);

  return TRUE;
}

static void
app_activate (GApplication *app, gpointer user_data)
{

  GtkWidget *win = gtk_application_window_new (GTK_APPLICATION (app));
  GtkWidget *area = gtk_drawing_area_new ();

  gtk_widget_set_size_request (area, CANVAS_WIDTH, CANVAS_HEIGHT);
  gtk_window_set_title (GTK_WINDOW (win), "ball");
  gtk_drawing_area_set_draw_func (GTK_DRAWING_AREA (area), draw_function, NULL, NULL);
  g_timeout_add (1000 / 60, (GSourceFunc)time_handler, (gpointer)area);

  gtk_window_set_child (GTK_WINDOW (win), area);

  gtk_widget_show (win);
}

#define APPLICATION_ID "com.tutorial.ball"

int
main (int argc, char **argv)
{
  GtkApplication *app;
  int stat;

  // init data
  for (int i = 0; i < N; ++i)
    {
      circles[i].x = (int)(rand () % (CANVAS_WIDTH - 2 * RADIUS)) + RADIUS;
      circles[i].y = (int)(rand () % (CANVAS_HEIGHT - 2 * RADIUS)) + RADIUS;
      circles[i].vx = (int)(rand () % 11) - 5;
      circles[i].vy = (int)(rand () % 11) - 5;
    }

  app = gtk_application_new (APPLICATION_ID, G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (app_activate), NULL);
  stat = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);
  return stat;
}
