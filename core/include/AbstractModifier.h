
#ifndef ABSTRACT_MODIFIER_H_
#define ABSTRACT_MODIFIER_H_

#include <vector>

namespace PathfinderCharacterAfterNext {

class AbstractModifier {
    virtual int priority();
    virtual int modify(int currentValue);
};

typedef std::vector<AbstractModifier> ModifierList;

}

#endif

