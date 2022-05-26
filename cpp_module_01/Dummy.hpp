#ifndef DUMMY_HPP
#define DUMMY_HPP

#include <string>
#include "Warlock.hpp"

class   Dummy : public ATarget {
    public:
        Dummy();
        Dummy(std::string type);
        Dummy(Dummy const &src);
        ~Dummy();

        ATarget             &operator=(Dummy const &rhs);

        virtual ATarget     *clone() const;
};

#endif