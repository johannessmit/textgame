#ifndef COMMANDLISTENER_H
#define COMMANDLISTENER_H

#include <vector>
#include <Command.h>

class CommandListener {
    public:
        CommandListener(std::vector<Command>* cList);
        ~CommandListener();
    protected:

    private:
        std::vector<Command>* commandList;
};

#endif
