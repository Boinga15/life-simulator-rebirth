#include "player.h"

using namespace player;

Player::Player() {
    using namespace data::enums;

    this->attributes = {
        { abilityScores::STR, 30 },
        { abilityScores::DEX, 30 },
        { abilityScores::CON, 30 },
        { abilityScores::INT, 30 },
        { abilityScores::CHA, 30 },
        { abilityScores::SIZ, 30 },
        { abilityScores::WIL, 30 }
    };

    this->weaponTraining = {
        { weaponTypes::BRAWL, 0 },
        { weaponTypes::IMPROVISED_MELEE, 0 },
        { weaponTypes::KNIFE, 0 },
        { weaponTypes::SWORD, 0 },
        { weaponTypes::AXE, 0 },
        { weaponTypes::CHAINSAW, 0 },
        { weaponTypes::HANDGUN, 0 },
        { weaponTypes::RIFLE, 0 },
        { weaponTypes::SHOTGUN, 0 },
        { weaponTypes::SMG, 0 },
        { weaponTypes::ASSAULT_RIFLE, 0 },
        { weaponTypes::HEAVY, 0 }
    };

    this->money = 0;
    this->exhaustion = 0;
    this->generalNotoriety = 0;
    this->combatNotoriety = 0;
    this->socialNotoriety = 0;

    this->carryingCapacity = 5;
    this->bonusCarryCapacity = 0;
    this->bonusCarryCapacityName = "";

    this->dodgeTraining = 0;
}