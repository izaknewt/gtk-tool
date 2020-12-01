#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <gdk/gdkconfig.h>
#include <glib.h>
#include <glibconfig.h>
#include <pango/pango.h>

int main(int argc, char *argv[]) {
    GtkWidget *window;
    gtk_init (&argc, &argv);

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW (window), "Hello World");
    gtk_widget_show (window);
    gtk_main();
    return 0;
}
