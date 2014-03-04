#ifndef EXITCOMMAND_H
#define EXITCOMMAND_H

#include <Command.h>
#include <Controller.h>

class ExitCommand : public Command {
    public:
        ExitCommand(Controller* controller);
        ~ExitCommand();
        bool execute(std::string args);
    protected:

    private:
        Controller* mController;
};

#endif
