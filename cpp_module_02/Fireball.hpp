#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <string>
#include "ASpell.hpp"

class   Fireball : public ASpell{
    public:
        Fireball();
        Fireball(std::string name, std::string effects);
        Fireball(Fireball const &src);
        ~Fireball();

        Fireball              &operator=(Fireball const &rhs);

        virtual ASpell      *clone() const;
};

#endif