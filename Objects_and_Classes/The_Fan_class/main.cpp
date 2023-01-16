#include <iostream>
using namespace std;

class Fan
{
public:
    int speed;
    bool on;
    double radius;

    //construct a default fan(no-arg constructor)
    Fan()
    {
        speed = 1; //default speed is 1
        on = false; //by default fan is off
        radius = 5; //default radius is 5
    }

    void turnOn()
    {
        on = true;
    }

    void turnOff()
    {
        on = false;
    }

    void setSpeed(int newSpeed)
    {
        if(speed >= 1 && speed <= 3)
            speed = newSpeed;
    }

    void setRadius(double newRadius)
    {
        radius = newRadius;
    }
};

int main()
{
    Fan fan1; //create fan object
    fan1.setSpeed(3);
    fan1.setRadius(10);
    fan1.turnOn();

    Fan fan2; //create fan object
    fan2.setSpeed(2);
    fan2.setRadius(5);
    fan2.turnOff();

    //Invoke their accessor functions to display the fan properties
    cout << "fan1 is " << (fan1.on ? "ON" : "OFF") << ", it speed is "
    << fan1.speed << " with " << fan1.radius << " radius" << endl;
    cout << "fan2 is " << (fan2.on ? "ON" : "OFF") << ", it speed is "
    << fan2.speed << " with " << fan2.radius << " radius" << endl;

    return 0;
}