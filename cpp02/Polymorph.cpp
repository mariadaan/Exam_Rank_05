#include "Polymorph.hpp"

Polymorph::Polymorph() 
{
	this->_name = "Polymorph";
	this->_effects = "turned into critter";
}

Polymorph::~Polymorph(){}

ASpell *Polymorph::clone(void) const
{
	return new Polymorph();
}