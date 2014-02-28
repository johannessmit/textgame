#include <Player.h>

Player::Player(int h, int l, int a, int d) : Entity(h, l, a, d) {
    mStats = new Entity::Stats;
    mStats->health = h;
    mStats->level = l;
    mStats->armor = a;
    mStats->damage = d;
    mStats->exp = 0;
}

int Player::adjustPlayerHealth(int a) {
    mStats->health += a;
    return mStats->health;
}

bool Player::addPlayerExp(int a) {
    if(a > 0) {
        mStats->exp += a;
        return true;
    }
    return false;
}

Player::Stats* Player::getPlayerStats() {
	return mStats;
}
