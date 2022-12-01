#include "Rando.hpp"

Rando::Rando() 
{
	this->_name = "Rando";
	this->_effects = "randood";
}

Rando::~Rando(){}

ASpell *Rando::clone(void) const
{
	return new Rando();
}