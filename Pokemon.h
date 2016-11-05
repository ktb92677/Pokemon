#ifndef _POKEMON_
#define _POKEMON_

#include <iostream>
#include <string>

using namespace std;

enum Element { fire, water, grass };

class Pokemon {
	protected:
		string name;
		int level;
		int hp, hpMax;
		int attack, defense, specialAttack, specialDefense, speed;
	public:
		Pokemon() : level(1), hp(20), hpMax(20), attack(10), defense(10), specialAttack(10), specialDefense(10), speed(10) {}
		~Pokemon() {}
		string get_name() { return name; }
		int get_level() { return level; }
		int get_hpMax() { return hpMax; }
		int get_hp() { return hp; }
		friend Pokemon* make_pokemon(Element e, string name);
};

class Fire : public Pokemon {
	public:
		Fire() : Pokemon() { hp++; attack += 2; defense -= 2; specialAttack += 4; specialDefense -= 2; speed += 2; }
};

class Water : public Pokemon {
        public:
                Water() : Pokemon() { hp += 2; attack -= 2; defense += 2; specialAttack--; specialDefense += 4; speed--; }
};

class Grass : public Pokemon {
        public:
                Grass() : Pokemon() { hp -= 3; attack -= 2; specialAttack -= 3; speed -= 2; }
};

#endif
