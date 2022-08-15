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

## gobject articles

[object-oriented](http://garfileo.is-programmer.com/categories/6934/posts)

### manually

macro extend

`gcc $(pkg-config --cflags --libs gobject-2.0) -E -P pm-dlist.c >> extend.c`

compiler

`gcc $(pkg-config --cflags --libs gobject-2.0) pm-dlist.c main.c -o test`
