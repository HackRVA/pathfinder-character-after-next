
#include "LinearModifier.h"

namespace PathfinderCharacterAfterNext {

int LinearModifier::modify(int currentValue) {
    return currentValue + _adjustment;
}

}

