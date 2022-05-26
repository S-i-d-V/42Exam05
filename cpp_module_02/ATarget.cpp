#include "ASpell.hpp"
#include "ATarget.hpp"
#include <iostream>

//Constructors/Destructor
ATarget::ATarget(){
    return;
}

ATarget::ATarget(std::string type){
    this->_type = type;
    return;
}

ATarget::ATarget(ATarget const &src){
    *this = src;
    return;
}

ATarget::~ATarget(){
    return;
}

//Operator
ATarget             &ATarget::operator=(ATarget const &rhs){
    this->_type = rhs.getType();
    return (*this);
}


//Public functions
std::string const   &ATarget::getType() const{
    return (this->_type);
}

void                ATarget::getHitBySpell(ASpell const &spell) const{
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
