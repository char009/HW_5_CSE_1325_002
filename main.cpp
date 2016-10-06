#include <iostream>
#include <stdlib.h>
#include "std_lib_facilities.h"
#include "component_info.h"
#include "robot_model.h"

using namespace std;

int main()
{
    Component_Info component_info("R-Arm-1", 1201, 250.5, 250.99, "Robot Arm for sale", 1);
    Robot_Model robot_model("Robot-1", 9901, 699.99, "The first ever model!", 749.99, 35, 150);

    int choice;
    do
    {
        cout << "1) Make Robot Components.\n";
        cout << "2) Make Robot Models.\n";
        cout << "Enter Choice: ";
        cin >> choice;
        cin.clear();
        cin.ignore();
    }while ((choice < 1) || (choice > 2));

    if (choice == 1)
    {
        //component_info.set_component_name();
        //component_info.set_part_number();
        //component_info.set_component_weight();
        //component_info.set_component_cost();
        //component_info.set_part_description();
        component_info.set_type();
        component_info.print_component_info();
    }
    else if (choice == 2)
    {
        //robot_model.set_model_name();
        //robot_model.set_model_number();
        //robot_model.set_model_price();
        //robot_model.set_model_description();
        //robot_model.set_model_sales_price();
        //robot_model.set_number_sold();
        //robot_model.set_total_weight();
        robot_model.print_robot_model();
    }
    else
    {
        cout << "IMPOSSIBLE!";
    }

    return 0;
}
