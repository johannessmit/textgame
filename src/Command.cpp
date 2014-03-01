#include <Command.h>
#include <string>
#include <vector>
#include <iostream>

Command::Command() {

}

bool Command::execute(std::vector<std::string> args) {
    if(args.size() != cArgs.size()) {
        return false;
    }
}
