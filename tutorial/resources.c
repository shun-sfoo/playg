#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.tfe3"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[2261]; const double alignment; void * const ptr;}  tfe3_resource_data = {
  "\107\126\141\162\151\141\156\164\000\000\000\000\000\000\000\000"
  "\030\000\000\000\254\000\000\000\000\000\000\050\005\000\000\000"
  "\000\000\000\000\003\000\000\000\004\000\000\000\004\000\000\000"
  "\004\000\000\000\324\265\002\000\377\377\377\377\254\000\000\000"
  "\001\000\114\000\260\000\000\000\264\000\000\000\113\120\220\013"
  "\000\000\000\000\264\000\000\000\004\000\114\000\270\000\000\000"
  "\274\000\000\000\215\145\370\346\004\000\000\000\274\000\000\000"
  "\007\000\166\000\310\000\000\000\270\010\000\000\056\241\026\071"
  "\001\000\000\000\270\010\000\000\011\000\114\000\304\010\000\000"
  "\310\010\000\000\157\113\035\131\003\000\000\000\310\010\000\000"
  "\005\000\114\000\320\010\000\000\324\010\000\000\057\000\000\000"
  "\001\000\000\000\157\162\147\057\003\000\000\000\164\146\145\063"
  "\056\165\151\000\000\000\000\000\340\007\000\000\000\000\000\000"
  "\074\077\170\155\154\040\166\145\162\163\151\157\156\075\042\061"
  "\056\060\042\040\145\156\143\157\144\151\156\147\075\042\125\124"
  "\106\055\070\042\077\076\012\074\151\156\164\145\162\146\141\143"
  "\145\076\012\040\040\074\157\142\152\145\143\164\040\143\154\141"
  "\163\163\075\042\107\164\153\101\160\160\154\151\143\141\164\151"
  "\157\156\127\151\156\144\157\167\042\040\151\144\075\042\167\151"
  "\156\042\076\012\040\040\040\040\074\160\162\157\160\145\162\164"
  "\171\040\156\141\155\145\075\042\164\151\164\154\145\042\076\146"
  "\151\154\145\040\145\144\151\164\157\162\074\057\160\162\157\160"
  "\145\162\164\171\076\012\040\040\040\040\074\160\162\157\160\145"
  "\162\164\171\040\156\141\155\145\075\042\144\145\146\141\165\154"
  "\164\055\167\151\144\164\150\042\076\066\060\060\074\057\160\162"
  "\157\160\145\162\164\171\076\012\040\040\040\040\074\160\162\157"
  "\160\145\162\164\171\040\156\141\155\145\075\042\144\145\146\141"
  "\165\154\164\055\150\145\151\147\150\164\042\076\064\060\060\074"
  "\057\160\162\157\160\145\162\164\171\076\012\040\040\040\040\074"
  "\143\150\151\154\144\076\012\040\040\040\040\040\040\074\157\142"
  "\152\145\143\164\040\143\154\141\163\163\075\042\107\164\153\102"
  "\157\170\042\040\151\144\075\042\142\157\170\166\042\076\012\040"
  "\040\040\040\040\040\040\040\074\160\162\157\160\145\162\164\171"
  "\040\156\141\155\145\075\042\157\162\151\145\156\164\141\164\151"
  "\157\156\042\076\107\124\113\137\117\122\111\105\116\124\101\124"
  "\111\117\116\137\126\105\122\124\111\103\101\114\074\057\160\162"
  "\157\160\145\162\164\171\076\012\040\040\040\040\040\040\040\040"
  "\074\143\150\151\154\144\076\012\040\040\040\040\040\040\040\040"
  "\040\040\074\157\142\152\145\143\164\040\143\154\141\163\163\075"
  "\042\107\164\153\102\157\170\042\040\151\144\075\042\142\157\170"
  "\150\042\076\012\040\040\040\040\040\040\040\040\040\040\040\040"
  "\074\160\162\157\160\145\162\164\171\040\156\141\155\145\075\042"
  "\157\162\151\145\156\164\141\164\151\157\156\042\076\107\124\113"
  "\137\117\122\111\105\116\124\101\124\111\117\116\137\110\117\122"
  "\111\132\117\116\124\101\114\074\057\160\162\157\160\145\162\164"
  "\171\076\012\040\040\040\040\040\040\040\040\040\040\040\040\074"
  "\143\150\151\154\144\076\012\040\040\040\040\040\040\040\040\040"
  "\040\040\040\040\040\074\157\142\152\145\143\164\040\143\154\141"
  "\163\163\075\042\107\164\153\114\141\142\145\154\042\040\151\144"
  "\075\042\144\155\171\061\042\076\012\040\040\040\040\040\040\040"
  "\040\040\040\040\040\040\040\040\040\074\160\162\157\160\145\162"
  "\164\171\040\156\141\155\145\075\042\167\151\144\164\150\055\143"
  "\150\141\162\163\042\076\061\060\074\057\160\162\157\160\145\162"
  "\164\171\076\012\040\040\040\040\040\040\040\040\040\040\040\040"
  "\040\040\074\057\157\142\152\145\143\164\076\012\040\040\040\040"
  "\040\040\040\040\040\040\040\040\074\057\143\150\151\154\144\076"
  "\012\040\040\040\040\040\040\040\040\040\040\040\040\074\143\150"
  "\151\154\144\076\012\040\040\040\040\040\040\040\040\040\040\040"
  "\040\040\040\074\157\142\152\145\143\164\040\143\154\141\163\163"
  "\075\042\107\164\153\102\165\164\164\157\156\042\040\151\144\075"
  "\042\142\164\156\156\042\076\012\040\040\040\040\040\040\040\040"
  "\040\040\040\040\040\040\040\040\074\160\162\157\160\145\162\164"
  "\171\040\156\141\155\145\075\042\154\141\142\145\154\042\076\116"
  "\145\167\074\057\160\162\157\160\145\162\164\171\076\012\040\040"
  "\040\040\040\040\040\040\040\040\040\040\040\040\074\057\157\142"
  "\152\145\143\164\076\012\040\040\040\040\040\040\040\040\040\040"
  "\040\040\074\057\143\150\151\154\144\076\012\040\040\040\040\040"
  "\040\040\040\040\040\040\040\074\143\150\151\154\144\076\012\040"
  "\040\040\040\040\040\040\040\040\040\040\040\040\040\074\157\142"
  "\152\145\143\164\040\143\154\141\163\163\075\042\107\164\153\102"
  "\165\164\164\157\156\042\040\151\144\075\042\142\164\156\157\042"
  "\076\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040"
  "\040\040\074\160\162\157\160\145\162\164\171\040\156\141\155\145"
  "\075\042\154\141\142\145\154\042\076\117\160\145\156\074\057\160"
  "\162\157\160\145\162\164\171\076\012\040\040\040\040\040\040\040"
  "\040\040\040\040\040\040\040\074\057\157\142\152\145\143\164\076"
  "\012\040\040\040\040\040\040\040\040\040\040\040\040\074\057\143"
  "\150\151\154\144\076\012\040\040\040\040\040\040\040\040\040\040"
  "\040\040\074\143\150\151\154\144\076\012\040\040\040\040\040\040"
  "\040\040\040\040\040\040\040\040\074\157\142\152\145\143\164\040"
  "\143\154\141\163\163\075\042\107\164\153\114\141\142\145\154\042"
  "\040\151\144\075\042\144\155\171\062\042\076\012\040\040\040\040"
  "\040\040\040\040\040\040\040\040\040\040\040\040\074\160\162\157"
  "\160\145\162\164\171\040\156\141\155\145\075\042\150\145\170\160"
  "\141\156\144\042\076\124\122\125\105\074\057\160\162\157\160\145"
  "\162\164\171\076\012\040\040\040\040\040\040\040\040\040\040\040"
  "\040\040\040\074\057\157\142\152\145\143\164\076\012\040\040\040"
  "\040\040\040\040\040\040\040\040\040\074\057\143\150\151\154\144"
  "\076\012\040\040\040\040\040\040\040\040\040\040\040\040\074\143"
  "\150\151\154\144\076\012\040\040\040\040\040\040\040\040\040\040"
  "\040\040\040\040\074\157\142\152\145\143\164\040\143\154\141\163"
  "\163\075\042\107\164\153\102\165\164\164\157\156\042\040\151\144"
  "\075\042\142\164\156\163\042\076\012\040\040\040\040\040\040\040"
  "\040\040\040\040\040\040\040\040\040\074\160\162\157\160\145\162"
  "\164\171\040\156\141\155\145\075\042\154\141\142\145\154\042\076"
  "\123\141\166\145\074\057\160\162\157\160\145\162\164\171\076\012"
  "\040\040\040\040\040\040\040\040\040\040\040\040\040\040\074\057"
  "\157\142\152\145\143\164\076\012\040\040\040\040\040\040\040\040"
  "\040\040\040\040\074\057\143\150\151\154\144\076\012\040\040\040"
  "\040\040\040\040\040\040\040\040\040\074\143\150\151\154\144\076"
  "\012\040\040\040\040\040\040\040\040\040\040\040\040\040\040\074"
  "\157\142\152\145\143\164\040\143\154\141\163\163\075\042\107\164"
  "\153\102\165\164\164\157\156\042\040\151\144\075\042\142\164\156"
  "\143\042\076\012\040\040\040\040\040\040\040\040\040\040\040\040"
  "\040\040\040\040\074\160\162\157\160\145\162\164\171\040\156\141"
  "\155\145\075\042\154\141\142\145\154\042\076\103\154\157\163\145"
  "\074\057\160\162\157\160\145\162\164\171\076\012\040\040\040\040"
  "\040\040\040\040\040\040\040\040\040\040\074\057\157\142\152\145"
  "\143\164\076\012\040\040\040\040\040\040\040\040\040\040\040\040"
  "\074\057\143\150\151\154\144\076\012\040\040\040\040\040\040\040"
  "\040\040\040\040\040\074\143\150\151\154\144\076\012\040\040\040"
  "\040\040\040\040\040\040\040\040\040\040\040\074\157\142\152\145"
  "\143\164\040\143\154\141\163\163\075\042\107\164\153\114\141\142"
  "\145\154\042\040\151\144\075\042\144\155\171\063\042\076\012\040"
  "\040\040\040\040\040\040\040\040\040\040\040\040\040\040\040\074"
  "\160\162\157\160\145\162\164\171\040\156\141\155\145\075\042\167"
  "\151\144\164\150\055\143\150\141\162\163\042\076\061\060\074\057"
  "\160\162\157\160\145\162\164\171\076\012\040\040\040\040\040\040"
  "\040\040\040\040\040\040\040\040\074\057\157\142\152\145\143\164"
  "\076\012\040\040\040\040\040\040\040\040\040\040\040\040\074\057"
  "\143\150\151\154\144\076\012\040\040\040\040\040\040\040\040\040"
  "\040\074\057\157\142\152\145\143\164\076\012\040\040\040\040\040"
  "\040\040\040\074\057\143\150\151\154\144\076\012\040\040\040\040"
  "\040\040\040\040\074\143\150\151\154\144\076\012\040\040\040\040"
  "\040\040\040\040\040\040\074\157\142\152\145\143\164\040\143\154"
  "\141\163\163\075\042\107\164\153\116\157\164\145\142\157\157\153"
  "\042\040\151\144\075\042\156\142\042\076\012\040\040\040\040\040"
  "\040\040\040\040\040\040\040\074\160\162\157\160\145\162\164\171"
  "\040\156\141\155\145\075\042\150\145\170\160\141\156\144\042\076"
  "\124\122\125\105\074\057\160\162\157\160\145\162\164\171\076\012"
  "\040\040\040\040\040\040\040\040\040\040\040\040\074\160\162\157"
  "\160\145\162\164\171\040\156\141\155\145\075\042\166\145\170\160"
  "\141\156\144\042\076\124\122\125\105\074\057\160\162\157\160\145"
  "\162\164\171\076\012\040\040\040\040\040\040\040\040\040\040\074"
  "\057\157\142\152\145\143\164\076\012\040\040\040\040\040\040\040"
  "\040\074\057\143\150\151\154\144\076\012\040\040\040\040\040\040"
  "\074\057\157\142\152\145\143\164\076\012\040\040\040\040\074\057"
  "\143\150\151\154\144\076\012\040\040\074\057\157\142\152\145\143"
  "\164\076\012\074\057\151\156\164\145\162\146\141\143\145\076\012"
  "\000\000\050\165\165\141\171\051\164\165\164\157\162\151\141\154"
  "\057\000\000\000\004\000\000\000\164\146\145\063\057\000\000\000"
  "\002\000\000\000" };

static GStaticResource static_resource = { tfe3_resource_data.data, sizeof (tfe3_resource_data.data) - 1 /* nul terminator */, NULL, NULL, NULL };

G_MODULE_EXPORT
GResource *tfe3_get_resource (void);
GResource *tfe3_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/* GLIB - Library of useful routines for C programming
 * Copyright (C) 1995-1997  Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

/*
 * Modified by the GLib Team and others 1997-2000.  See the AUTHORS
 * file for a list of people on the GLib Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GLib at ftp://ftp.gtk.org/pub/gtk/.
 */

#ifndef __G_CONSTRUCTOR_H__
#define __G_CONSTRUCTOR_H__

/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a usable way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

/*
 * Only try to include gslist.h if not already included via glib.h,
 * so that items using gconstructor.h outside of GLib (such as
 * GResources) continue to build properly.
 */
#ifndef __G_LIB_H__
#include "gslist.h"
#endif

#include <stdlib.h>

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for x86 and x64/ARM/ARM64 programs, as symbols on x86 are prefixed
 * with an underscore but symbols on x64/ARM/ARM64 are not.
 */
#ifdef _M_IX86
#define G_MSVC_SYMBOL_PREFIX "_"
#else
#define G_MSVC_SYMBOL_PREFIX ""
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */
#endif /* __G_CONSTRUCTOR_H__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(tfe3resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(tfe3resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(tfe3resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(tfe3resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void tfe3resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void tfe3resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}