
#include "AbstractModifier.h"

namespace PathfinderCharacterAfterNext {

/* An additive modifier */
class LinearModifier : AbstractModifier {
private:
    int _adjustment;
public:
    LinearModifier(int adjustment);
    virtual int modify(int currentValue);
};

}

