#ifndef CAST_H
#define CAST_H

class Cast {
    public:
        Cast(String cName, int cDamage, int cType, int cSpecial, int cLevel);
        virtual ~Cast();

    protected:

    private:
        String cName
        typedef struct {
            int damage;
            int type;
            int special;
            int level;
        } cStats;
};


#endif //CAST_H
