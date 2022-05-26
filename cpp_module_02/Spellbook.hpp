#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <vector>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Spellbook{
    public:
        Spellbook();
        ~Spellbook();

        void        learnSpell(ASpell *spell);
        void        forgetSpell(std::string const &spellName);
        ASpell      *createSpell(std::string const &spellName);

    private:
        Spellbook(Spellbook const &src);
        Spellbook &operator=(Spellbook const &rhs);

        std::vector<ASpell*>            _spells;
};

#endif