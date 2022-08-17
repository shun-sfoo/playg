#include <gtk/gtk.h>

static void
click1_cb (GtkButton *btn, gpointer user_date)
{
  const gchar *s;
  s = gtk_button_get_label (btn);
  if (g_strcmp0 (s, "Hello.") == 0)
    {
      gtk_button_set_label (btn, "Good-bye.");
    }
  else
    {
      gtk_button_set_label (btn, "Hello.");
    }
}

static void
click2_cb (GtkButton *btn, gpointer user_data)
{
  GtkWindow *win = GTK_WINDOW (user_data);
  gtk_window_destroy (win);
}

static void
app_activate (GApplication *app, gpointer user_data)
{
  GtkWidget *win;
  GtkWidget *box;
  GtkWidget *btn1;
  GtkWidget *btn2;
  win = gtk_application_window_new (GTK_APPLICATION (app));
  gtk_window_set_title (GTK_WINDOW (win), "box");
  gtk_window_set_default_size (GTK_WINDOW (win), 400, 400);
  box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);
  gtk_box_set_homogeneous (GTK_BOX (box), TRUE);
  gtk_window_set_child (GTK_WINDOW (win), box);

  btn1 = gtk_button_new_with_label ("Hello.");
  g_signal_connect (btn1, "clicked", G_CALLBACK (click1_cb), NULL);

  btn2 = gtk_button_new_with_label ("Quit");
  g_signal_connect (btn2, "clicked", G_CALLBACK (click2_cb), win);
  gtk_box_append (GTK_BOX (box), btn1);
  gtk_box_append (GTK_BOX (box), btn2);

  gtk_widget_show (win);
}

int
main (int argc, char **argv)
{
  GtkApplication *app;

  int stat;

  app = gtk_application_new ("org.tutorial", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (app_activate), NULL);
  stat = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);
  return stat;
}
