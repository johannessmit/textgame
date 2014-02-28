#include <Player.h>
#include <iostream>

Player::Player(int h, int l, int a, int d, int x, int y) : Entity(h, l, a, d,x,y) {
    std::cout << "I do stuff ^^ \n" << std::flush;
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
