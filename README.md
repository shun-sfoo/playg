# playg

## G_DEFINE_TYPE

See G_DEFINE_TYPE_EXTENDED() for an example.

关于的用法 G_DEFINE_TYPE 可以查看 G_DEFINE_TYPE_EXTENDED() 源码中的例子

## generte resouce source code

glib-compile-resources exampleapp.gresource.xml --target=resources.c --generate-source

## gsettings

copy gschemas.compiled to build directory

## example

use cmake tool-chain

## trivial

use meson tool-chain

## tutorial

### animation

the key of animation in gtk and cairo is

`g_timeout_add(1000, (GSourceFunc) time_handler, (gpointer) drawarea);`

```c
gboolean
time_handler(GtkWidget* widget) {
    gtk_widget_queue_draw(widget);

    return TRUE;
}
```

`gtk_widget_queue_draw()` which schedules a redraw of the widget

## Container

GtkWindow and GtkApplicationWindow can have only one child.
If you want to add two or more widgets in a window, you need a container widget. GtkBox is one of the containers.
