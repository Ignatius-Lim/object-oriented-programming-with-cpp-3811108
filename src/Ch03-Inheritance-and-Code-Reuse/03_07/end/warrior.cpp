#include "warrior.h"

Warrior::Warrior(const std::string &name, int health, int strength)
    : Character(name, health), strength(strength)
{
}

void Warrior::attack() const
{  
  std::cout << name << " attacks for " << BASE_DAMAGE + strength << " damage!" << std::endl;
}

void Warrior::displayStats() const
{
  Character::displayStats();
  std::cout << "Strength: " << strength << std::endl;
  equip.displayInventory();
}

void Warrior::addItem(const std::string &item)
{
  equip.addItem(item);
}