
Debian
====================
This directory contains files used to package revolvercoind/revolvercoin-qt
for Debian-based Linux systems. If you compile revolvercoind/revolvercoin-qt yourself, there are some useful files here.

## revolvercoin: URI support ##


revolvercoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install revolvercoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your revolvercoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/revolvercoin128.png` to `/usr/share/pixmaps`

revolvercoin-qt.protocol (KDE)

