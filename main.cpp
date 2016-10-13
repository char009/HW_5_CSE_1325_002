#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <strings.h>
#include "std_lib_facilities.h"
#include "component_info.h"
#include "robot_model.h"
#include "vector"
#include "menu.h"

using namespace std;

int main()
{

    Menu menu;

    cout<<"\n\n\n\n\t\t\t\t\t\t\t\tWelcome!\n\t\t\t\t\t\t\t\t(Press Enter)\n\n\n\n\n";
    getch();
    system("cls");

    int choice=0;

    do{
    cout<<"Which User are you?";
    cout<<"\n\n1. Product Manager\n2. Customer\t(Under Construction)\n3. Sales Associate\t(Under Construction)\n4. Boss\t(Under Construction)\nEnter Choice: ";
    cin>>choice;
    }while(choice<1 && choice>4);

    string userName,password;
    if(choice!=2)
    {
    system("cls");
    cout<<"\n\nUser Name: ";
    cin>>userName;
    char ch;
    cout << "Enter password: ";
    ch = _getch();
    while(ch != 13)
      {
        password.push_back(ch);
        cout << '*';
        ch = _getch();
      }
    }

    switch(choice)
    {
    case 1:{
               if(userName=="a" && password == "a")
                  {
                    cout << "\nAccess granted :P\n";
                    // provide boss access here!
                    menu.menu1();
                  }
               else
                  cout << "\nAccess aborted...\n";
             break;
           }
    case 2:{
             // give customer access to things here
             break;
           }

    case 3:{
                if(userName=="Me=SA" && password == "more*Salary")
                  {
                    cout << "\nAccess granted :P\n";
                    // provide Sales Assistant access here!
                  }
               else
                    cout << "\nAccess aborted...\n";
             break;
           }
    case 4:{
                if(userName=="Me=Boss" && password =="Birthdate")
                  {cout << "\nAccess granted :P\n";
                    // provide boss access here!
                  }
               else
                  cout << "\nAccess aborted...\n";
             break;
           }
    }
    return 0;
}
