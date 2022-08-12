CC ?= gcc
PKGCONFIG = $(shell which pkg-config)
CFLAGS = $(shell $(PKGCONFIG) --cflags gtk4)
LIBS = $(shell $(PKGCONFIG) --libs gtk4)
GLIB_COMPILE_RESOURCES = $(shell $(PKGCONFIG) --variable=glib_compile_resources gio-2.0)
GLIB_COMPILE_SCHEMAS = $(shell $(PKGCONFIG) --variable=glib_compile_schemas gio-2.0)

all: resources.c gschemas.compiled 

org.gtk.exampleapp.gschema.valid: org.gtk.exampleapp.gschema.xml
	$(GLIB_COMPILE_SCHEMAS) --strict --dry-run --schema-file=$< && mkdir -p $(@D) && touch $@

gschemas.compiled: org.gtk.exampleapp.gschema.valid
	$(GLIB_COMPILE_SCHEMAS) .

resources.c: exampleapp.gresource.xml window.glade
	$(GLIB_COMPILE_RESOURCES) exampleapp.gresource.xml --target=$@ --sourcedir=. --generate-source


clean: 
	rm resources.c
	rm gschemas.compiled
	rm org.gtk.exampleapp.gschema.valid
