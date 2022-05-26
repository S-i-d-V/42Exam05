#include "Dummy.hpp"

//Constructors/Destructor
Dummy::Dummy(){
    this->_type = "Target Practice Dummy";
    return;
}

Dummy::Dummy(std::string type){
    return;
}

Dummy::Dummy(Dummy const &src){
    *this = src;
    return;
}

Dummy::~Dummy(){
    return;
}

//Operator
ATarget             &Dummy::operator=(Dummy const &rhs){
    this->_type = rhs.getType();
    return (*this);
}

//Public functions
ATarget     *Dummy::clone() const{
    return (new Dummy(*this));
}