#include <gtk/gtk.h>

static void
print_wakeup (GtkWidget *widget,
             gpointer   data)
{
  g_print ("Wake Me Up Inside\n");
}

static void
activate (GtkApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkWidget *view;
  GtkTextBuffer *buffer;
  GtkWidget *button;
  GtkWidget *button_box;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Wake Me Up");
  gtk_window_set_default_size (GTK_WINDOW (window), 250, 150);

  view = gtk_text_view_new ();

  buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (view));
  const gchar *msg = "Wake Me Up Inside";
  gtk_text_buffer_set_text(buffer, msg, sizeof(msg));

  button_box = gtk_button_box_new (GTK_ORIENTATION_HORIZONTAL);
  gtk_container_add (GTK_CONTAINER (window), button_box);

  button = gtk_button_new_with_label ("I Can't Wake Up");
  g_signal_connect (button, "clicked", G_CALLBACK (print_wakeup), NULL);
  g_signal_connect_swapped (button, "clicked", G_CALLBACK (gtk_widget_destroy), window);
  gtk_container_add (GTK_CONTAINER (button_box), button);

  gtk_widget_show_all (window);
}

int
main (int    argc,
      char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
