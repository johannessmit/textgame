#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>
#include <CommandListener.h>

class Controller {
    public:
        Controller();
		~Controller();
        void init();
        void initAttacks();
        void initCasts();
        void loop();
        void exit();

	protected:
		int id;
        std::string command;
        CommandListener* commandListener;
        bool run;
};

#endif
