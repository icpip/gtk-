/* GTK - The GIMP Toolkit
 * Copyright (C) 2011      Alberto Ruiz <aruiz@gnome.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#if !defined (__GTK_H_INSIDE__) && !defined (GTK_COMPILATION)
#error "Only <gtk/gtk.h> can be included directly."
#endif

#ifndef __GTK_FONT_CHOOSER_DIALOG_H__
#define __GTK_FONT_CHOOSER_DIALOG_H__

#include <gtk/gtkdialog.h>

G_BEGIN_DECLS

#define GTK_TYPE_FONT_CHOOSER_DIALOG              (gtk_font_chooser_dialog_get_type ())
#define GTK_FONT_CHOOSER_DIALOG(obj)              (G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_TYPE_FONT_CHOOSER_DIALOG, GtkFontChooserDialog))
#define GTK_FONT_CHOOSER_DIALOG_CLASS(klass)      (G_TYPE_CHECK_CLASS_CAST ((klass), GTK_TYPE_FONT_CHOOSER_DIALOG, GtkFontChooserDialogClass))
#define GTK_IS_FONT_CHOOSER_DIALOG(obj)           (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_TYPE_FONT_CHOOSER_DIALOG))
#define GTK_IS_FONT_CHOOSER_DIALOG_CLASS(klass)   (G_TYPE_CHECK_CLASS_TYPE ((klass), GTK_TYPE_FONT_CHOOSER_DIALOG))
#define GTK_FONT_CHOOSER_DIALOG_GET_CLASS(obj)    (G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_TYPE_FONT_CHOOSER_DIALOG, GtkFontChooserDialogClass))

typedef struct _GtkFontChooserDialog              GtkFontChooserDialog;
typedef struct _GtkFontChooserDialogPrivate       GtkFontChooserDialogPrivate;
typedef struct _GtkFontChooserDialogClass         GtkFontChooserDialogClass;

struct _GtkFontChooserDialog
{
  GtkDialog parent_instance;

  /*< private >*/
  GtkFontChooserDialogPrivate *priv;
};

struct _GtkFontChooserDialogClass
{
  GtkDialogClass parent_class;

  /* Padding for future expansion */
  void (*_gtk_reserved1) (void);
  void (*_gtk_reserved2) (void);
  void (*_gtk_reserved3) (void);
  void (*_gtk_reserved4) (void);
};

GType      gtk_font_chooser_dialog_get_type           (void) G_GNUC_CONST;
GtkWidget* gtk_font_chooser_dialog_new                (const gchar          *title,
                                                       GtkWindow            *window);

GtkWidget* gtk_font_chooser_dialog_get_font_chooser   (GtkFontChooserDialog *fcd);

gchar*     gtk_font_chooser_dialog_get_font_name      (GtkFontChooserDialog *fcd);

gboolean   gtk_font_chooser_dialog_set_font_name      (GtkFontChooserDialog *fcd,
                                                       const gchar          *fontname);
const gchar*
          gtk_font_chooser_dialog_get_preview_text    (GtkFontChooserDialog *fcd);

void      gtk_font_chooser_dialog_set_preview_text    (GtkFontChooserDialog *fcd,
                                                       const gchar          *text);

G_END_DECLS

#endif /* __GTK_FONT_CHOOSER_DIALOG_H__ */