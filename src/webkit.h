#ifndef UZBL_WEBKIT_H
#define UZBL_WEBKIT_H

#include <webkit2/webkit2.h>

#ifndef QUARTZ
#include <gtk/gtkx.h>
#endif

#include <gtk/gtk.h>
#ifndef QUARTZ
#include <gdk/gdkx.h>
#else
#include <gdk/gdkquartz.h>
#endif
#include <libsoup/soup.h>
#include <glib.h>

#endif
