#include "ASpell.hpp"

//Constructor/Destructor
ASpell::ASpell(){
    return;
}

ASpell::ASpell(std::string name, std::string effects){
    this->_name = name;
    this->_effects = effects;
    return;
}

ASpell::ASpell(ASpell const &src){
    *this = src;
    return;
}

ASpell::~ASpell(){
    return;
}

//Operator
ASpell  &ASpell::operator=(ASpell const &rhs){
    this->_name = rhs.getName();
    this->_effects = rhs.getEffects();
    return (*this);
}

//Public functions
std::string ASpell::getName() const{
    return (this->_name);
}

std::string ASpell::getEffects() const{
    return (this->_effects);
}

void        ASpell::launch(ATarget const &target){
    target.getHitBySpell((*this));
}

