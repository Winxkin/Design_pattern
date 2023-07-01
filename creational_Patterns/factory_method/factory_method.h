#include <iostream>
#include <string>
using namespace std;

// Interface
class transport_IF
{
public:
    virtual void deliver() = 0;
};

class Car : public transport_IF
{
public:
    Car()
    {
        cout << "transportation using car" << endl;
    }
    void deliver() override
    {
        cout << "deliver by car" << endl;
    };
};

class Ship : public transport_IF
{
public:
    Ship()
    {
        cout << "transportation using Ship" << endl;
    }
    void deliver() override
    {
        cout << "deliver by Ship" << endl;
    };
};

class civicR : public transport_IF
{
public:
    civicR()
    {
        cout << "transportation using civicR" << endl;
    }
    void deliver() override
    {
        cout << "deliver by civicR" << endl;
    };
};

class KiaSonet : public transport_IF
{
public:
    KiaSonet()
    {
        cout << "transportation using KiaSonet" << endl;
    }
    void deliver() override
    {
        cout << "deliver by KiaSonet" << endl;
    };
};

// factory method
class create_vehicle
{
public:
    virtual transport_IF *factory_method() = 0;

    transport_IF *transport;
    void getvehicle()
    {
        this->transport = this->factory_method();
    }
};

class create_car : public create_vehicle
{
public:
    transport_IF *factory_method()
    {
        return new Car(); // return car
    };
};

class create_Ship : public create_vehicle
{
public:
    transport_IF *factory_method()
    {
        return new Ship(); // return Ship
    };
};

class create_civicR : public create_vehicle
{
public:
    transport_IF *factory_method()
    {
        return new civicR(); // return Ship
    };
};

class create_KiaSonet : public create_vehicle
{
public:
    transport_IF *factory_method()
    {
        return new KiaSonet(); // return Ship
    };
};