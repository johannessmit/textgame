#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller {
    public:
        Controller();
		~Controller();
        void initAttacks();
        void initCasts();
        void loop();

	protected:
		int id;
};

#endif
