#Variables
CC=g++
CFLAGS=

#sourcefiles
SOURCES=src/main.cpp src/Player.cpp src/Controller.cpp src/Entity.cpp src/Command.cpp
#Directory
INCLUDEDIR=include/
#progName
PROGNAME=Textgame

all: Release

Debug:
	g++ -I$(INCLUDEDIR) $(SOURCES) -o debug/$(PROGNAME)

Release:
	g++ -I$(INCLUDEDIR) $(SOURCES) -o release/$(PROGNAME)
