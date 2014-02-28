#include <iostream>
#include <vector>
#include <string>

#include <Controller.h>
#include <Player.h>
#include <Entity.h>
#include <Attack.h>
#include <Cast.h>
#include <Command.h>

Controller::Controller() {

	Player* player = new Player(100, 1, 0, 10, 0, 0);
	Player::Stats* stats = player->getPlayerStats();
	std::cout << stats->health << "\n" << std::flush;

    init();
    loop();
}

Controller::~Controller() {

}

void Controller::init() {

}

void Controller::initAttacks() {

}

void Controller::loop() {

}
