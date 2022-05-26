#include "Warlock.hpp"

//Constructor / Destructors
Warlock::Warlock(){
    return;
}

Warlock::Warlock(std::string name, std::string title){
    this->setName(name);
    this->setTitle(title);
    std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(Warlock const &src){
    this->setName(src.getName());
    this->setTitle(src.getTitle());
}

Warlock::~Warlock(){
    std::cout << this->getName() << ": My job here is done." << std::endl;
    return;
}

//Operator
Warlock &Warlock::operator=(Warlock const &rhs){
    this->setName(rhs.getName());
    this->setTitle(rhs.getTitle());
    return (*this);
}

//Public functions
std::string const &Warlock::getName() const{
    return (this->_name);
}

std::string const &Warlock::getTitle() const{
    return (this->_title);
}

void        Warlock::setName(std::string const &name){
    this->_name = name;
}

void        Warlock::setTitle(std::string const &title){
    this->_title = title;
}

void        Warlock::introduce() const{
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void        Warlock::learnSpell(ASpell *spell){
    this->_spellbook.learnSpell(spell);
}

void        Warlock::forgetSpell(std::string spellName){
    this->_spellbook.forgetSpell(spellName);
}

void        Warlock::launchSpell(std::string spellName, ATarget &target){
    ASpell  *spell = this->_spellbook.createSpell(spellName);
    if (spell != NULL){
        spell->launch(target);
        delete spell;
    }
}
