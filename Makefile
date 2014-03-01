#Variables
CC=g++
CFLAGS=-std=c++0x

#sourcefiles
SOURCES=src/Command.cpp src/Controller.cpp src/Entity.cpp src/main.cpp src/Player.cpp src/CommandListener.cpp src/ExitCommand.cpp
#Directory
INCLUDEDIR=include/
#progName
PROGNAME=Textgame

all: Release

Debug:
	$(CC) $(CFLAGS) -I$(INCLUDEDIR) $(SOURCES) -o debug/$(PROGNAME)

Release:
	$(CC) $(CFLAGS) -I$(INCLUDEDIR) $(SOURCES) -o release/$(PROGNAME)
