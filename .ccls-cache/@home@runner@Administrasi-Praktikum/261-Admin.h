#pragma once
#include "269-User.h"

using namespace std;

class Adm
{
	public:
    void FirstMenu();
		void LoginAsAdm();
    void ProfileAuthor();
    void MainMenuAdm();
    void ManagementMateri();
    void DeclareFirstMateri();
    void DownloadMateri();
    void AddAmountMateri();
    void AddMateri();
    void AddMateri2();
    void DeleteMateri();
    void PrintMateri();
		void proses();

  struct
  {
    string PrakNameList[5] = 
    {
      "Struktur Data",
      "Basis Data",
      "Statistika Informatika",
      "Sistem Operasi",
      "Pemrograman Berorientasi Objek"
    };
    int PrakPriceList[5] = {35000, 32000, 34000, 32000, 10000};
  }PrakList;

  struct
  {
    string SDataDayAndTime[10] = 
    {
      "Senin, 07.30 - 09.00",
      "Senin, 09.00 - 10.30",
      "Senin, 10.30 - 12.00",
      "Selasa, 07.30 - 09.00",
      "Selasa, 09.00 - 10.30",
      "Selasa, 10.30 - 12.00",
      "Rabu, 07.30 - 09.00",
      "Rabu, 09.00 - 10.30",
      "Rabu, 10.30 - 12.00",
      "Kamis, 07.30 - 09.00"
    };
    string BasDatDayAndTime[10] = 
    {
      "Senin, 07.30 - 10.30",
      "Senin, 10.30 - 13.30",
      "Selasa, 07.30 - 10.30",
      "Selasa, 10.30 - 13.30",
      "Rabu, 10.30 - 13.30",
      "Rabu, 13.30 - 16.30",
      "Kamis, 10.30 - 13.30",
      "Jumat, 07.30 - 10.30",
      "Sabtu, 07.30 - 10.30",
      "Sabtu, 13.30 - 16.30"
    };
    string StatistikaDayAndTime[10] = 
    {
      "Senin, 10.30 - 13.30",
      "Senin, 13.30 - 16.30",
      "Selasa, 15.00 - 18.00",
      "Rabu, 07.30 - 10.30",
      "Rabu, 10.30 - 13.30",
      "Rabu, 13.30 - 16.30",
      "Kamis, 13.30 - 16.30",
      "Jumat, 07.30 - 10.30",
      "Sabtu, 07.30 - 10.30",
      "Sabtu, 10.30 - 13.30"
    };
    string SODayAndTime[13] = 
    {
      "Selasa, 07.30 - 09.00",
      "Selasa, 09.00 - 10.30",
      "Selasa, 15.00 - 16.30",
      "Selasa, 16.30 - 18.00",
      "Rabu, 10.30 - 12.00",
      "Rabu, 12.00 - 13.30",
      "Rabu, 18.00 - 19.30",
      "Kamis, 10.30 - 12.00",
      "Sabtu, 07.30 - 09.00",
      "Sabtu, 09.00 - 10.30",
      "Sabtu, 10.30 - 12.00",
      "Sabtu, 12.00 - 13.30",
      "Sabtu, 13.30 - 15.00"
    };
    string PBODayAndTime[10] = 
    {
      "Senin, 13.30 - 15.00",
      "Senin, 16.30 - 18.00",
      "Selasa, 13.30 - 15.00",
      "Selasa, 15.00 - 16.30",
      "Selasa, 16.30 - 18.00",
      "Rabu, 13.30 - 15.00",
      "Rabu, 15.00 - 16.30",
      "Rabu, 16.30 - 18.00",
      "Jumat, 07.30 - 09.00",
      "Jumat, 09.00 - 10.30"
    };
  }DayAndTimeSlot;
  

	private:
    int FirstMenuC;
    int menu_c;
    int MateriC;
    int DownloadMateriC;
    int AmountAddMateri;
    int DeleteMateriC;
		int PayTotal;
    bool IndexOfDeclaringFM = false;
    int ptr;
		int pay;
		int chance;
    int i, j, k;
    bool HeadIsNULL = false;
    ifstream take;
    string AdmUsername = "Adm", AdmPassword = "Adm";
    string username, password;
};

Adm APObj;

class KTP
{
  public:
    string nik[3];
    string nama[3];
    string tempatLahir[3];
    string jenisKelamin[3];
    int jk[3];
    string GolDar[3];
    int gd[3];
    string address[3];
    string agama[3];
    int ag[3];
    string statusPerkawinan[3];
    int sp[3];
    string pekerjaan[3];
    string statusKewarganegaraan[3];
    int sk[3];
};

struct
{
  string RT[3];
  string RW[3];
  string Kel[3];
  string Kec[3];
}alamat;

struct
{
  int hari[3];
  int bulan[3];
  int tahun[3];
}tgl;

class Login
{
  public:
    string user, pass;
    int *next;
};

class MateriNode
{
  public :
    string MateriName;
    MateriNode *next;
};

MateriNode *SData = new MateriNode;
MateriNode *BasDat = new MateriNode;
MateriNode *Statistika = new MateriNode;
MateriNode *SO = new MateriNode;
MateriNode *PBO = new MateriNode;
MateriNode *head = new MateriNode;
MateriNode *tail = new MateriNode;
MateriNode *Check = new MateriNode;
MateriNode *TempDownloadMateri = new MateriNode;
MateriNode *TempDeleteMateriA = new MateriNode;
MateriNode *TempDeleteMateriB = new MateriNode;

void Adm::FirstMenu()
{
  User UserObject;
  do
  {
    cout << "1. Masuk Sebagai Adm" << endl;
    cout << "2. Masuk Sebagai Pengguna" << endl;
    cout << "0. Keluar" << endl;
    cout << " ->  ";
    cin >> FirstMenuC;
    switch (FirstMenuC)
    {
    case 1:
      LoginAsAdm();
      break;
    case 2:
      UserObject.UserMenu();
    case 0:
        exit(0);
    default:
      break;
    }
  } while(FirstMenuC != 0);
}

void Adm::LoginAsAdm()
{
  Login *LogIn = new Login;
  log_in:
  cout << "===============================" << endl;
	cout << "|\tLOGIN\t|" <<endl;
	cout << "===============================" << endl;
  cout << "Masukkan username\t: ";
  cin >> LogIn->user;
  cout << "Masukkan password\t: ";
  cin >> LogIn->pass;
  LogIn->next = NULL;
  
  if(LogIn->user == AdmUsername && LogIn->pass == AdmPassword)
  {
    cout << "/n";
    cout << "===============================" << endl;
    cout << "\nBerhasil login!" << endl;
    cout << "===============================" << endl;
    cout << "/n";
    MainMenuAdm();
  }
  else
  {
    cout << "/n";
    cout << "===============================" << endl;
    cout << "\nUsername atau password salah! Harap masukkan kembali!" << endl;
    cout << "===============================" << endl;
    cout << "/n";
    goto log_in;
  }
}

void Adm::MainMenuAdm()
{
  do
  {
    main_menu:
    cout << "\n\n";
    cout << "==============================" << endl;
    cout << "|\tMENU\t|" << endl;
    cout << "==============================" << endl;
    cout << "1. Manajemen Praktikum" << endl;
    cout << "2. Manajemen Materi" << endl;
    cout << "3. Profil" << endl;
    cout << "0. Keluar" << endl;
    cout << "===============================" << endl;
    cout << "  ->  ";
    cin >> menu_c;
    switch(menu_c)
    {
      // case 1:
      //   PrakRegistration(); Ganti ke PrakManagement <- jadwal
      //   break;
      case 2:
        ManagementMateri();
        break;
      case 3:
        ProfileAuthor();
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
        goto main_menu;
        break;
    }
  }while(menu_c != 0);
}

void Adm::ProfileAuthor()
{
  KTP A;
  i = 0;
  take.open("ProfileAuthor.txt");
  while(!take.eof())
  {
    take >> A.nik[i]; take.ignore();
    getline(take, A.nama[i]);
    getline(take, A.tempatLahir[i]);
    take >> tgl.hari[i];
    take >> tgl.bulan[i];
    take >> tgl.tahun[i];
    take >> A.jk[i];
    switch(A.jk[i])
    {
      case 0:
        A.jenisKelamin[i] = "Jenis Kelamin\t\t: Perempuan";
        break;
      case 1:
        A.jenisKelamin[i] = "Jenis Kelamin\t\t: Laki-Laki";
        break;
    }
    take >> A.gd[i];
    switch(A.gd[i])
    {
      case 0:
        A.GolDar[i] = "\t\tGol.Darah: O";
        break;
      case 1:
        A.GolDar[i] = "\t\tGol.Darah: A";
        break;
      case 2:
        A.GolDar[i] = "\t\tGol.Darah: B";
        break;
      case 3:
        A.GolDar[i] = "\t\tGol.Darah: AB";
        break;
    }
    take.ignore();
    getline(take, A.address[i]);
    take >> alamat.RT[i];
    take >> alamat.RW[i]; take.ignore();
    getline(take, alamat.Kel[i]);
    getline(take, alamat.Kec[i]);
    take >> A.ag[i];
    switch(A.ag[i])
    {
      case 0:
        A.agama[i] = "Agama\t\t\t: Islam";
        break;
      case 1:
        A.agama[i] = "Agama\t\t\t: Kristen";
        break;
      case 2:
        A.agama[i] = "Agama\t\t\t: Buddha";
        break;
      case 3:
        A.agama[i] = "Agama\t\t\t: Hindu";
        break;
      case 4:
        A.agama[i] = "Agama\t\t\t: Khonghucu";
        break;
      case 5:
        A.agama[i] = "Agama\t\t\t: Katholik";
        break;
    }
    take >> A.sp[i];
    switch(A.sp[i])
    {
      case 0:
        A.statusPerkawinan[i] = "Status Perkawinan\t: Kawin";
        break;
      case 1:
        A.statusPerkawinan[i] = "Status Perkawinan\t: Belum Kawin";
        break;
      case 2:
        A.statusPerkawinan[i] = "Status Perkawinan\t: Cerai Hidup";
        break;
      case 3:
        A.statusPerkawinan[i] = "Status Perkawinan\t: Cerai Mati";
        break;
    }
    take.ignore();
    getline(take, A.pekerjaan[i]);
    take >> A.sk[i];
    switch(A.sk[i]) {
      case 0:
        A.statusKewarganegaraan[i] = "Kewarganegaraan\t\t: WNI";
        break;
      case 1:
        A.statusKewarganegaraan[i] = "Kewarganegaraan\t\t: WNA";
        break;
    }
    i++;
  }
  take.close();

  i = 0;
  do {
    cout << "==================================================" << endl;
    cout << "\t\tPROVINSI DKI JAKARTA" << endl;
    cout << "\t\tKOTA JAKARTA BARAT" << endl;
    cout << "==================================================" << endl;
    cout << "NIK\t\t\t: "<< A.nik[i] << endl;
    cout << "Nama\t\t\t: "<< A.nama[i] << endl;
    cout << "Tempat/Tgl Lahir\t: " << A.tempatLahir[i] << ", " << tgl.hari[i] << "-" << tgl.bulan[i] << "-" << tgl.tahun[i] << endl;
    cout << A.jenisKelamin[i] << "\t" << A.GolDar[i] << endl;
    cout << "Alamat\t\t\t: " << A.address[i] << endl;
    cout << "  \tRT/RW\t\t: " <<  alamat.RT[i] << "/" << alamat.RW[i] << endl;
    cout << "  \tKel/Desa\t: "; cout << alamat.Kel[i] << endl;
    cout << "  \tKec\t\t: "; cout << alamat.Kec[i] << endl;
    cout << A.agama[i] << endl;
    cout << A.statusPerkawinan[i] << endl;
    cout << "Pekerjaan\t\t: " << A.pekerjaan[i] << endl;
    cout <<  A.statusKewarganegaraan[i] << endl;
    cout << "Berlaku Hingga\t\t: SEUMUR HIDUP" << endl;
    i++;
  } while (i < 3);
}

void Adm::DeclareFirstMateri()
{
  if(HeadIsNULL == true)
  {
    cout << "===============================" << endl;
    cout << "|\tTidak Ada Modul!\t|" <<endl;
    cout << "===============================" << endl;
    ManagementMateri();
  }
  else
  {
    SData->MateriName = "Modul Struktur Data";
    SData->next = BasDat;

    BasDat->MateriName = "Modul Basis Data";
    BasDat->next = Statistika;

    Statistika->MateriName = "Modul Statistika Informatika";
    Statistika->next = SO;

    SO->MateriName = "Modul Sistem Operasi";
    SO->next = PBO;

    PBO->MateriName = "Modul Pemrograman Berbasis Objek";
    PBO->next = NULL;

    head = SData;
    tail = PBO;
  }
}

void Adm::ManagementMateri()
{
  if(HeadIsNULL == false)
  {
    if(IndexOfDeclaringFM == false)
    {
      DeclareFirstMateri();
      IndexOfDeclaringFM = true;
      do
      {
        DestinationDeclareFirstMateri1:
        PrintMateri();
        cout << "===============================" << endl;
        cout << "1. Download Modul" << endl;
        cout << "2. Tambah Modul" << endl;
        cout << "3. Hapus Modul" << endl;
        cout << "9. Keluar" << endl;
        cout << "0. Menu Utama" << endl;
        cout << "===============================" << endl;
        cout << " ->  ";
        cin >> MateriC;
        switch (MateriC)
        {
        case 0:
          MainMenuAdm();
          break;
        case 1:
          DownloadMateri();
          break;
        case 2:
          AddMateri();
          break;
        case 3:
          DeleteMateri();
          break;
        case 9:
          exit(0);
          break;
        default:
          goto DestinationDeclareFirstMateri1;
          break;
        }
      } while(MateriC != 9);
    }
    else
    {
      do
      {
        DestinationDeclareFirstMateri3:
        PrintMateri();
        cout << "===============================" << endl;
        cout << "1. Download Modul" << endl;
        cout << "2. Tambah Modul" << endl;
        cout << "3. Hapus Modul" << endl;
        cout << "9. Keluar" << endl;
        cout << "0. Menu Utama" << endl;
        cout << "===============================" << endl;
        cout << " ->  ";
        cin >> MateriC;
        switch (MateriC)
        {
        case 0:
          MainMenuAdm();
          break;
        case 1:
          DownloadMateri();
          break;
        case 2:
          AddMateri();
          break;
        case 3:
          DeleteMateri();
          break;
        case 9:
          exit(0);
          break;
        default:
          goto DestinationDeclareFirstMateri3;
          break;
        }
      } while(MateriC != 9);
    }
  }
  else
  {
    do
    {
      DestinationDeclareFirstMateri2:
      cout << "===============================" << endl;
      cout << "|\tTidak Ada Modul!\t|" <<endl;
      cout << "===============================" << endl;
      cout << "1. Tambah Modul" << endl;
      cout << "9. Keluar" << endl;
      cout << "0. Menu Utama" << endl;
      cout << "===============================" << endl;
      cout << " ->  ";
      cin >> MateriC;
      switch (MateriC)
      {
      case 0:
        MainMenuAdm();
        break;
      case 1:
        AddMateri();
        break;
      case 9:
        exit(0);
        break;
      default:
        goto DestinationDeclareFirstMateri2;
        break;
      }
    } while(MateriC != 9);
  }
}

void Adm::DownloadMateri()
{
  do
  {
    PrintMateri();
    cout << "===============================" << endl;
    cout << "9. Kembali" << endl;
    cout << "0. Menu Utama" << endl;
    cout << "===============================\n" << endl;
    cout << "Masukkan modul yang ingin diunduh!\n";
    cout << " ->  "; cin >> DownloadMateriC;

    if(DownloadMateriC == 0)
    {
      MainMenuAdm();
    }
    else if(DownloadMateriC == 9)
    {
      ManagementMateri();
    }
    
    TempDownloadMateri = head;
    for(i = 0; i < DownloadMateriC; i++)
    {
      if(i == DownloadMateriC - 1)
      {
        cout << "\n";
        cout << "===============================" << endl;
        cout << TempDownloadMateri->MateriName << " Berhasil DiUnduh" << endl;
        cout << "===============================" << endl;
        cout << "\n";
      }
      TempDownloadMateri = TempDownloadMateri->next;
    }
  } while(DownloadMateriC != 0);
}

void Adm::PrintMateri()
{
  if(head == NULL)
  {
    HeadIsNULL = true;
    cout << "\n";
    ManagementMateri();
  }
  else
  {
    i = 1;
    Check = head;
    cout << "===============================" << endl;
    cout << "|\tMATERI\t|" <<endl;
    cout << "===============================" << endl;
    while(Check != NULL) {
      cout << i << ". " << Check->MateriName << endl;
      Check = Check->next;
      i++;
    }
  }
}

// void Adm::AddAmountMateri()
// {
//   AddressAddAmountMateri:
//   cout << "\n\n";
//   cout << "==============================" << endl;
//   cout << "|\tTAMBAH MATERI\t|" << endl;
//   cout << "==============================" << endl;
//   cout << "Masukkan Jumlah Materi Yang Ingin DiTambahkan!" << endl;
//   cout << " ->  ";
//   cin >> AmountAddMateri;
//   switch (AmountAddMateri)
//   {
//   case 1:
//     AddMateri();
//     break;
//   case 2:
//     AddMateri();
//     AddMateri2();
//     break;
//   default:
//     cout << "\n";
//     cout << "===============================" << endl;
//     cout << "Masukan Salah! Harap Ulangi Kembali!" << endl;
//     cout << "===============================" << endl;
//     cout << "\n";
//     goto AddressAddAmountMateri;
//     break;
//   }
// }

void Adm::AddMateri()
{
  MateriNode *New1 = new MateriNode;
  if(HeadIsNULL == true)
  {
    HeadIsNULL = false;
    cout << "\n\n";
    cout << "==============================" << endl;
    cout << "|\tTAMBAH MATERI\t|" << endl;
    cout << "==============================" << endl;
    cout << "Masukkan nama materi ->  "; cin.ignore(); getline(cin, New1->MateriName);
    head = New1;
    New1->next = NULL;
    tail->next = New1;
    tail = New1;
    cout << "\n";
    cout << "===============================" << endl;
    cout << "Berhasil Menambah Materi!" << endl;
    cout << "===============================" << endl;
    cout << "\n";
    ManagementMateri();
  }
  else
  {
    cout << "\n\n";
    cout << "==============================" << endl;
    cout << "|\tTAMBAH MATERI\t|" << endl;
    cout << "==============================" << endl;
    cout << "Masukkan nama materi ->  "; cin.ignore(); getline(cin, New1->MateriName);
    New1->next = NULL;
    tail->next = New1;
    tail = New1;
    cout << "\n";
    cout << "===============================" << endl;
    cout << "Berhasil Menambah Materi!" << endl;
    cout << "===============================" << endl;
    cout << "\n";
    ManagementMateri();
  }
}

void Adm::AddMateri2()
{
  MateriNode *New2 = new MateriNode;
  cout << "Masukkan nama materi ->  "; getline(cin, New2->MateriName);
  New2->next = NULL;
  tail->next = New2;
  tail = New2;
  cout << "\n";
  cout << "===============================" << endl;
  cout << "Berhasil Menambah Materi!" << endl;
  cout << "===============================" << endl;
  cout << "\n";
}

void Adm::DeleteMateri()
{
  cout << "\n\n";
  cout << "==============================" << endl;
  cout << "|\tHAPUS MODUL\t|" << endl;
  PrintMateri();
  cout << "==============================" << endl;
  cout << "Masukkan Nomor Modul Yang Ingin DiHapus!" << endl;
  cout << " ->  ";
  cin >> DeleteMateriC;

  TempDeleteMateriA = head;
  if(DeleteMateriC == 1)
  {
    head = TempDeleteMateriA->next;
    free(TempDeleteMateriA);
    return;
  }
  for(i = 0; i < DeleteMateriC - 2; i++)
  {
    TempDeleteMateriA = TempDeleteMateriA->next;
  }
  TempDeleteMateriB = TempDeleteMateriA->next;
  TempDeleteMateriA->next = TempDeleteMateriB->next;
  free(TempDeleteMateriB);
}