#include "Spellbook.hpp"

//Constructor / Destructors
Spellbook::Spellbook(){
    return;
}

Spellbook::Spellbook(Spellbook const &src){
    *this = src;
    return;
}

Spellbook::~Spellbook(){
    return;
}

//Operator
Spellbook &Spellbook::operator=(Spellbook const &rhs){
    this->_spells = rhs._spells;
    return (*this);
}

//Public functions
void        Spellbook::learnSpell(ASpell *spell){
    for (std::vector<ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); it++){
        if ((*(*it)).getName() == (*spell).getName())
            return;
    }
    this->_spells.push_back(spell->clone());
}

void        Spellbook::forgetSpell(std::string const &spellName){
    for (std::vector<ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); it++){
        if ((*(*it)).getName() == spellName){
            this->_spells.erase(it);
            return;
        }
    }
}

ASpell      *Spellbook::createSpell(std::string const &spellName){
    for (std::vector<ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); it++){
        if ((*(*it)).getName() == spellName){
            return ((*it)->clone());
        }
    }
    return (NULL);
}