#ifndef PLAYER_H
#define PLAYER_H

#include <unordered_map>
#include <string>
#include <map>
#include <vector>

#include "data.h"
#include "items.h"

namespace player {
    class Player {
        public:
            std::string name;
            int gender; // 0: Male, 1: Female, 2: Other
            std::string pronouns[3]; // Subjective, Objective, Possessive.

            std::map<data::enums::abilityScores, int> attributes;
            std::map<data::enums::weaponTypes, int> weaponTraining;
            int dodgeTraining;

            int carryingCapacity;
            std::string bonusCarryCapacityName;
            int bonusCarryCapacity;
            std::vector<item::Item> inventory;

            int money;
            int exhaustion;

            int generalNotoriety;
            int combatNotoriety;
            int socialNotoriety;

            int health;
            int maxHealth;

            Player();
            void generateStatistics();
    };
}

#endif