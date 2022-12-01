#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Rando.hpp"


int main()
{
	Warlock richard("Richard", "the Titled");

	Dummy bob;
	Fwoosh* fwoosh = new Fwoosh();
	Rando* rando = new Rando();


	richard.learnSpell(fwoosh);
	richard.learnSpell(rando);
	richard.learnSpell(rando);
	richard.learnSpell(rando);
	richard.learnSpell(rando);


	richard.learnSpell(fwoosh);


	richard.introduce();
	richard.launchSpell("Fwoosh", bob);
	richard.launchSpell("Rando", bob);


	richard.forgetSpell("Rando");
	richard.forgetSpell("Fwoosh");

	richard.launchSpell("Fwoosh", bob);
	richard.launchSpell("Rando", bob);
}

