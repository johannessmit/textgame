#ifndef CAST_H
#define CAST_H

#include <string>

class Cast {
    public:
        Cast(std::string cName, int cDamage, int cType, int cSpecial, int cLevel);
        ~Cast();

    protected:

    private:
        std::string cName;
        typedef struct {
            int damage;
            int type;
            int special;
            int level;
        } cStats;
};


#endif //CAST_H
