#pragma once
//структура одного существа
#include "unitType.h"
#include "weaponType.h"

struct UnitData
{
    UnitType type;
    int x;
    int y;
    int health;
    WeaponType weapon;
};
