#ifndef SPELLBOOK_HPP
 #define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <vector>

class SpellBook
{
public:
	SpellBook() {}
	SpellBook(const SpellBook&);
	SpellBook& operator=(const SpellBook&);
	~SpellBook() {}

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellName);
	ASpell* createSpell(std::string const &spellName);

private:
	std::vector<ASpell *>	_myBook;
};

#endif