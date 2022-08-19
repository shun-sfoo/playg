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

## String

Strings defined as arrays
If a string is defined as an array, it’s in either stored in the static memory area or stack. This depends on the class of the array.
If the array’s class is static, then it’s placed in static memory area. This allocation and memory address is fixed for the life of the program. This area can be changed and is writable.

If the array’s class is auto, then it’s placed in stack. If the array is defined inside a function, its default class is auto.
The stack area will disappear when the function exits and returns to the caller. Arrays defined on the stack are writable.

```c
static char a[] = {'H', 'e', 'l', 'l', 'o', '\0'};

void
print_strings (void) {
  char b[] = "Hello";

  a[1] = 'a'; /* Because the array is static, it's writable. */
  b[1] = 'a'; /* Because the array is auto, it's writable. */

  printf ("%s\n", a); /* Hallo */
  printf ("%s\n", b); /* Hallo */
}
```

## code style

base on chromium

AllowShortBlocksOnASingleLine: Always
AllowShortCaseLabelsOnASingleLine: true
AllowShortFunctionsOnASingleLine: All
AllowShortLambdasOnASingleLine: All
AllowShortIfStatementsOnASingleLine: WithoutElse
AllowShortLoopsOnASingleLine: true

AlwaysBreakAfterDefinitionReturnType: All
PointerAlignment: Right

## GtkBuilder

You can check the ui file with gtk4-builder-tool.

1. gtk4-builder-tool validate <ui file name> validates the ui file. If the ui file includes some syntactical error, gtk4-builder-tool prints the error.
2. gtk4-builder-tool simplify <ui file name> simplifies the ui file and prints the result. If --replace option is given, it replaces the ui file with the simplified one. If the ui file specifies a value of property but it is default, then it will be removed. And some values are simplified. For example, “TRUE”and “FALSE” becomes “1” and “0” respectively. However, “TRUE” or “FALSE” is better for maintenance.

It is a good idea to check your ui file before compiling.

## Signal

GObject signals are registered, connected and emitted.

1. Signals are registered with the object type on which they are emitted. The registration is done usually when the object class is initialized.
2. Signals are connected to handlers by g_connect_signal or its family functions. The connection is usually done out of the object.
3. When Signals are emitted, the connected handlers are invoked. Signal is emitted on the instance of the object.
