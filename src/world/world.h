#ifndef WORLD_H
#define WORLD_H
#include "creature.h"

class World
{
    public:
        char * name;
        Creature creatures[256];
        addCreature(char * creaturename);
        World();
        ~World();
    protected:
    private:
};

#endif // WORLD_H
