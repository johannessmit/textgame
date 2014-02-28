#ifndef ENTITY_H
#define ENTITY_H

class Entity {
	public:
        Entity(int h, int l, int a, int d);
        void attack();
        void cast();

        void calcDamage();

		typedef struct {
			int health;
			int level;
			int exp;
			int armor;
			int damage;
		} Stats;
    protected:
        Stats* mStats;
};

#endif
