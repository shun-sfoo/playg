#include "exampleapp.h"
#include <gtk/gtk.h>

int
main (int argc, char **argv)
{
  return g_application_run (G_APPLICATION (example_app_new ()), argc, argv);
}
