#include <Entity.h>

Entity::Entity(int h, int l, int a, int d, int x, int y) {
    mStats = new Entity::Stats;
    mLocation = new Entity::Location;
    mStats->health = h;
    mStats->level = l;
    mStats->armor = a;
    mStats->damage = d;
    mStats->exp = 0;

    mLocation->x = x;
    mLocation->y = y;

}
