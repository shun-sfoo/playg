project('menu', 'c')

gnome=import('gnome')
resources = gnome.compile_resources('resources','menu3.gresource.xml')
gtkdep = dependency('gtk4')
sourcefiles=files('menu3.c')

executable('menu1', 'menu1.c', dependencies : gtkdep)
executable('menu2', 'menu2.c', dependencies : gtkdep)
executable('menu3', sourcefiles, resources, dependencies: gtkdep)
