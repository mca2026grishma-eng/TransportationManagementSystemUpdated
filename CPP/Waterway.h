#ifndef WATERWAY_H
#define WATERWAY_H

#include "Transportation.h"

class Waterway : public Transportation
{
public:
    Waterway(int id, string name, string engine)
        : Transportation(id, name, engine)
    {
    }
};

#endif