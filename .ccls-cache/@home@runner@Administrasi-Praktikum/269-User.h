#pragma once
#include "261-Admin.h"

using namespace std;


  extern Adm APObj;

class User
{
  public:
    void LoginAsUser();
    void UserRegistryACC();
    void UserProfileToTXT();
    void UserMenu();
    void MainMenuUser();
    void ShowUserName();
    void PrakRegistration();
    void PrakCList();
    void PrakPay();
    int PrakTotal(int);
    void DeclareDynimicalArrayPrakBuy(int);
    void PrakCName();
    void PrakCSlot();
    void PrakCSlotList(int);
    void MenuAfterPrakCSlot(int);
    void PrakJadwal();
    void PrakScheduleToTXT();
    void PrakMateri();
		void PrakInvoice();
    void InvoiceToStructTXT();

    struct
    {
      string UserUsername;
      string UserPassword;
      string UserName;
      string UserAddress;
      string UserPhone;
    }ProfileUser;

    struct
    {
      string *PrakListC;
      int *PrakPriceC;
    }PrakBuy;

    struct
    {
      string PrakListOnSchedule[5];
      string jadwal[5];
    }PrakSchedule;

  private:
    int UserMenuC;
    char UserRegistryToSignUp;
    int MainMenuUserC;
    int PrakRegistryC;
    int SizeOfArrayPrakList;
    int SizeOfArrayPrakCNameNumber;
    int PrakCNameAmount;
    int PrakCNameNumber[10];
    int PrakCSlotC2;
    int SizeOfArraySlotSData, SizeOfArraySlotBasDat, SizeOfArraySlotStatistika, SizeOfArraySlotSO, SizeOfArraySlotPBO;
		int Total = 0;
    int AmountPay, Chance;
    bool PayingRegistration = true;
    int PayingRegistrationC;
    int PrintStructOrN;
    int PrakCSlotC;
    int SizeOfPrakSchedule;
    int i, j, k;
		char d1, d2, add;
    int y_d1, n_d1, y_d2, n_d2;
    string temp;
    string SplitterColon = "\t:\t";
    int IDeclaringDynamicalArray = 0;
    int IndexOfPrakCSlot;
    ofstream put;
};

class UserACCNode
{
  public :
    string UserUsernameNode;
    string UserPasswordNode;
    UserACCNode *next;
};

UserACCNode *UserACCFirstNode = new UserACCNode;
UserACCNode *UserACCHead = new UserACCNode;
UserACCNode *UserACCTail = new UserACCNode;

void User::UserMenu()
{
  do {
    cout << "===============================" << endl;
    cout << "|\tMENU PENGGUNA\t|" <<endl;
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

void User::LoginAsUser()
{
  cout << "==============================" << endl;
  cout << "|\tMASUK SEBAGAI PENGGUNA\t|" << endl;
  cout << "==============================" << endl;
  cout << "Nama Pengguna\t: ";
  cin >> ProfileUser.UserUsername;
  cout << "Sandi\t: ";
  cin >> ProfileUser.UserPassword;

  UserACCNode *UserACCCheck = UserACCHead;
  while(UserACCCheck != NULL)
  {
    if(ProfileUser.UserUsername == UserACCCheck->UserUsernameNode && ProfileUser.UserPassword == UserACCCheck->UserPasswordNode)
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Berhasil Masuk!" << endl;
      cout << "===============================" << endl;
      cout << "\n";
      MainMenuUser();
    }
    else
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Masukan Salah atau Nama Pengguna Tidak Ditemukan!" << endl;
      cout << "===============================" << endl;
      cout << "\n";
      UserMenu();
    }
    UserACCCheck = UserACCCheck->next;
  }
}

void User::UserRegistryACC()
{
  cout << "==============================" << endl;
  cout << "|\tPENDAFTARAN AKUN PENGGUNA\t|" << endl;
  cout << "==============================" << endl;
  cout << "Nama Pengguna\t: ";
  cin >> UserACCFirstNode->UserUsernameNode;
  cout << "Sandi\t: ";
  cin >> UserACCFirstNode->UserPasswordNode;
  cin.ignore();
  cout << "Nama\t: ";
  getline(cin, ProfileUser.UserName);
  cout << "Alamat\t: ";
  getline(cin, ProfileUser.UserAddress);
  cout << "No. Telepon\t: ";
  cin >> ProfileUser.UserPhone;
  UserACCFirstNode->next = NULL;
  UserACCHead = UserACCFirstNode;
  UserACCTail = UserACCFirstNode;

  UserRegistryToSignUpConfirm:
  cout << "\n";
  cout << "===============================" << endl;
  cout << "Ketik Y untuk mendaftar!" << endl;
  cout << "===============================" << endl;
  cout << "\n";
  cout << " ->  ";
  cin >> UserRegistryToSignUp;
  if(UserRegistryToSignUp == 'Y' || UserRegistryToSignUp == 'y')
  {
    cout << "\n";
    cout << "===============================" << endl;
    cout << "Berhasil Mendaftar!" << endl;
    cout << "Kembali Ke Halaman Awal" << endl;
    cout << "===============================" << endl;
    cout << "\n";
    UserProfileToTXT();
    UserMenu();
  }
  else
  {
    cout << "\n";
    cout << "===============================" << endl;
    cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
    cout << "===============================" << endl;
    cout << "\n";
    goto UserRegistryToSignUpConfirm;
  }
}

void User::UserProfileToTXT()
{
  put.open("UserProfile.txt");
  put << "==============================" << endl;
  put << "|\tPROFIL PENGGUNA\t|" << endl;
  put << "==============================" << endl;
  put << "Nama Pengguna\t: " << UserACCFirstNode->UserUsernameNode << endl;
  put << "Nama\t: " << ProfileUser.UserName << endl;
  put << "Alamat\t: " << ProfileUser.UserAddress << endl;
  put << "No. Telepon\t: " << ProfileUser.UserPhone << endl;
  put << "==============================" << endl;
  put.close();
}

void User::ShowUserName()
{
  cout << "===============================" << endl;
	cout << "|  " << ProfileUser.UserName << "  |" <<endl;
	cout << "===============================" << endl;
}

void User::MainMenuUser()
{
  if(!ProfileUser.UserName.empty())
  {
    cout << "\n";
    ShowUserName();
  }
  do
  {
    main_menu_user:
    cout << "\n";
    cout << "==============================" << endl;
    cout << "|\tMENU PENGGUNA\t|" << endl;
    cout << "==============================" << endl;
    cout << "1. Pendaftaran Praktikum" << endl;
    cout << "2. Materi" << endl;
    cout << "3. Jadwal" << endl;
    cout << "0. Keluar" << endl;
    cout << "===============================" << endl;
    cout << "  ->  "; cin >> MainMenuUserC;
    switch(MainMenuUserC)
    {
      case 1:
        PrakRegistration();
        break;
      // case 2:
      //   PrakMateri();
      //   break;
      case 3:
        PrakJadwal();
        break;
      case 0:
        exit(0);
        break;
      default:
        cout << "\n";
        cout << "===============================" << endl;
        cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
        cout << "===============================" << endl;
        cout << "\n";
        goto main_menu_user;
        break;
    }
  } while(MainMenuUserC != 0);
  cout << "\n";
}

void User::PrakRegistration()
{
  IndexOfPrakCSlot = 1;

  cout << "\n";
  cout << "===============================" << endl;
	cout << "|\tPENDAFTARAN PRAKTIKUM\t|" <<endl;
	cout << "===============================" << endl;
  cout << "1. Pemilihan Mata Praktikum" << endl;
  cout << "2. Pembayaran Pendaftaran" << endl;
  cout << "3. Pemilihan Slot" << endl;
	cout << "===============================" << endl;
	cout << " ->  "; cin >> PrakRegistryC;
  switch (PrakRegistryC) {
    case 1:
      PrakCName();
      break;
    case 2:
      PrakPay();
      break;
    case 3:
      PrakCSlot();
      break;
    default:
      break;
    }
}

void User::PrakCList()
{
  Total = 0;
  cout << "Mata Praktikum\t: || ";
  for(i = 0; i < PrakCNameAmount; i++)
  {
    cout << PrakBuy.PrakListC[i] << " || ";
  }
  cout << "\n";

  cout << "Harga\t\t\t: || ";
  for(i = 0; i < PrakCNameAmount; i++)
  {
    cout << PrakBuy.PrakPriceC[i] << " || ";
  }
  cout << "\n";
  PrakTotal(PrakCNameAmount - 1);
  cout << "Total\t\t\t: || " << Total << "  ||  " << endl;
  cout << "===============================" << endl;
}

void User::PrakCName()
{
  extern Adm APObj;
  DestinationPrakCName:
  SizeOfArrayPrakList = sizeof(APObj.PrakList.PrakNameList) / sizeof(APObj.PrakList.PrakNameList[0]);
  Cname:
  cout << "\n";
  cout << "===============================" << endl;
	cout << "|\tPEMILIHAN PRAKTIKUM\t|" <<endl;
	cout << "===============================" << endl;
  for(i = 0; i < SizeOfArrayPrakList; i++)
  {
    cout << i + 1 << ". " << APObj.PrakList.PrakNameList[i] << " ||  " << APObj.PrakList.PrakPriceList[i] << endl;
  }
  cout << "\n";
  cout << "===============================" << endl;
  cout << "Masukkan jumlah praktikum yang ingin diambil ->  "; cin >> PrakCNameAmount;
  //
  DeclareDynimicalArrayPrakBuy(PrakCNameAmount);
  IDeclaringDynamicalArray++;
  //
  for(i = 0; i < PrakCNameAmount; i++)
  {
    cout << "===============================" << endl;
    for(j = 0; j < SizeOfArrayPrakList; j++)
    {
      cout << j + 1 << ". " << APObj.PrakList.PrakNameList[j] << " ||  " << APObj.PrakList.PrakPriceList[i] << endl;
    }
    cout << "===============================" << endl;
    cout << "Masukkan nomor praktikum ke-" << i + 1 << " yang ingin diambil!\n";
    cout << "===============================" << endl;
    cout << " ->  ";
    cin >> PrakCNameNumber[i];
    PrakBuy.PrakListC[i] = APObj.PrakList.PrakNameList[PrakCNameNumber[i] - 1];
    PrakBuy.PrakPriceC[i] = APObj.PrakList.PrakPriceList[PrakCNameNumber[i] - 1];
    cout << "\n";
  }
  
  bfore_done:
  cout << "Selesai? (Y/N)\n";
  cout << " ->  ";
  cin >> d1;
  if(d1 == 'Y' || d1 == 'N' || d1 == 'y' || d1 == 'n')
  {
    if(d1 == 'Y' || d1 == 'y')
    {
      y_done:
      cout << "===============================" << endl;
      cout << "1. Lanjut ke pembayaran\n";
      cout << "2. Lihat Daftar Mata Praktikum Yang DiAmbil" << endl;
      cout << "9. Kembali ke menu utama\n";
      cout << "===============================" << endl;
      cout << " ->  "; cin >> y_d1;
      switch(y_d1)
      {
        case 1:
          PayingRegistration = false;
          PrakPay();
          break;
        case 2:
          cout << "===============================" << endl;
          cout << "|\tMATA PRAKTIKUM YANG DIPILIH\t|" <<endl;
          cout << "===============================" << endl;
          //
          PrakCList();
          //
          goto y_done;
          break;
        case 9:
          MainMenuUser();
          break;
        default:
          cout << "\n";
          cout << "===============================" << endl;
          cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
          cout << "===============================" << endl;
          cout << "\n";
          goto y_done;
          break;
      }
    }
    else if(d1 == 'N' || d1 == 'n')
    {
      n_done:
      cout << "===============================" << endl;
      cout << "1. Ulangi pemilihan praktikum\n";
      cout << "2. Kembali ke menu utama\n";
      cout << "===============================" << endl;
      cout << " ->  "; cin >> y_d1;
      switch(y_d1)
      {
        case 1:
          goto Cname;
          break;
        case 2:
          MainMenuUser();
          break;
        default:
          cout << "\n";
          cout << "===============================" << endl;
          cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
          cout << "===============================" << endl;
          cout << "\n";
          goto n_done;
          break;
      }
    }
    else
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
      cout << "===============================" << endl;
      cout << "\n";
      goto bfore_done;
    }
  }
  else
  {
    cout << "\n";
    cout << "===============================" << endl;
    cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
    cout << "===============================" << endl;
    cout << "\n";
    goto bfore_done;
  }
}

void User::PrakPay()
{
  if(PayingRegistration == false)
  {
    cout << "\n";
    cout << "==============================" << endl;
    cout << "|\tPEMBAYARAN PENDAFTARAN\t|" << endl;
    cout << "==============================" << endl;
    //
    PrakCList();
    //
    cout << "\n";
    cout << "Ketik Y Untuk Bayar Sekarang!" << endl;
    cout << " -> ";
    cin >> d2;
    cout << "===============================" << endl;
    if(d2 == 'Y' || d2 == 'y')
    {
      y_done:
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Masukkan jumlah uang!" << endl;
      cout << "===============================" << endl;
      cout << " ->  ";
      cin >> AmountPay;
      Chance = AmountPay - Total;
      PayingRegistration = true;
      PrintStructOrNList:
      cout << "\n";
      cout << "===============================" << endl;
      cout << "1. Cetak Struk" << endl;
      cout << "9. Menu Utama" << endl;
      cout << "0. Keluar" << endl;
      cout << "===============================\n" << endl;
      cout << " ->  ";
      cin >> PrintStructOrN;
      switch (PrintStructOrN)
      {
      case 1:
        PrakInvoice();
        InvoiceToStructTXT();
        break;
      case 9:
        MainMenuUser();
        break;
      case 0:
        exit(0);
        break;
      default:
        cout << "\n";
        cout << "===============================" << endl;
        cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
        cout << "===============================" << endl;
        cout << "\n";
        goto PrintStructOrNList;
        break;
      }
    }
    else
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
      cout << "===============================" << endl;
      cout << "\n";
    }
  }
  else
  {
    if(IDeclaringDynamicalArray == 0)
    {
      //
      DeclareDynimicalArrayPrakBuy(PrakCNameAmount);
      IDeclaringDynamicalArray++;
      //
      if(PrakBuy.PrakListC[0].empty())
      {
        DestinationPayingRegistrationC1:
        cout << "\n";
        cout << "===============================" << endl;
        cout << "Tidak Ada Praktikum Yang Perlu DiBayar!" << endl;
        cout << "===============================" << endl;
        cout << "9. Kembali" << endl;
        cout << "0. Keluar" << endl;
        cout << "===============================" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";
        switch(PayingRegistrationC)
        {
          case 9:
            PrakRegistration();
            break;
          case 0:
            exit(0);
            break;
          default:
            cout << "\n";
            cout << "===============================" << endl;
            cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
            cout << "===============================" << endl;
            cout << "\n";
            goto DestinationPayingRegistrationC1;
        }
      }
      else
      {
        DestinationPayingRegistrationC2:
        cout << "\n";
        cout << "===============================" << endl;
        cout << "Tidak Ada Praktikum Yang Perlu DiBayar!" << endl;
        cout << "===============================" << endl;
        cout << "1. Lihat Invoice" << endl;
        cout << "9. Kembali" << endl;
        cout << "0. Keluar" << endl;
        cout << "===============================" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";
        switch(PayingRegistrationC)
        {
          case 1:
            PrakInvoice();
            MainMenuUser();
            break;
          case 9:
            PrakRegistration();
            break;
          case 0:
            exit(0);
            break;
          default:
            cout << "\n";
            cout << "===============================" << endl;
            cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
            cout << "===============================" << endl;
            cout << "\n";
            goto DestinationPayingRegistrationC2;
        }
      }
    }
    else
    {
      if(PrakBuy.PrakListC[0].empty())
      {
        DestinationPayingRegistrationC3:
        cout << "\n";
        cout << "===============================" << endl;
        cout << "Tidak Ada Praktikum Yang Perlu DiBayar!" << endl;
        cout << "===============================" << endl;
        cout << "9. Kembali" << endl;
        cout << "0. Keluar" << endl;
        cout << "===============================" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";
        switch(PayingRegistrationC)
        {
          case 9:
            PrakRegistration();
            break;
          case 0:
            exit(0);
            break;
          default:
            cout << "\n";
            cout << "===============================" << endl;
            cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
            cout << "===============================" << endl;
            cout << "\n";
            goto DestinationPayingRegistrationC3;
        }
      }
      else
      {
        DestinationPayingRegistrationC4:
        cout << "\n";
        cout << "===============================" << endl;
        cout << "Tidak Ada Praktikum Yang Perlu DiBayar!" << endl;
        cout << "===============================" << endl;
        cout << "1. Lihat Invoice" << endl;
        cout << "9. Kembali" << endl;
        cout << "0. Keluar" << endl;
        cout << "===============================" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";
        switch(PayingRegistrationC)
        {
          case 1:
            PrakInvoice();
            MainMenuUser();
            break;
          case 9:
            PrakRegistration();
            break;
          case 0:
            exit(0);
            break;
          default:
            cout << "\n";
            cout << "===============================" << endl;
            cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
            cout << "===============================" << endl;
            cout << "\n";
            goto DestinationPayingRegistrationC4;
        }
      }
    }
  }
}

void User::DeclareDynimicalArrayPrakBuy(int x)
{
  PrakBuy.PrakListC = new string[x];
  PrakBuy.PrakPriceC = new int[x];
}

int User::PrakTotal(int b)
{
  if(b < 0)
  {
    return 0;
  }
  else
  {
    Total += PrakBuy.PrakPriceC[b];
    return PrakTotal(b - 1);
  }
}

void User::PrakInvoice()
{
	cout << "\n\n===================================" << endl;
	cout << "|\tINVOICE\t|" << endl;
	cout << "===================================" << endl;
	cout << "Mata Praktikum\t\t:  ||  ";
  for(i = 0; i < PrakCNameAmount; i++)
  {
    cout << PrakBuy.PrakListC[i] << " || ";
  }

  cout << "\n";
  
  cout << "Harga\t\t\t: ||  ";
  for(i = 0; i < PrakCNameAmount; i++)
  {
    cout << PrakBuy.PrakPriceC[i] << " || ";
  }
  cout << "\n";
  cout << "Total\t\t\t: " << Total << endl;
  cout << "Jumlah bayar\t\t: " << AmountPay << endl;
  cout << "===================================" << endl;
  cout << "Kembali\t\t\t: " << Chance << endl;
  cout << "===================================" << endl;
  cout << "\n\t\tTerima Kasih!\t\t" << endl;
}

void User::PrakCSlot()
{
  //
  if(IDeclaringDynamicalArray == 0)
  {
    //
    DeclareDynimicalArrayPrakBuy(PrakCNameAmount);
    //
    if(PrakBuy.PrakListC[0].empty() == 0)
    {
      do {
        cout << "\n";
        cout << "===============================" << endl;
        cout << "|\tPEMILIHAN SLOT\t|" <<endl;
        cout << "===============================" << endl;
        cout << "Mata Praktikum\t:" << endl;
        for(i = 0; i < PrakCNameAmount; i++)
        {
          cout << i + 1 << ". " << PrakBuy.PrakListC[i] << endl;
        }
        cout << "\n";
        cout << "===============================" << endl;
        cout << "| Masukkan Nomor Praktikum Untuk Pilih Slot |" <<endl;
        cout << "===============================" << endl;
        cout << " ->  "; cin >> PrakCSlotC;
        PrakCSlotList(PrakCSlotC - 1);
        PrakCSlot();
      } while(PrakCSlotC == i);
    }
    else
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Belum Mendaftar Pada Praktikum Apapun!" <<endl;
      cout << "Silahkan Daftar Terlebih Dahulu!" <<endl;
      cout << "===============================" << endl;
      cout << "\n";
      PrakRegistration();
    }
  }
  else
  {
    if(PrakBuy.PrakListC[0].empty() == 0)
    {
      do {
        cout << "\n";
        cout << "===============================" << endl;
        cout << "|\tPEMILIHAN SLOT\t|" <<endl;
        cout << "===============================" << endl;
        cout << "Mata Praktikum\t:" << endl;
        for(i = 0; i < PrakCNameAmount; i++)
        {
          cout << i + 1 << ". " << PrakBuy.PrakListC[i] << endl;
        }
        cout << "\n";
        cout << "===============================" << endl;
        cout << "| Masukkan Nomor Praktikum Untuk Pilih Slot |" <<endl;
        cout << "===============================" << endl;
        cout << " ->  ";
        cin >> PrakCSlotC;
        PrakCSlotList(PrakCSlotC - 1);
      } while(UserMenuC != 0);
    }
    else
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Belum Mendaftar Pada Praktikum Apapun!" <<endl;
      cout << "Silahkan Daftar Terlebih Dahulu!" <<endl;
      cout << "===============================" << endl;
      cout << "\n";
      PrakRegistration();
    }
  }
}

void User::PrakCSlotList(int x)
{
  Adm APObj;

  SizeOfArrayPrakCNameNumber = sizeof(PrakCNameNumber) / sizeof(PrakCNameNumber[0]);
  SizeOfArraySlotSData = sizeof(APObj.DayAndTimeSlot.SDataDayAndTime) / sizeof(APObj.DayAndTimeSlot.SDataDayAndTime[0]);
  SizeOfArraySlotBasDat = sizeof(APObj.DayAndTimeSlot.BasDatDayAndTime) / sizeof(APObj.DayAndTimeSlot.BasDatDayAndTime[0]);
  SizeOfArraySlotStatistika = sizeof(APObj.DayAndTimeSlot.StatistikaDayAndTime) / sizeof(APObj.DayAndTimeSlot.StatistikaDayAndTime[0]);
  SizeOfArraySlotSO = sizeof(APObj.DayAndTimeSlot.SODayAndTime) / sizeof(APObj.DayAndTimeSlot.SODayAndTime[0]);
  SizeOfArraySlotPBO = sizeof(APObj.DayAndTimeSlot.PBODayAndTime) / sizeof(APObj.DayAndTimeSlot.PBODayAndTime[0]);

  cout << "\n";
  cout << "===============================" << endl;
  cout << "|\tSLOT YANG TERSEDIA\t|" <<endl;
  cout << "===============================" << endl;
  if(PrakBuy.PrakListC[x] == APObj.PrakList.PrakNameList[0])
  {
    for(i = 0; i < SizeOfArraySlotSData; i++)
    {
      cout << i + 1 << ". " << APObj.DayAndTimeSlot.SDataDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "===============================" << endl;
    cout << "Masukkan Nomor Slot Yang Ingin DiPilih!" << endl;
    cout << "===============================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for(i = 0; i < SizeOfArraySlotSData; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] + SplitterColon + APObj.DayAndTimeSlot.SDataDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  else if(PrakBuy.PrakListC[x] == APObj.PrakList.PrakNameList[1])
  {
    for(i = 0; i < SizeOfArraySlotBasDat; i++)
    {
      cout << i + 1 << ". " << APObj.DayAndTimeSlot.BasDatDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "===============================" << endl;
    cout << "Masukkan Nomor Slot Yang Ingin DiPilih!" << endl;
    cout << "===============================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for(i = 0; i < SizeOfArraySlotBasDat; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] + SplitterColon + APObj.DayAndTimeSlot.BasDatDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  else if(PrakBuy.PrakListC[x] == APObj.PrakList.PrakNameList[2])
  {
    for(i = 0; i < SizeOfArraySlotStatistika; i++)
    {
      cout << i + 1 << ". " << APObj.DayAndTimeSlot.StatistikaDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "===============================" << endl;
    cout << "Masukkan Nomor Slot Yang Ingin DiPilih!" << endl;
    cout << "===============================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for(i = 0; i < SizeOfArraySlotStatistika; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] + SplitterColon + APObj.DayAndTimeSlot.StatistikaDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  else if(PrakBuy.PrakListC[x] == APObj.PrakList.PrakNameList[3])
  {
    for(i = 0; i < SizeOfArraySlotSO; i++)
    {
      cout << i + 1 << ". " << APObj.DayAndTimeSlot.SODayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "===============================" << endl;
    cout << "Masukkan Nomor Slot Yang Ingin DiPilih!" << endl;
    cout << "===============================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for(i = 0; i < SizeOfArraySlotSO; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] + SplitterColon + APObj.DayAndTimeSlot.SODayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  else if(PrakBuy.PrakListC[x] == APObj.PrakList.PrakNameList[4])
  {
    for(i = 0; i < SizeOfArraySlotPBO; i++)
    {
      cout << i + 1 << ". " << APObj.DayAndTimeSlot.PBODayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "===============================" << endl;
    cout << "Masukkan Nomor Slot Yang Ingin DiPilih!" << endl;
    cout << "===============================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for(i = 0; i < SizeOfArraySlotPBO; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] + SplitterColon + APObj.DayAndTimeSlot.PBODayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
}

void User::MenuAfterPrakCSlot(int x)
{
  cout << IndexOfPrakCSlot << endl;
  if(IndexOfPrakCSlot != PrakCNameAmount)
  {
    cout << "\n";
    cout << "Selesai? (Y/N)\n";
    cout << " ->  ";
    cin >> d1;
    if(d1 == 'Y' || d1 == 'y')
    {
      IndexOfPrakCSlot++;
      cout << "\n";
      cout << "===============================" << endl;
      cout << "1. Lanjut Memilih Slot Lain\n";
      cout << "2. Lihat Jadwal" << endl;
      cout << "9. Kembali\n";
      cout << "===============================" << endl;
      cout << " ->  ";
      cin >> y_d1;
      switch(y_d1)
      {
        case 1:
          PrakCSlot();
          break;
        case 2:
          PrakJadwal();
        case 9:
          PrakCSlotList(x);
          break;
        default:
          cout << "\n";
          cout << "===============================" << endl;
          cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
          cout << "===============================" << endl;
          cout << "\n";
          PrakCSlotList(x);
          break;
      }
    }
    else
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
      cout << "===============================" << endl;
      cout << "\n";
      PrakCSlotList(x);
    }
  }
  else
  {
    cout << "\n";
    cout << "Selesai? (Y/N)\n";
    cout << " ->  ";
    cin >> d1;
    if(d1 == 'Y' || d1 == 'y')
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "1. Lihat Jadwal" << endl;
      cout << "9. Kembali\n";
      cout << "0. Menu Utama\n";
      cout << "===============================" << endl;
      cout << " ->  ";
      cin >> y_d1;
      switch(y_d1)
      {
        case 1:
          PrakJadwal();
        case 9:
          PrakCSlotList(x);
          break;
        case 0:
          MainMenuUser();
          break;
        default:
          cout << "\n";
          cout << "===============================" << endl;
          cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
          cout << "===============================" << endl;
          cout << "\n";
          PrakCSlotList(x);
          break;
      }
    }
    else
    {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
      cout << "===============================" << endl;
      cout << "\n";
      PrakCSlotList(x);
    }
  }
}

void User::PrakJadwal()
{
  if(PrakSchedule.jadwal[0].empty())
  {
    cout << "\n";
    cout << "===============================" << endl;
    cout << "\tJadwal Masih Kosong\t" << endl;
    cout << "===============================" << endl;
    MainMenuUser();
  }
  else
  {
    SizeOfPrakSchedule = sizeof(PrakSchedule.jadwal) / sizeof(PrakSchedule.jadwal[0]);
    cout << "\n";
    cout << "===============================" << endl;
    cout << "\tJadwal\t" << endl;
    cout << "===============================" << endl;
    for(i = 0; i < SizeOfPrakSchedule; i++)
    {
      if(!PrakSchedule.jadwal[i].empty())
      {
      cout << i + 1 << ". " << PrakSchedule.jadwal[i] << endl;
      }
      else
      {
        break;
      }
    }
    cout << "===============================" << endl;
    PrakScheduleToTXT();
    cout << "\n";
    MainMenuUser();
  }
}

void User::PrakScheduleToTXT()
{
  put.open("Schedule.txt");
  put << "===============================" << endl;
  put << "\tJadwal\t" << endl;
  put << "===============================" << endl;
  for(i = 0; i < SizeOfPrakSchedule; i++)
  {
    if(!PrakSchedule.jadwal[i].empty())
    {
      put << i + 1 << ". " << PrakSchedule.jadwal[i] << endl;
    }
    else
    {
      break;
    }
  }
  put << "===============================" << endl;
  put.close();
}

void User::InvoiceToStructTXT()
{
  put.open("Struct.txt");
  put << "===================================" << endl;
	put << "|\t\tINVOICE\t\t|" << endl;
	put << "===================================" << endl;
	put << "Mata Praktikum\t:  || ";
  for(i = 0; i < PrakCNameAmount; i++)
  {
    put << PrakBuy.PrakListC[i] << " || ";
  }

  put << "\n";
  
  put << "Harga\t\t\t: ||  ";
  for(i = 0; i < PrakCNameAmount; i++)
  {
    put << PrakBuy.PrakPriceC[i] << " || ";
  }
  put << "\n";
  put << "Total\t\t\t: " << Total << endl;
  put << "Jumlah bayar\t: " << AmountPay << endl;
  put << "===================================" << endl;
  put << "Kembali\t\t\t: " << Chance << endl;
  put << "===================================" << endl;
  put << "\n\t\tTerima Kasih!\t\t" << endl;
  put.close();
}