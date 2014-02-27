#Variables
CC=g++
CFLAGS=

#sourcefiles
SOURCES=src/main.cpp src/Player.cpp src/Controller.cpp
#Directory
INCLUDEDIR=include/
#progName
PROGNAME=Textgame

all:
	g++ -I$(INCLUDEDIR) $(SOURCES) -o $(PROGNAME)

Debug:
	g++ -I$(INCLUDEDIR) $(SOURCES) -o debug/$(PROGNAME)

Release:
	g++ -I$(INCLUDEDIR) $(SOURCES) -o release/$(PROGNAME)