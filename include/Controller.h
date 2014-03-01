#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <string>

class Controller {
    public:
        Controller();
		~Controller();
        void init();
        void initAttacks();
        void initCasts();
        void loop();

	protected:
		int id;
        std::string command;
        bool run;
};

#endif
