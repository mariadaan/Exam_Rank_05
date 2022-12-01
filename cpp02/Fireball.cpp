#include "Fireball.hpp"

Fireball::Fireball() 
{
	this->_name = "Fireball";
	this->_effects = "burnt into crisp";
}

Fireball::~Fireball(){}

ASpell *Fireball::clone(void) const
{
	return new Fireball();
}