#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <string>
#include "Warlock.hpp"

class   Polymorph : public ASpell{
    public:
        Polymorph();
        Polymorph(std::string name, std::string effects);
        Polymorph(Polymorph const &src);
        ~Polymorph();

        Polymorph              &operator=(Polymorph const &rhs);

        virtual ASpell      *clone() const;
};

#endif