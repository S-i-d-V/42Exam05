#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include "ASpell.hpp"

class   ASpell;

class   ATarget {
    public:
        ATarget();
        ATarget(std::string type);
        ATarget(ATarget const &src);
        ~ATarget();

        ATarget             &operator=(ATarget const &rhs);

        std::string const   &getType() const;

        virtual ATarget     *clone() const = 0;

        void                getHitBySpell(ASpell const &spell) const;

    protected:
        std::string _type;
};

#endif