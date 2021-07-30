CONFIG += ordered

TEMPLATE = subdirs

SUBDIRS += src \
           MapDownloader

MapDownloader.depends = src
