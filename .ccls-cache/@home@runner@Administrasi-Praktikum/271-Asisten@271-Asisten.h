#pragma once
#include "269-User.h"

using namespace std;

class Asisten {
  public:
    void AssistantRegistration();
    void LoginAsAssistant();
    void AssistantRegistryACC();
    void AssistantProfileToTXT();
    void AssistantMenu();
    void MainMenuAssistant();
    void AssistantSlotList();
    void AssistantJadwal();
    void AssistantScheduleToTXT();
    void PrakMateri();
    }
  private:

};

void Assistant::AssistantMenu()
{
  do {
    cout << "===============================" << endl;
    cout << "|\tMENU ASISTEN\t|" <<endl;
    cout << "===============================" << endl;
    cout << "1. Masuk Sebagai Pengguna" << endl;
    cout << "2. Daftar Akun Pengguna" << endl;
    cout << "0. Keluar" << endl;
    cout << " ->  "; cin >> UserMenuC;
    switch (UserMenuC) {
    case 1:
      LoginAsUser();
      break;
    case 2:
      UserRegistryACC();
      break;
    case 0:
      exit(0);
    default:
      break;
    }
  } while(UserMenuC != 0);
}