#ifndef SPELLBOOK_HPP
 #define SPELLBOOK_HPP

#include "ASpell.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"
#include "Fwoosh.hpp"

#include <vector>

class SpellBook
{
public:
	SpellBook() {}
	~SpellBook() {}

	std::vector<ASpell *> getBook(void) const;
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellName);
	ASpell* createSpell(std::string const &spellName);

private:
	SpellBook(const SpellBook&);
	SpellBook& operator=(const SpellBook&);

	std::vector<ASpell *>	_myBook;
};

#endif