#ifndef BrickWall_HPP
#define BrickWall_HPP

#include <string>
#include "ATarget.hpp"

class   BrickWall : public ATarget {
    public:
        BrickWall();
        BrickWall(std::string type);
        BrickWall(BrickWall const &src);
        ~BrickWall();

        ATarget             &operator=(BrickWall const &rhs);

        virtual ATarget     *clone() const;
};

#endif