#include "BrickWall.hpp"

//Constructors/Destructor
BrickWall::BrickWall(){
    this->_type = "Inconspicuous Red-brick Wall";
    return;
}

BrickWall::BrickWall(std::string type){
    return;
}

BrickWall::BrickWall(BrickWall const &src){
    *this = src;
    return;
}

BrickWall::~BrickWall(){
    return;
}

//Operator
ATarget             &BrickWall::operator=(BrickWall const &rhs){
    this->_type = rhs.getType();
    return (*this);
}

//Public functions
ATarget     *BrickWall::clone() const{
    return (new BrickWall(*this));
}