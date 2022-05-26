#include "Fwoosh.hpp"

//Constructors/Destructor
Fwoosh::Fwoosh(){
    this->_name = "Fwoosh";
    this->_effects = "fwooshed";
    return;
}

Fwoosh::Fwoosh(std::string name, std::string effects){
    this->_name = name;
    this->_effects = effects;
    return;
}

Fwoosh::Fwoosh(Fwoosh const &src){
    *this = src;
    return;
}

Fwoosh::~Fwoosh(){
    return;
}

//Operator
Fwoosh              &Fwoosh::operator=(Fwoosh const &rhs){
    this->_name = rhs.getName();
    this->_effects = rhs.getEffects();
    return (*this);
}

//Public functions
ASpell      *Fwoosh::clone() const{
    return (new Fwoosh(*this));
}