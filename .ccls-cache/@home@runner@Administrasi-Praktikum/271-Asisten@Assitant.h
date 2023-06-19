// #pragma once
// #include "269-User.h"

// using namespace std;

// class Asisten {
//   public:
//     void AssistantRegistration();
//     void LoginAsAssistant();
//     void AssistantRegistryACC();
//     void AssistantProfileToTXT();
//     void AssistantMenu();
//     void MainMenuAssistant();
//     void AssistantSlotList();
//     void AssistantJadwal();
//     void AssistantScheduleToTXT();
//     void PrakMateri();

//     struct
//     {
//       string UserUsername;
//       string UserPassword;
//       string UserName;
//       string UserAddress;
//       string UserPhone;
//     }ProfileUser;

    
//   private:
//     int AssistantMenuC;
//     char AssistantRegistryToSignUp;
//     int MainMenuAssistantC;
  
// };

// void Assistant::AssistantMenu()
// {
//   do {
//     cout << "===============================" << endl;
//     cout << "|\tMENU ASISTEN\t|" <<endl;
//     cout << "===============================" << endl;
//     cout << "1. Masuk Sebagai Calon Asisten" << endl;
//     cout << "2. Daftar Akun Asisten" << endl;
//     cout << "0. Keluar" << endl;
//     cout << " ->  "; cin >> AssistantMenuC;
//     switch (AssistantMenuC) {
//     case 1:
//       LoginAsAssistant();
//       break;
//     case 2:
//       AssistantRegistryACC();
//       break;
//     case 0:
//       exit(0);
//     default:
//       break;
//     }
//   } while(AssistantMenuC != 0);
// }