#ifndef ASPELL_HPP
 #define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell
{
public:
	ASpell();
	ASpell(std::string _name, std::string _effects);
	virtual ~ASpell(){}

	std::string getName(void) const;
	std::string getEffects(void) const;
	virtual ASpell *clone(void) const = 0;

	void launch(ATarget const &target) const;

protected:
	std::string _name;
	std::string _effects;
};

#include "ATarget.hpp"

#endif