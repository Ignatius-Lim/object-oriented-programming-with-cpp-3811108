#include <iostream>
using namespace std;

class Thermostat
{
public:
  Thermostat(float temp, unsigned int m, const string &loc)
  {
    temperature = temp;
    mode = m;
    location = loc;
  }

  ~Thermostat()
  {
    cout << "Thermostat in " << location << " is destroyed!" << endl;
  }

  void displaystatus()
  {
    cout << "Thermostat in " << location << " is using " << (mode == 0 ? "OFF" : (mode == 1 ? "COOLING" : "HEATING")) << " mode set at temperature of " << temperature << "°C." << endl;
  }

private:
  float temperature;
  unsigned int mode;
  string location;
};

int main()
{
  Thermostat t1(25.5, 1, "Toilet");

  t1.displaystatus();

  return 0;
}