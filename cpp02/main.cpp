#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "BrickWall.hpp"
#include "TargetGenerator.hpp"
#include "SpellBook.hpp"


// int main()
// {
// 	Warlock richard("Richard", "the Titled");

// 	Dummy bob;
// 	BrickWall harry;
// 	Fwoosh* fwoosh = new Fwoosh();
// 	Fireball* fireball = new Fireball();
// 	Polymorph* polymorph = new Polymorph();



// 	richard.learnSpell(fwoosh);
// 	richard.learnSpell(fireball);
// 	richard.learnSpell(fireball);
// 	richard.learnSpell(fireball);
// 	richard.learnSpell(fireball);


// 	richard.learnSpell(fwoosh);
// 	richard.learnSpell(polymorph);


// 	richard.introduce();
// 	richard.launchSpell("Fwoosh", bob);
// 	richard.launchSpell("Fireball", bob);
// 	richard.launchSpell("Polymorph", harry);



// 	richard.forgetSpell("Fireball");
// 	richard.forgetSpell("Fwoosh");

// 	richard.launchSpell("Fwoosh", bob);
// 	richard.launchSpell("Fireball", bob);
// }

// c++ main.cpp Warlock.cpp ATarget.cpp ASpell.cpp Dummy.cpp Fwoosh.cpp Fireball.cpp Polymorph.cpp BrickWall.cpp  -o warlock && ./warlock

int main()
{
	Warlock richard("Richard", "foo");
	richard.setTitle("Hello, I'm Richard the Warlock!");
	BrickWall model1;

	Polymorph* polymorph = new Polymorph();
	TargetGenerator tarGen;

	tarGen.learnTargetType(&model1);
	richard.learnSpell(polymorph);

	Fireball* fireball = new Fireball();

	richard.learnSpell(fireball);

	ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

	richard.introduce();
	richard.launchSpell("Polymorph", *wall);
	richard.launchSpell("Fireball", *wall);
}