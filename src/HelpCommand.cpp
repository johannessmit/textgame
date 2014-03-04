#include "HelpCommand.h"

#include <iostream>

HelpCommand::HelpCommand() : Command() {
    //ctor
}

bool HelpCommand::execute(std::string cString) {
    std::cout << "Help-file \n"
        << "/help : show help \n"
        << "/exit : close program \n";
    return true;
}
