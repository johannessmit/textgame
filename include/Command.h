#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include <vector>

class Command
{
    public:
        Command();
        virtual bool execute(std::string cString);
    protected:
        std::vector<std::string> cArgs;
    private:
};

#endif // COMMANDS_H
