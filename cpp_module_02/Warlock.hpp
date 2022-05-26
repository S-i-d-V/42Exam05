#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <vector>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Spellbook.hpp"

class Warlock{
    public:
        Warlock(std::string name, std::string tilte);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void        setName(std::string const &name);
        void        setTitle(std::string const &title);

        void        introduce() const;

        void        learnSpell(ASpell *spell);
        void        forgetSpell(std::string spellName);
        void        launchSpell(std::string spellName, ATarget &target);

    private:
        Warlock();
        Warlock(Warlock const &src);
        Warlock &operator=(Warlock const &rhs);

        Spellbook                       _spellbook;
        std::string                     _name;
        std::string                     _title;
};

#endif