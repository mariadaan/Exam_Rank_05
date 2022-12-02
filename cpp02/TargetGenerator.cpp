#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget *target)
{
	std::vector<ATarget *>::iterator it = _myTargets.begin();
	for (; it < _myTargets.end() ; it++)
		if ((*it)->getType() == target->getType())
			return;
	_myTargets.push_back(target);
}

void TargetGenerator::forgetTargetType(std::string const &target)
{
	std::vector<ATarget *>::iterator it = _myTargets.begin();
	for (; it < _myTargets.end() ; it++)
		if ((*it)->getType() == target)
			_myTargets.erase(it);
}

ATarget* TargetGenerator::createTarget(std::string const &target)
{
	if (target == "Target Practice Dummy")
		return new Dummy();
	else if (target == "Inconspicuous Red-brick Wall")
		return new BrickWall();
	else
		return NULL;
}

