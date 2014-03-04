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
#include <HelpCommand.h>

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
    ExitCommand* exitCommand = new ExitCommand(this);
    HelpCommand* helpCommand = new HelpCommand();

    commandListener = new CommandListener;

    commandListener->listenTo("/");
    commandListener->addCommand("/exit", exitCommand);
    commandListener->addCommand("/help", helpCommand);
}

void Controller::initAttacks() {

}

void Controller::loop() {
    while(run == true) {
        std::cin >> command;
        char comChar = command.at(0);
        std::cout << comChar << "\n";
        switch(comChar) {
            case '/':
                commandListener->loop(command);
                break;
            default:
                std::cout << "Input is not valid, for help, do: '/help' \n";
                break;
        }
    }
}

void Controller::exit() {
    std::cout << "Exit program \n";
    run = false;
    std::cout << run;

}
