#include "SpellBook.hpp"

// SpellBook::~SpellBook()
// {
// 	std::cout << this->_name << ": My job here is done!" << std::endl;
// }

std::vector<ASpell *> SpellBook::getBook(void) const
{
	return this->_myBook;
}

void SpellBook::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator it = this->_myBook.begin();
	for (; it < this->_myBook.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->_myBook.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spellName)
{
	std::vector<ASpell *>::iterator it = this->_myBook.begin();
	for (; it < this->_myBook.end(); it++)
	{
		if ((*it)->getName() == spellName)
			this->_myBook.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const &spellName)
{
	if (spellName == "Fireball")
		return new Fireball();
	else if (spellName == "Polymorph")
		return new Polymorph();
	else if (spellName == "Fwoosh")
		return new Fwoosh();
	else
		return NULL;
	/* 
	ASpell* createSpell(string const &), that receives a string corresponding to
	the name of a spell, creates it, and returns it.
	 */
}

