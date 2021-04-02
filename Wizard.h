//Jose Luis Gonzalez
//CSIS 137
//Final Project
//December 14, 2020


#ifndef Wizard_h
#define Wizard_h

#include "Adventurer.h"

class Wizard: public Adventurer
{
    private:
        Attack firstAttack;
        Attack secondAttack;
        string characterClass;
        string equip0;
        string equip1;
        string equip2;
        string equip3;
        string equip4;
        string equip5;
        string equip6;
        string equip7;
        string equip8;
        string equip9;
        string equip10;

        string skill2;
        string skill3;
        string cantrip0;
        string cantrip1;
        string cantrip2;
        string spell0;
        string spell1;
        string spell2;
        string spell3;
        vector<string> characterEquip;
        vector<string> cantrips;
    
    public:
        Wizard(string = "", int = 0, string = "", int = 0, string = "", string = "", string = "", Attack=Attack(), Attack=Attack());
        ~Wizard();
        virtual void setCharacterClass();
        virtual void setClassSkills(vector<string>);
        void setCantrips(vector<string>);
        void setSpells(vector<string>);
        virtual void setCharacterEquipment(vector<string>);
        
        string getCharacterClass() const;
        string getCharacterEquip0() const;
        string getCharacterEquip1() const;
        string getCharacterEquip2() const;
        string getCharacterEquip3() const;
        string getCharacterEquip4() const;
        string getCharacterEquip5() const;
        string getCharacterEquip6() const;
        string getCharacterEquip7() const;
        string getCharacterEquip8() const;
        string getCharacterEquip9() const;
        string getCharacterEquip10() const;
        
        string getCharacterSkill2() const;
        string getCharacterSkill3() const;
    
        string getCantrip0() const;
        string getCantrip1() const;
        string getCantrip2() const;
        string getSpell0() const;
        string getSpell1() const;
        string getSpell2() const;
        string getSpell3() const;
        virtual void print(ostream&) const;
};

#endif /* Wizard_h */
