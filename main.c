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
    GtkWidget *button;

    gtk_init (&argc, &argv);

    button = gtk_button_new_with_label("test");
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW (window), "Hello World");
    gtk_window_set_default_size(window, 400, 600);
    gtk_container_add(GTK_CONTAINER(window),button);
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
