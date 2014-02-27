#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller {
    public:
        Controller();
		~Controller();
        initAttacks();
        initCasts();
        loop();

	protected:
		int id;
};

#endif
