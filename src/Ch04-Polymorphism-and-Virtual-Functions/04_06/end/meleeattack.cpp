// meleeattack.cpp
#include "meleeattack.h"

MeleeAttack::MeleeAttack(const std::string &name, int force)
    : Ability(name), impactForce(force)
{
}

MeleeAttack::~MeleeAttack()
{
    std::cout << "\nMeleeAttack object is being deleted." << std::endl;
}

void MeleeAttack::describe() const
{
    Ability::describe();
    std::cout << "Impact Force: " << impactForce << std::endl;
}

void MeleeAttack::use() const
{
    std::cout << "Delivering devestating close-range attack!" << std::endl;
}