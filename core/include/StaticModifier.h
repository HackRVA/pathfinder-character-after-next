#ifndef STATIC_MODIFIER_H_
#define STATIC_MODIFIER_H_

namespace PathfinderCharacterAfterNext {

class StaticModifier {
private:
    int _setPoint;
public:
    StaticModifier(int setPoint);
    virtual int priority();
    virtual int modify(int currentValue);
};

}

#endif
