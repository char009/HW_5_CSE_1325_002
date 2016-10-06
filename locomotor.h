#ifndef LOCOMOTOR_H_INCLUDED
#define LOCOMOTOR_H_INCLUDED
#include <string>

using namespace std;

class Locomotor
{
private:
    double maxSpeed;
    double powerConsumed;
public:
    Locomotor(double speed, double power) : maxSpeed(speed), powerConsumed(power) { cout << "Locomotor Initialized\n";}
    void set_maxSpeed_loc()
    {
        cout << "Enter max speed of locomotor(MPH): ";
        cin >> maxSpeed;
    }
    void set_power_consumed_loc()
    {
        cout << "Enter power consumed by locomotor(watts): ";
        cin >> powerConsumed;
    }
    double get_power_consumed_loc()
    {
        return powerConsumed;
    }
    double get_maxSpeed_loc()
    {
        return maxSpeed;
    }
    void print_power_consumed_loc()
    {
        cout << "Power Consumed by locomotor: " << powerConsumed << " Watts" << endl;
    }
    void print_maxSpeed_loc()
    {
        cout << "Max speed of locomotor: " << maxSpeed << " MPH" << endl;
    }
};


#endif // LOCOMOTOR_H_INCLUDED
