#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include <vector>

class Command
{
    public:
        Command();
        bool execute(std::vector<std::string> args);
    protected:
        std::vector<std::string> cArgs;
    private:
};

#endif // COMMANDS_H
