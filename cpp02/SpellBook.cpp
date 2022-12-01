#include "SpellBook.hpp"

// SpellBook::~SpellBook()
// {
// 	std::cout << this->_name << ": My job here is done!" << std::endl;
// }

void SpellBook::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator it = this->_myBook.begin();
	for (; it < this->_myBook.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->_myBook.push_back(spell);
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

void SpellBook::launchSpell(std::string const &spellName)
{
	std::vector<ASpell *>::iterator it = this->_myBook.begin();
	for (; it < this->_myBook.end(); it++)
	{
		if ((*it)->getName() == spellName)
			(*it)->launch(target);
			// std::cout << (*it)->getName() << std::endl;
			
	}
}

