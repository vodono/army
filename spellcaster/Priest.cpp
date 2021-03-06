//
// Created by denysvysochanskyi on 19.04.18.
//

#include "Priest.h"

Priest::Priest(const char* title, int hitPoints, int damage, int mana)
        : SpellCaster(title, hitPoints, damage,mana) {
    this->magicAbility = new PriestMagicAbility(this, heal);
    this->unitTypes = new UnitTypes(false, true);
}

Priest::~Priest() {}