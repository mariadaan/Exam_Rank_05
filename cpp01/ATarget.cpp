#include "ATarget.hpp"

ATarget::ATarget() {}

ATarget::ATarget(std::string type) 
: _type(type){}

const std::string &ATarget::getType(void) const
{
	return this->_type;
}

void ATarget::getHitBySpell(ASpell const *spell) const
{
	std::cout << this->_type << " has been " << spell->getEffects() << "!\n";
}
