project('tutorial', 'c')
gnome = import('gnome')
cc = meson.get_compiler('c')
m_dep = cc.find_library('m', required : false)
gtkdep = dependency('gtk4')

tfc_resources = gnome.compile_resources(
    'tfc.gresource', 'tfc.gresource.xml',
    source_dir: '.',
)

executable('square', 'square.c', dependencies : gtkdep)
executable('drawing', 'drawarea.c', dependencies : gtkdep)
executable('tfc', 'tfc.c', tfc_resources, dependencies : [gtkdep, m_dep])
executable('ball', 'ball.c', dependencies : [gtkdep, m_dep])
executable('box', 'box.c', dependencies : gtkdep)
executable('scrolled_text', 'scrolled_text.c', dependencies : gtkdep)
executable('tfv3', 'tfv3.c', dependencies : gtkdep)
executable('tfv4', 'tfv4.c', dependencies : gtkdep)
executable('tfe1', 'tfe1.c', dependencies : gtkdep)
executable('tfe2', 'tfe2.c', dependencies : gtkdep)
executable('tfe3', 'tfe3.c', dependencies : gtkdep)
