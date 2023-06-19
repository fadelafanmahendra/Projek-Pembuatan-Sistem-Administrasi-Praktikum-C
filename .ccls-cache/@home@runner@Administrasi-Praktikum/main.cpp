#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <queue>
#include <cstdlib>
#include "261-Admin/Admin.h"
#include "269-User/User.h"
#include "271-Asisten/Assistant.h"

using namespace std;

int main()
{
  Admin X;
  User Y;
  Assistant Z;
  int FirstMenuC;
  
  ROOT:
  do
  {
    cout << "                     |-|                      " << endl;
    cout << "            |===================|             " << endl;
    cout << "            |    ADMINISTRASI   |             " << endl; 
    cout << "            |     PRAKTIKUM     |             " << endl;
    cout << "            |===================|             " << endl; 
    cout << "                     |||                      " << endl;
    cout << "    |++++++++++++++++++++++++++++++++++++|    " << endl;
    cout << "    |                MENU                |    " << endl;
    cout << " ===|====================================|=== " << endl;
    cout << "||  |  1. Masuk Sebagai Admin            |  ||" << endl;
    cout << "||  |  2. Masuk Sebagai User             |  ||" << endl;
    cout << "    |  3. Masuk Sebagai Asisten          |    " << endl;
    cout << "    |  0. Keluar                         |    " << endl;
    cout << "    |====================================|    " << endl;
    cout << "           |||               |||              " << endl;
    cout << "           |||               |||              " << endl;
    cout << "         |-__|               |__-|            " << endl;
    cout << "    |====================================|    " << endl;
    cout << endl;
    cout << " ->  ";
    cin >> FirstMenuC;
    cout << "    |====================================|    " << endl;

    switch (FirstMenuC)
    {
    case 1:
      system("clear");
      X.AdminMenu();
      break;
    case 2:
      system("clear");
      Y.UserMenu();
      break;
    case 3:
      system("clear");
        Z.AssistantMenu();
      break;
    case 0:
      exit(1);
      break;
    default:
      system("clear");
      main();
      break;
    }
  } while(FirstMenuC != 0);

  return 0;
}