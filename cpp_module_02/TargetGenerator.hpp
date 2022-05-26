#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <vector>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator{
    public:
        TargetGenerator();
        ~TargetGenerator();

        void        learnTargetType(ATarget *target);
        void        forgetTargetType(std::string const &targetType);
        ATarget      *createTarget(std::string const &targetType);

    private:
        TargetGenerator(TargetGenerator const &src);
        TargetGenerator &operator=(TargetGenerator const &rhs);

        std::vector<ATarget*>            _targets;
};

#endif