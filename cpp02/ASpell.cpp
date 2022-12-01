#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string name, std::string effects) 
: _name(name), _effects(effects) {}

std::string ASpell::getName(void) const
{
	return this->_name;
}
std::string ASpell::getEffects(void) const
{
	return this->_effects;
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(this);
}