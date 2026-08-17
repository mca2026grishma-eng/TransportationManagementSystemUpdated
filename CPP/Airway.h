#ifndef AIRWAY_H
#define AIRWAY_H

#include "Transportation.h"

class Airway : public Transportation
{
public:
    Airway(int id, string name, string engine)
        : Transportation(id, name, engine)
    {
    }
};

#endif