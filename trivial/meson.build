project('tutorial', 'c')

gtkdep = dependency('gtk4')
gnome = import('gnome')

app_resources = gnome.compile_resources('exampleapp_resources',
  'resources/exampleapp.gresource.xml',
  source_dir: 'resources')

app_schemas = gnome.compile_schemas()

executable('trivial',
  'main.c',
  'exampleapp.c',
  'exampleappwin.c',
  'exampleappprefs.c',
  app_resources,
  app_schemas,
  dependencies: gtkdep)
