#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

class Warlock{
    public:
        Warlock(std::string name, std::string tilte);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void        setName(std::string const &name);
        void        setTitle(std::string const &title);

        void        introduce() const;

    private:
        Warlock();
        Warlock(Warlock const &src);
        Warlock &operator=(Warlock const &rhs);

        std::string _name;
        std::string _title;
};

#endif