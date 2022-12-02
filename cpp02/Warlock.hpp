#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
# include <vector>

// class ASpell;
#include "ASpell.hpp"
#include "SpellBook.hpp"

class	Warlock
{
public:
	Warlock(std::string, std::string);
	virtual ~Warlock();

	const std::string& getName() const;
	const std::string& getTitle() const;
	void	setTitle(const std::string&);
	void	introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, ATarget &target);

private:
	Warlock();
	Warlock(const Warlock&);
	Warlock& operator=(const Warlock&);

	SpellBook				*_spellBook;
	std::string				_name;
	std::string				_title;
	// std::vector<ASpell *>	_mySpells;
};


#endif
