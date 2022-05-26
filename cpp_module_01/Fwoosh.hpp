#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include <string>
#include "Warlock.hpp"

class   Fwoosh : public ASpell{
    public:
        Fwoosh();
        Fwoosh(std::string name, std::string effects);
        Fwoosh(Fwoosh const &src);
        ~Fwoosh();

        Fwoosh              &operator=(Fwoosh const &rhs);

        virtual ASpell      *clone() const;
};

#endif