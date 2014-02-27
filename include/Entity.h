#ifndef ENTITY_H
#define ENTITY_H

class Entity {
	public:
		typedef struct {
			int health;
			int level;
			int exp;
			int armor;
			int damage;
		} Stats;
};

#endif
