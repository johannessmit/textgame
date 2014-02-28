#include <Command.h>
#include <string>
#include <vector>
#include <iostream>

Command::Command(std::string name, std::vector<std::string> args) {
    cName = name;
    cArgs = args;
}

bool Command::execute(std::vector<std::string> args) {
    if(args.size() != cArgs.size()) {
        return false;
    }
}

