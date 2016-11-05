#include "Pokemon.h"

Pokemon* make_pokemon(Element e, string name) {
        Pokemon* ret;
        switch(e) {
                case fire:
                        ret = new Fire();
                        break;
                case water:
                        ret = new Water();
                        break;
                default: //aka grass
                        ret = new Grass();
        };
        ret->name = name;
        return ret;
}
