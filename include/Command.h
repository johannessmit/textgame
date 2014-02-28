#ifndef COMMANDS_H
#define COMMANDS_H

#include <string>
#include <vector>

class Command
{
    public:
        Command(std::string name, std::vector<std::string> args);
        ~Command();
        bool execute(std::vector<std::string> args);
    protected:
        std::string cName;
        std::vector<std::string> cArgs;
    private:
};

#endif // COMMANDS_H
