#include "Fireball.hpp"

//Constructors/Destructor
Fireball::Fireball(){
    this->_name = "Fireball";
    this->_effects = "burnt to a crisp";
    return;
}

Fireball::Fireball(std::string name, std::string effects){
    this->_name = name;
    this->_effects = effects;
    return;
}

Fireball::Fireball(Fireball const &src){
    *this = src;
    return;
}

Fireball::~Fireball(){
    return;
}

//Operator
Fireball              &Fireball::operator=(Fireball const &rhs){
    this->_name = rhs.getName();
    this->_effects = rhs.getEffects();
    return (*this);
}

//Public functions
ASpell      *Fireball::clone() const{
    return (new Fireball(*this));
}