#include <iostream>
#include <Controller.h>
#include <Player.h>

Controller::Controller() {
	Player* player = new Player(100, 1, 0, 10);
	Player::Stats* stats = player->getPlayerStats();
	std::cout << stats->health << "\n" << std::flush;
}

Controller::~Controller() {

}
