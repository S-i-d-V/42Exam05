#include "TargetGenerator.hpp"

//Constructor / Destructors
TargetGenerator::TargetGenerator(){
    return;
}

TargetGenerator::TargetGenerator(TargetGenerator const &src){
    *this = src;
    return;
}
TargetGenerator::~TargetGenerator(){
    return;
}

//Operator
TargetGenerator &TargetGenerator::operator=(TargetGenerator const &rhs){
    this->_targets = rhs._targets;
    return (*this);
}

//Public functions
void        TargetGenerator::learnTargetType(ATarget *target){
    for (std::vector<ATarget*>::iterator it = this->_targets.begin(); it != this->_targets.end(); it++){
        if ((*(*it)).getType() == (*target).getType())
            return;
    }
    this->_targets.push_back(target->clone());
}

void        TargetGenerator::forgetTargetType(std::string const &targetType){
    for (std::vector<ATarget*>::iterator it = this->_targets.begin(); it != this->_targets.end(); it++){
        if ((*(*it)).getType() == targetType){
            this->_targets.erase(it);
            return;
        }
    }
}

ATarget      *TargetGenerator::createTarget(std::string const &targetType){
    for (std::vector<ATarget*>::iterator it = this->_targets.begin(); it != this->_targets.end(); it++){
        if ((*(*it)).getType() == targetType)
            return ((*it)->clone());
    }
    return (NULL);
}