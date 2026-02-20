#include "rangedattack.h"
#include "meleeattack.h"
#include "defensiveability.h"
#include <vector>

int main()
{
  std::vector<Ability *> abilities;
  abilities.push_back(new RangedAttack("Dark Wave", 10000));
  abilities.push_back(new MeleeAttack("Sword of UDENBRIX", 69420));
  abilities.push_back(new DefensiveAbility("Force Field", 2000));

  for (const Ability *ability : abilities)
  {
    ability->describe();
    ability->use();
    std::cout << std::endl;
  }

  // Clean up
  for (Ability *ability : abilities)
  {
    delete ability;
  }

  return 0;
}