#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include "ATarget.hpp"

class   ATarget;

class   ASpell {
    public:
        ASpell();
        ASpell(std::string name, std::string effects);
        ASpell(ASpell const &src);
        ~ASpell();

        ASpell              &operator=(ASpell const &rhs);

        std::string         getName() const;
        std::string         getEffects() const;

        virtual ASpell      *clone() const = 0;

        void                launch(ATarget const &target);

    protected:
        std::string _name;
        std::string _effects;
};

#endif