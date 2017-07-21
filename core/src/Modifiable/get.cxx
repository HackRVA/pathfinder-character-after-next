
#include "Modifiable.h"
#include <algorithm>

namespace PathfinderCharacterAfterNext {

static bool compareModifiers(const AbstractModifier &left, const AbstractModifier &right) {
    return left.priority() < right.priority();
}

int Modifiable::get() {
    ModifierList::iterator it;
    /* Sort the list of modifiers by priority */
    std::sort(_modifiers.begin(), _modifiers.end(), compareModifiers);
    int value = _base;
    for(it = _modifiers.begin(); it++)
        value = it->modify(value);
    return value;
}

}

