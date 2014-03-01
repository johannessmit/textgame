#ifndef COMMANDLISTENER_H
#define COMMANDLISTENER_H

#include <vector>
#include <string>
#include <Command.h>

class CommandListener {
    public:
        CommandListener();
        ~CommandListener();
        bool loop(std::string cString);

        bool addCommand(std::string cString, Command* command);
        bool listenTo(std::string listenTo);
    protected:

    private:
        std::string listener;

        std::vector<Command*>* commandList;
        std::vector<std::string>* cCallList;
};

#endif
