#include <iostream>
#include <vector>
#include <string>

#include <Controller.h>
#include <Player.h>
#include <Entity.h>
#include <Attack.h>
#include <Cast.h>
#include <Command.h>
#include <CommandListener.h>
#include <ExitCommand.h>

Controller::Controller() {
    run = true;
	Player* player = new Player(100, 1, 0, 10, 0, 0);
	Player::Stats* stats = player->getPlayerStats();
	std::cout << stats->health << "\n" << std::flush;

    init();
    loop();
}

Controller::~Controller() {

}

void Controller::init() {
    Command* walkCommand = new Command();
    ExitCommand* exitCommand = new ExitCommand(this);

    CommandListener* commandListener = new CommandListener;

    commandListener->listenTo("/");
    commandListener->addCommand("exit", exitCommand);
    commandListener->addCommand("w", walkCommand);
}

void Controller::initAttacks() {

}

void Controller::loop() {
    while(run == true) {
        std::cin >> command;

    }
}
