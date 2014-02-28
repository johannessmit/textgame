#ifndef ATTACK_H
#define ATTACK_H

#include <string>

class Attack {
    public:
        Attack(std::string aName, int aDamage, int aType, int aSpecial, int aLevel);
        virtual ~Attack();

    protected:

    private:
        std::string aName;
        typedef struct {
            int damage;
            int type;
            int special;
            int level;
        } aStats;
};

#endif
