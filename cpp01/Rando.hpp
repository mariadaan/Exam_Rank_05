#ifndef RANDO_HPP
 #define RANDO_HPP

#include "ASpell.hpp"

class Rando : public ASpell
{
public:
	Rando();
	~Rando();

	virtual ASpell *clone(void) const;
};


#endif