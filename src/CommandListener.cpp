#include <CommandListener.h>

#include <iostream>
#include <vector>
#include <string>

#include <Command.h>

CommandListener::CommandListener() {
    commandList = new std::vector<Command*>();
    cCallList = new std::vector<std::string>();
}

bool CommandListener::loop(std::string cString) {
    for(int i = 0; i < cCallList->size(); i++) {
       if(cString == cCallList->at(i)) {
            commandList->at(i)->execute(cString);
            break;
        }
    }
}

//Actually works at first try :O
bool CommandListener::addCommand(std::string cString, Command* command) {
    int i = 0;
    bool exist = false;
    if(cCallList->size() == 0) {
        cCallList->push_back(cString);
        commandList->push_back(command);
        return true;
    }
    while(i < cCallList->size()) {
        std::cout << cCallList->at(i) << "\n" << std::flush;
        if(cCallList->at(i) == cString) {
            return false;
        }
        i++;
    }
    cCallList->push_back(cString);
    commandList->push_back(command);
    return true;
}

bool CommandListener::listenTo(std::string listenTo) {
    listener = listenTo;
}
