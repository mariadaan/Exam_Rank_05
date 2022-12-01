#include "Dummy.hpp"

Dummy::Dummy()
{
	this->_type = "Target Practice Dummy";
}

Dummy::~Dummy(){}

ATarget *Dummy::clone(void) const
{
	return new Dummy();
}