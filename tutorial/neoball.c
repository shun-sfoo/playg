#include <gtk/gtk.h>
#include <math.h>
#include <stdlib.h>

#define N 10
#define CANVAS_WIDTH 800
#define CANVAS_HEIGHT 800
#define RADIUS 30

static void
draw_function (GtkDrawingArea *area, cairo_t *cr, int width, int height, gpointer user_data)
{

  cairo_set_source_rgb (cr, 1.0, 1.0, 1.0); /* white */
  cairo_paint (cr);
  cairo_set_line_width (cr, 2.0);
  cairo_set_source_rgb (cr, 0.0, 0.0, 0.0); /* black */
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
  gtk_drawing_area_set_draw_func (GTK_DRAWING_AREA (area), draw_function, user_data, NULL);
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

  struct Circle
  {
    int x;
    int y;
    int r;
    int vx;
    int vy;
  } * circles;

  circles = g_new (struct Circle, N);

  // init data
  for (int i = 0; i < N; ++i)
    {
      circles->x = (int)(rand () % (CANVAS_WIDTH - 2 * RADIUS)) + RADIUS;
      circles->y = (int)(rand () % (CANVAS_HEIGHT - 2 * RADIUS)) + RADIUS;
      circles->vx = (int)(rand () % 11) - 5;
      circles->vy = (int)(rand () % 11) - 5;
      circles++;
    }

  struct Circle *p = circles;

  app = gtk_application_new (APPLICATION_ID, G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (app_activate), circles);
  stat = g_application_run (G_APPLICATION (app), argc, argv);

  g_free (circles);
  g_object_unref (app);
  return stat;
}
