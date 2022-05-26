#include "Polymorph.hpp"

//Constructors/Destructor
Polymorph::Polymorph(){
    this->_name = "Polymorph";
    this->_effects = "turned into a critter";
    return;
}

Polymorph::Polymorph(std::string name, std::string effects){
    this->_name = name;
    this->_effects = effects;
    return;
}

Polymorph::Polymorph(Polymorph const &src){
    *this = src;
    return;
}

Polymorph::~Polymorph(){
    return;
}

//Operator
Polymorph              &Polymorph::operator=(Polymorph const &rhs){
    this->_name = rhs.getName();
    this->_effects = rhs.getEffects();
    return (*this);
}

//Public functions
ASpell      *Polymorph::clone() const{
    return (new Polymorph(*this));
}