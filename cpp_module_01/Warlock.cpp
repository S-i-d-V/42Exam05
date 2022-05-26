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
    for (std::vector<ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); it++){
        if ((*(*it)).getName() == (*spell).getName())
            return;
    }
    this->_spells.push_back(spell->clone());
}

void        Warlock::forgetSpell(std::string spellName){
    for (std::vector<ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); it++){
        if ((*(*it)).getName() == spellName){
            this->_spells.erase(it);
            return;
        }
    }
}

void        Warlock::launchSpell(std::string spellName, ATarget &target){
    for (std::vector<ASpell*>::iterator it = this->_spells.begin(); it != this->_spells.end(); it++){
        if ((*(*it)).getName() == spellName){
            (*it)->launch(target);
            return;
        }
    }
}
