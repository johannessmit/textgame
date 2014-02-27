#ifndev ATTACK_H
#define ATTACK_H

class Attack {
    public:
        Attack(String aName, int aDamage, int aType, int aSpecial, int aLevel);
        virtual ~Attack();

    protected:

    private:
        String aName
        typedef struct {
            int damage;
            int type;
            int special;
            int level;
        } aStats;
};

#endif
