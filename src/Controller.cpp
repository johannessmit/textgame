#include <iostream>
#include <Controller.h>
#include <Player.h>
#include <Entity.h>
#include <Attack.h>
#include <Cast.h>

Controller::Controller() {

	Player* player = new Player(100, 1, 0, 10);
	Player::Stats* stats = player->getPlayerStats();
	std::cout << stats->health << "\n" << std::flush;

    initAttacks();
    loop();
}

Controller::~Controller() {

}

void Controller::initAttacks() {

}

void Controller::loop() {

}
