#ifndef HELPCOMMAND_H
#define HELPCOMMAND_H

#include <string>

#include <Command.h>

class HelpCommand : public Command
{
    public:
        HelpCommand();
        ~HelpCommand();
        bool execute(std::string args);
    protected:

    private:
};

#endif // HELPCOMMAND_H
