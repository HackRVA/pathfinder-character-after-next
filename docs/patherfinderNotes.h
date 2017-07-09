/*
 *  Character Creation
 *  1. Set Ability Scores (AM will be function of AbilityScores)
 *  2. Select alignment and diety
 *  3. Pick Race, Class (Add RacialMods to list)
 *  4. Add Character Level -> Calc HP (Arch types....ask brian about this)
 *  5. CharacterClassLevel
 *  6. Skill Ranks -> edit modifier list
 *  7. Feat(s), traits
 *  8. Class abilities
 *  9. Spells(unknown, prepped).
 * 10. Equipment
 */

/*
 *  Will use STL on backend/Qt on front end
 *  I think we agreed that front end work wont start until back end is
 *  in a semi decently tested alpha state(correct me if I'm wrong).
 *  Windows integration must be tested against visual studio compiler
 *  Eli said he would do package maintaining over dinner(will be a while
 *  before we need this but very appreciated).
 */

class Character {
private:
    FavoredClasses favoredClasses;
    ClassList classList;
    Race race;
    AbilityScores abilityScores;
    SkillRanks skillRanks;
    LanguageList languageList;

    int alignment;
    int sizeClass;

public:

    //get/set functions for everything
};

class CharacterClass {
private:
    int level;
public:
    explicit CharacterClass(int alignment);
    void setLevel(int lvl);
    int getLevel(void);
}

class Diety {
    explicit Diety(int alignment);
};

class AbstractModifiable {
    
};

class Speed : public AbstractModifiable {
    
};

class SkillRanks : public AbstractModifiable {
    
}; 

class ArmorClass : public AbstractModifiable {
    
};

class Race : public AbstractModifiable {
    RacialModList racialModList;
}

class AbilityScores : public AbstractModifiable {
private:
    BaseAS baseAS;
    AbstractModifierList abstractModifierList;
    
    AbilityScores();//initialize empty BaseAS
    int abilityMod(void) {
        return ((baseAS + sumModifierList)-10)/2;
    }
    int sumModifierList(void);
    void setBaseAS(/*some params*/);
    
};

