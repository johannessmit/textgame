#ifndef PLAYER_H
#define PLAYER_H

#include <Entity.h>

class Player: public Entity {

    public:
		Player(int h, int l, int a, int d);

        int		adjustPlayerHealth(int a);
        bool    addPlayerExp(int a);
		Entity::Stats* getPlayerStats();

    protected:
		Entity::Stats* mStats;
        //int loadout [6];
        //int inventory [10];


	private:
        bool pSetPlayerLvl();
};

#endif // PLAYER_H
