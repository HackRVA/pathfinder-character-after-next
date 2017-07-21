
#ifndef MODIFIABLE_H_
#define MODIFIABLE_H_

#include "AbstractModifiable.h"
#include "AbstractModifier.h"

namespace PathfinderCharacterAfterNext {

/* A modifiable that cannot have new modifiers added to it */
class Modifiable : AbstractModifiable {
private:
    int _base;
    ModifierList _modifiers;
public:
    Modifiable(int base, ModifierList modifiers);
    virtual int get();
};

}

#endif

