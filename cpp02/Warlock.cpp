#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	this->_spellBook = new SpellBook();
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	delete this->_spellBook;
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string& Warlock::getName(void) const
{
	return (this->_name);
}

const std::string& Warlock::getTitle(void) const
{
	return (this->_title);
}

void Warlock::setTitle(const std::string& title)
{
	this->_title = title;
}

void Warlock::introduce(void) const
{
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	std::vector<ASpell *>::iterator it = this->_spellBook->getBook().begin();
	for (; it < this->_spellBook->getBook().end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->_spellBook->getBook().push_back(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	std::vector<ASpell *>::iterator it = this->_spellBook->getBook().begin();
	for (; it < this->_spellBook->getBook().end(); it++)
	{
		if ((*it)->getName() == spellName)
			this->_spellBook->getBook().erase(it);
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	this->_spellBook->createSpell(spellName)->launch(target);
// 	std::vector<ASpell *>::iterator it = this->_spellBook->getBook().begin();
// 	for (; it < this->_spellBook->getBook().end(); it++)
// 	{
// 		if ((*it)->getName() == spellName)
// 			(*it)->launch(target);
// 			// std::cout << (*it)->getName() << std::endl;
			
// 	}
}

