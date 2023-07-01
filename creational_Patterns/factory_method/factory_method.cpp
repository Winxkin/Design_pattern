#include "factory_method.h"

int main()
{
    cout << "---------factory method example code by Huan Nguyen----------" << endl;
    create_vehicle *vehicle_1 = new create_car();
    vehicle_1->getvehicle();
    vehicle_1->transport->deliver();

    create_vehicle *vehicle_2 = new create_Ship();
    vehicle_2->getvehicle();
    vehicle_2->transport->deliver();

    create_vehicle *vehicle_3 = new create_civicR();
    vehicle_3->getvehicle();
    vehicle_3->transport->deliver();

    create_vehicle *vehicle_4 = new create_KiaSonet();
    vehicle_4->getvehicle();
    vehicle_4->transport->deliver();

    return 0;
}