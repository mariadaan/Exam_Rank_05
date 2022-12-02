#ifndef TARGETGENERATOR_HPP
 #define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include <vector>

class TargetGenerator
{
public:
	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &target);
	ATarget* createTarget(std::string const &target);
	TargetGenerator() {}

private:
	TargetGenerator(const TargetGenerator&);
	TargetGenerator& operator=(const TargetGenerator&);

	std::vector<ATarget *> _myTargets;
};

#endif