#include <ExitCommand.h>
#include <Controller.h>

#include <iostream>

ExitCommand::ExitCommand(Controller* controller) : Command(), mController(controller){

}

bool ExitCommand::execute(std::string cString) {
    mController->exit();
    return true;
}
