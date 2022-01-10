// This file is part of os-installer
// Copyright (C) 2013-2022 Solus Project
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include <gtk/gtk.h>

static void on_activate(GtkApplication *app) {
    g_assert(GTK_IS_APPLICATION(app));

    // TODO: Create and show our window
}

int main(int argc, char *argv[]) {
    GtkApplication *app = gtk_application_new(
        "us.getsol.Installer",
        G_APPLICATION_FLAGS_NONE
    );

    g_signal_connect(app, "activate", G_CALLBACK(on_activate), NULL);

    gtk_init(&argc, &argv);

    int status = g_application_run(G_APPLICATION(app), argc, argv);

    // Cleanup
    g_object_unref(app);
    return status;
}
