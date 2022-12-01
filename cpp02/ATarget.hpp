#ifndef ATARGET_HPP
 #define ATARGET_HPP

#include <iostream>

class ASpell;

class ATarget
{
public:
	ATarget();
	ATarget(std::string _type);
	virtual ~ATarget(){}

	const std::string &getType(void) const;
	virtual ATarget *clone(void) const = 0;

	void getHitBySpell(ASpell const *spell) const;

protected:
	std::string _type;
};

#include "ASpell.hpp"

#endif