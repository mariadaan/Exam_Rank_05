#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
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
	std::vector<ASpell *>::iterator it = this->_mySpells.begin();
	for (; it < this->_mySpells.end(); it++)
	{
		if ((*it)->getName() == spell->getName())
			return ;
	}
	this->_mySpells.push_back(spell);
}

void Warlock::forgetSpell(std::string spellName)
{
	std::vector<ASpell *>::iterator it = this->_mySpells.begin();
	for (; it < this->_mySpells.end(); it++)
	{
		if ((*it)->getName() == spellName)
			this->_mySpells.erase(it);
	}
}

void Warlock::launchSpell(std::string spellName, ATarget &target)
{
	std::vector<ASpell *>::iterator it = this->_mySpells.begin();
	for (; it < this->_mySpells.end(); it++)
	{
		if ((*it)->getName() == spellName)
			(*it)->launch(target);
			// std::cout << (*it)->getName() << std::endl;
			
	}
}

