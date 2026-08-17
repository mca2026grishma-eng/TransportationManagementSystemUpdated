#ifndef LANDWAY_H
#define LANDWAY_H

#include "Transportation.h"

class Landway : public Transportation
{
public:
    Landway(int id, string name, string engine)
        : Transportation(id, name, engine)
    {
    }
};

#endif