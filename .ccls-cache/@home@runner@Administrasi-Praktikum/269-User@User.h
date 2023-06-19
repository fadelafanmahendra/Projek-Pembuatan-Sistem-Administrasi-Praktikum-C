#ifndef USER_H_
#define USER_H_
// #pragma once

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

#include "../261-Admin/Admin.h"
#include "../271-Asisten/Assistant.h"

using namespace std;

extern Admin X;

class User
{
public:
  User();
  void LoginAsUser();
  void UserRegistryACC();
  void UserProfileToTXT();
  void UserProfileDataToTXT();
  void UserMenu();
  void InputUserBiodata();
  void UserHeadNTail();
  int CountUserData();
  void PrintUserData();
  void NewUserData();
  void UserBiodataToTXT();
  void UserBiodataDataToTXT();
  void DeleteUserData();
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
  void PrakScheduleDataToTXT();
  void PrakMateri(int);
  void DeclareMateri();
  void DlFromSM(string);
  void SearchMateri();
  void DownloadMateri(int);
  void PrintMateri(int);
  void PrakInvoice();
  void PrintUserProfile();
  void InvoiceToStructTXT();

  struct {
    string PrakNameList[11] =
                              {
                                "Struktur Data",
                                "Basis Data",
                                "Statistika Informatika",
                                "Sistem Operasi",
                                "Pemrograman Berorientasi Objek",
                                "Dasar-Dasar Pemrograman",
                                "Logika Informatika",
                                "Dasar Sistem Komputer",
                                "Algortima Pemrograman",
                                "Pemrograman Website",
                                "Matematia Diskrit"
                              };

    int PrakPriceList[11] =
                            {
                              35000,
                              32000,
                              34000,
                              32000,
                              10000,
                              35000,
                              32000,
                              34000,
                              32000,
                              35000,
                              32000
                            };
  } PrakList;

  struct {
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

    string DDPDayAndTime[13] =
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

    string LogikaDayAndTime[10] =
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

    string DSKDayAndTime[10] =
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

    string AlproDayAndTime[13] =
                                  {
                                    "Senin, 07.30 - 09.00",
                                    "Senin, 09.00 - 10.30",
                                    "Selasa, 15.00 - 16.30",
                                    "Selasa, 16.30 - 18.00",
                                    "Rabu, 10.30 - 12.00",
                                    "Rabu, 12.00 - 13.30",
                                    "Kamis, 18.00 - 19.30",
                                    "Kamis, 10.30 - 12.00",
                                    "Jumat, 07.30 - 09.00",
                                    "Jumat, 09.00 - 10.30",
                                    "Sabtu, 10.30 - 12.00",
                                    "Sabtu, 12.00 - 13.30",
                                    "Sabtu, 13.30 - 15.00"
                                  };

    string PWEBDayAndTime[10] =
                                {
                                  "Senin, 07.30 - 09.00",
                                  "Senin, 09.00 - 10.30",
                                  "Senin, 10.30 - 12.00",
                                  "Rabu, 07.30 - 09.00",
                                  "Rabu, 09.00 - 10.30",
                                  "Rabu, 10.30 - 12.00",
                                  "Kamis, 07.30 - 09.00",
                                  "Kamis, 09.00 - 10.30",
                                  "Kamis, 10.30 - 12.00",
                                  "Jumat, 07.30 - 09.00"
                                };

    string MatdisDayAndTime[10] =
                                  {
                                    "Selasa, 07.30 - 09.00",
                                    "Selasa, 09.00 - 10.30",
                                    "Selasa, 10.30 - 12.00",
                                    "Kamis, 07.30 - 09.00",
                                    "Kamis, 09.00 - 10.30",
                                    "Kamis, 10.30 - 12.00",
                                    "Jumat, 07.30 - 09.00",
                                    "Jumat, 09.00 - 10.30",
                                    "Sabtu, 07.30 - 09.00",
                                    "Sabtu, 10.30 - 12.00"
                                  };
  } DayAndTimeSlot;

  struct
  {
    string UserEmail;
    string UserUsername;
    string UserPassword;
    string UserName;
    string UserAddress;
    string UserPhone;
  } ProfileUser;

  struct
  {
    string *PrakListC;
    int *PrakPriceC;
  } PrakBuy;

  struct
  {
    string PrakListOnSchedule[5];
    string jadwal[5];
  } PrakSchedule;

private:
  int UserMenuC;
  char UserRegistryToSignUp;
  int MainMenuUserC;
  int PrakRegistryC;
  int count;
  int SizeOfArrayPrakList;
  int SizeOfArrayPrakCNameNumber;
  int PrakCNameAmount;
  int PrakCNameNumber[10];
  int PrakCSlotC2;
  int SizeOfArraySlotSData;
  int SizeOfArraySlotBasDat;
  int SizeOfArraySlotStatistika;
  int SizeOfArraySlotSO;
  int SizeOfArraySlotPBO;
  int SizeOfArraySlotDDP;
  int SizeOfArraySlotLogika;
  int SizeOfArraySlotDSK;
  int SizeOfArraySlotAlpro;
  int SizeOfArraySlotPweb;
  int SizeOfArraySlotMatdis;
  int Total = 0;
  int AmountPay;
  int Chance;
  bool PayingRegistration = true;
  int PayingRegistrationC;
  int PrintStructOrN;
  int PrakCSlotC;
  int DownloadMateriC;
  string InputSearchMateri;
  string SearchTemp;
  int SizeOfPrakSchedule;
  int i;
  int j;
  int k;
  int l;
  char d1;
  char d2;
  char add;
  int y_d1;
  int n_d1;
  int y_d2;
  int n_d2;
  string temp;
  string SplitterColon = "\t:\t";
  int IndexOfPrakCSlot;
  int pmat;
  int smat;
  ofstream put;
};

static int IDeclaringDynamicalArray = 0;

class UserACCNode
{
  public:
    string UserUsernameNode;
    string UserPasswordNode;
    UserACCNode *next;
};

UserACCNode *UserACCFirstNode = new UserACCNode;
UserACCNode *UserACCHead = new UserACCNode;
UserACCNode *UserACCTail = new UserACCNode;

class KTPUserNode
{
  public:
    string nik;
    string nama;
    string TempatLahir;
    string jenisKelamin;
    string GolDar;
    string address;
    string agama;
    string statusPerkawinan;
    string pekerjaan;
    string statusKewarganegaraan;
    KTPUserNode *next;
    KTPUserNode *prev;
};

KTPUserNode *AHead;
KTPUserNode *ATail;
KTPUserNode *curr1;
KTPUserNode *delA;
KTPUserNode *tempA;

struct dateUserNode
{
  string hari;
  string bulan;
  string tahun;
  dateUserNode *next;
  dateUserNode *prev;
};

dateUserNode *CHead;
dateUserNode *CTail;
dateUserNode *curr3;
dateUserNode *delC;
dateUserNode *tempC;

struct addressUserNode
{
  string RT;
  string RW;
  string Kel;
  string Kec;
  addressUserNode *next;
  addressUserNode *prev;
};

addressUserNode *BHead;
addressUserNode *BTail;
addressUserNode *curr2;
addressUserNode *delB;
addressUserNode *tempB;

class UserMateriNode
{
public:
  string MateriName;
  UserMateriNode *next;
  UserMateriNode *prev;
};

UserMateriNode *ModulSData = new UserMateriNode;
UserMateriNode *ModulBasDat = new UserMateriNode;
UserMateriNode *ModulStatistika = new UserMateriNode;
UserMateriNode *ModulSO = new UserMateriNode;
UserMateriNode *ModulPBO = new UserMateriNode;
UserMateriNode *ModulDDP = new UserMateriNode;
UserMateriNode *ModulLogika = new UserMateriNode;
UserMateriNode *ModulDSK = new UserMateriNode;
UserMateriNode *ModulAlpro = new UserMateriNode;
UserMateriNode *ModulPweb = new UserMateriNode;
UserMateriNode *ModulMatdis = new UserMateriNode;
UserMateriNode *Modulhead = new UserMateriNode;
UserMateriNode *Modultail = new UserMateriNode;
UserMateriNode *ModulCheck = new UserMateriNode;
UserMateriNode *TempDownloadModulMateri = new UserMateriNode;
UserMateriNode *TempDeleteModulMateriA = new UserMateriNode;
UserMateriNode *TempDeleteModulMateriB = new UserMateriNode;

class userData 
{ 
  public:
    int key; 
    userData *left; 
    userData *right; 
    int height;

    string username;
    string password;
    string email;
    string nama;
    string alamat;
    string notelp;
};

userData *rootUserData = NULL;
static int yyy = 1;

int maxUserData(int a, int b);
int heightUser(userData *N);
userData* newUserData(  int key,
                        string username,
                        string password,
                        string email,
                        string nama,
                        string alamat,
                        string notelp  );
userData *rightRotate(userData *y);
userData *leftRotate(userData *x);
int getBalance(userData *N);
userData* insert( userData* node,
                  int key,
                  string username,
                  string password,
                  string email,
                  string nama,
                  string alamat,
                  string notelp );
userData * minValueUserData(userData* node);
userData* deleteUserData(userData* root, int key);
void preOrderUserData(userData *root);

int maxUserData(int a, int b);

int heightUser(userData *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int maxUserData(int a, int b)
{
	return (a > b) ? a : b;
}

userData* newUserData(  int key,
                        string username,
                        string password,
                        string email,
                        string nama,
                        string alamat,
                        string notelp  )
{
	userData* node = new userData();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;

  node->username = username;
  node->password = password;
  node->email = email;
  node->nama = nama;
  node->alamat = alamat;
  node->notelp = notelp;

	return(node);
}

userData *rightRotate(userData *y)
{
	userData *x = y->left;
	userData *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = maxUserData(heightUser(y->left),
					heightUser(y->right)) + 1;
	x->height = maxUserData(heightUser(x->left),
					heightUser(x->right)) + 1;

	return x;
}

userData *leftRotate(userData *x)
{
	userData *y = x->right;
	userData *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = maxUserData(heightUser(x->left),
					heightUser(x->right)) + 1;
	y->height = maxUserData(heightUser(y->left),
					heightUser(y->right)) + 1;

	return y;
}

int getBalance(userData *N)
{
	if (N == NULL)
		return 0;
	return heightUser(N->left) -
		heightUser(N->right);
}

userData* insert( userData* node,
                  int key,
                  string username,
                  string password,
                  string email,
                  string nama,
                  string alamat,
                  string notelp )
{
	if (node == NULL)
		return(newUserData( key,
                        username,
                        password,
                        email,
                        nama,
                        alamat,
                        notelp ));

	if (key < node->key)
		node->left = insert(  node->left, key,
                          username,
                          password,
                          email,
                          nama,
                          alamat,
                          notelp  );
	else if (key > node->key)
		node->right = insert( node->right, key,
                          username,
                          password,
                          email,
                          nama,
                          alamat,
                          notelp  );
	else
		return node;

	node->height = 1 + maxUserData(heightUser(node->left),
						heightUser(node->right));

	int balance = getBalance(node);

	if (balance > 1 && key < node->left->key)
		return rightRotate(node);

	if (balance < -1 && key > node->right->key)
		return leftRotate(node);

	if (balance > 1 && key > node->left->key)
	{
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}

	if (balance < -1 && key < node->right->key)
	{
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}

	return node;
}

userData * minValueUserData(userData* node)
{
	userData* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}

userData* deleteUserData(userData* root, int key)
{
	
	if (root == NULL)
		return root;

	if ( key < root->key )
		root->left = deleteUserData(root->left, key);

	else if( key > root->key )
		root->right = deleteUserData(root->right, key);

	else
	{
		if( (root->left == NULL) ||
			(root->right == NULL) )
		{
			userData *temp = root->left ?
						root->left :
						root->right;

			if (temp == NULL)
			{
				temp = root;
				root = NULL;
			}

			else
			  *root = *temp;

			free(temp);
		}

		else
		{
			userData* temp = minValueUserData(root->right);

			root->key = temp->key;

			root->right = deleteUserData(root->right,
									temp->key);
		}
	}

	if (root == NULL)
	return root;

	root->height = 1 + maxUserData(heightUser(root->left),
						heightUser(root->right));

	int balance = getBalance(root);

	if (balance > 1 &&
		getBalance(root->left) >= 0)
		return rightRotate(root);

	if (balance > 1 &&
		getBalance(root->left) < 0)
	{
		root->left = leftRotate(root->left);
		return rightRotate(root);
	}

	if (balance < -1 &&
		getBalance(root->right) <= 0)
		return leftRotate(root);

	if (balance < -1 &&
		getBalance(root->right) > 0)
	{
		root->right = rightRotate(root->right);
		return leftRotate(root);
	}

	return root;
}

void preOrderUserData(userData *root)
{
	if(root != NULL)
	{
		cout << " Key             : " << root->key << endl;
    cout << " E-Mail          : " << root->email << endl;
    cout << " Nama Pengguna   : " << root->username << endl;
    cout << " Nama            : " << root->nama << endl;
    cout << " Alamat          : " << root->alamat << endl;
    cout << " No. Telepon     : " << root->notelp << endl;
    cout << "=======================================" << endl;
		preOrderUserData(root->left);
		preOrderUserData(root->right);
	}
}

ofstream putUserData;
bool putCheck = false;
void preOrderUserDataToTXT(userData *root) {
  if(root != NULL)
	{
    if(!putCheck) {
      putUserData.open("UserProfile.txt");
      putCheck = true;
    }
    putUserData << "#=====================================#" << endl;
    putUserData << "#        ---------------------        #" << endl;
    putUserData << "#        $$ PROFIL PENGGUNA $$        #" << endl;
    putUserData << "#        ---------------------        #" << endl;
    putUserData << "#=====================================#" << endl;
		putUserData << " Key             : " << root->key << endl;
    putUserData << " E-Mail          : " << root->email << endl;
    putUserData << " Nama Pengguna   : " << root->username << endl;
    putUserData << " Nama            : " << root->nama << endl;
    putUserData << " Alamat          : " << root->alamat << endl;
    putUserData << " No. Telepon     : " << root->notelp << endl;
    putUserData << "=======================================" << endl;
		preOrderUserData(root->left);
		preOrderUserData(root->right);
	}
  else {
    putUserData.close();
  }
}

User::User()
{
  UserHeadNTail();
}

void User::UserMenu()
{
  do
  {
    cout << "#===============================#" << endl;
    cout << "#    |---------------------|    #" << endl;
    cout << "#    |    MENU PENGGUNA    |    #" << endl;
    cout << "#    |---------------------|    #" << endl;
    cout << "#           *******             #" << endl;
    cout << "#           APLIKASI            #" << endl;
    cout << "#    ADMINISTRASI PRAKTIKUM     #" << endl;
    cout << "#    ***********************    #" << endl;
    cout << "#===============================#" << endl;
    cout << "#      1. Masuk                 #" << endl;
    cout << "#      2. Daftar                #" << endl;
    cout << "#      0. Keluar                #" << endl;
    cout << "#===============================#" << endl;
    cout << "  Pilihan ->";
    cin >> UserMenuC;

    switch (UserMenuC)
    {
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
  } while (UserMenuC != 0);
}

void User::UserHeadNTail()
{
  AHead = NULL;
  ATail = NULL;

  BHead = NULL;
  BTail = NULL;

  CHead = NULL;
  CTail = NULL;
}

int User::CountUserData()
{
  if (AHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    NewUserData();
  }

  else
  {
    count = 0;
    curr1 = AHead;
    while (curr1 != NULL)
    {
      count++;
      curr1 = curr1->next;
    }

    return count;
  }
}

void User::PrintUserData()
{
  if (AHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    NewUserData();
  }

  else
  {
    curr1 = AHead;
    curr2 = BHead;
    curr3 = CHead;

    l = 1;

    while (curr1 != NULL)
    {
      cout << "\n================================================\n";
      cout << "\t\t" << l << "\t\t" << endl;
      cout << "==================================================" << endl;
      cout << "\t\tPROVINSI DKI JAKARTA" << endl;
      cout << "\t\tKOTA JAKARTA BARAT" << endl;
      cout << "==================================================" << endl;
      cout << "NIK\t\t\t: " << curr1->nik << endl;
      cout << "Nama\t\t\t: " << curr1->nama << endl;
      cout << "Tempat/Tgl Lahir\t: " << curr1->TempatLahir << ", "
           << curr3->hari << "-" << curr3->bulan << "-" << curr3->tahun << endl;
      cout << "Jenis Kelamin\t\t: " << curr1->jenisKelamin << "\t"
           << "\t\tGol.Darah: " << curr1->GolDar << endl;
      cout << "Alamat\t\t\t: " << curr1->address << endl;
      cout << "  \tRT/RW\t\t: " << curr2->RT << "/" << curr2->RW << endl;
      cout << "  \tKel/Desa\t: ";
      cout << curr2->Kel << endl;
      cout << "  \tKec\t\t: ";
      cout << curr2->Kec << endl;
      cout << "Agama\t\t\t: " << curr1->agama << endl;
      cout << "Status Perkawinan\t: " << curr1->statusPerkawinan << endl;
      cout << "Pekerjaan\t\t: " << curr1->pekerjaan << endl;
      cout << "Kewarganegaraan\t\t: " << curr1->statusKewarganegaraan << endl;
      cout << "Berlaku Hingga\t\t: SEUMUR HIDUP" << endl;
      cout << "=================================================\n";
      cout << "\n";

      curr1 = curr1->next;
      curr2 = curr2->next;
      curr3 = curr3->next;

      l++;
    }
  }
}

void User::NewUserData()
{
  KTPUserNode *NewA = new KTPUserNode;
  addressUserNode *NewB = new addressUserNode;
  dateUserNode *NewC = new dateUserNode;

  cout << "\n=================================================\n";
  cout << "NIK\t: ";
  cin >> NewA->nik;
  cin.ignore();
  cout << "Nama\t: ";
  getline(cin, NewA->nama);
  cout << "Tempat Lahir\t: ";
  getline(cin, NewA->TempatLahir);
  // cin >> NewA->TempatLahir;
  cout << "Tanggal Lahir\t: ";
  cin >> NewC->hari;
  cout << "Bulan Lahir\t: ";
  cin >> NewC->bulan;
  cout << "Tahun Lahir\t: ";
  cin >> NewC->tahun;
  cout << "Jenis Kelamin\t: ";
  cin >> NewA->jenisKelamin;
  cout << "Golongan Darah\t: ";
  cin >> NewA->GolDar;
  cin.ignore();
  cout << "Alamat\t: ";
  getline(cin, NewA->address);
  // cin >> NewA->address;
  cout << "RT\t: ";
  cin >> NewB->RT;
  cout << "RW\t: ";
  cin >> NewB->RW;
  cin.ignore();
  cout << "Kelurahan\t: ";
  getline(cin, NewB->Kel);
  // cin >> NewB->Kel;
  cout << "Kecamatan\t: ";
  getline(cin, NewB->Kec);
  // cin >> NewB->Kec;
  cout << "Agama\t: ";
  cin >> NewA->agama;
  cout << "Status Perkawinan\t: ";
  cin >> NewA->statusPerkawinan;
  cout << "Pekerjaan\t: ";
  cin >> NewA->pekerjaan;
  cout << "Status Kewarganegaraan\t: ";
  cin >> NewA->statusKewarganegaraan;
  cout << "\n=================================================\n";

  if (AHead == NULL)
  {
    NewA->prev = NULL;
    NewB->prev = NULL;
    NewC->prev = NULL;

    AHead = NewA;
    BHead = NewB;
    CHead = NewC;

    NewA->next = NULL;
    NewB->next = NULL;
    NewC->next = NULL;

    ATail = NewA;
    BTail = NewB;
    CTail = NewC;

    i++;
  }
  
  else
  {
    NewA->prev = ATail;
    NewB->prev = BTail;
    NewC->prev = CTail;

    ATail->next = NewA;
    BTail->next = NewB;
    CTail->next = NewC;

    NewA->next = NULL;
    NewB->next = NULL;
    NewC->next = NULL;

    ATail = NewA;
    BTail = NewB;
    CTail = NewC;

    i++;
  }

  UserBiodataToTXT();
  UserBiodataDataToTXT();
}

void User::UserBiodataToTXT()
{
  if (AHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    NewUserData();
  }
  
  else
  {
    curr1 = AHead;
    curr2 = BHead;
    curr3 = CHead;

    l = 1;
    put.open("../UserBiodata.txt");
    while (curr1 != NULL)
    {
      put << "==================================================" << endl;
      put << "\t\tPROVINSI DKI JAKARTA" << endl;
      put << "\t\tKOTA JAKARTA BARAT" << endl;
      put << "==================================================" << endl;
      put << "NIK\t\t\t: " << curr1->nik << endl;
      put << "Nama\t\t\t: " << curr1->nama << endl;
      put << "Tempat/Tgl Lahir\t: " << curr1->TempatLahir << ", " << curr3->hari
          << "-" << curr3->bulan << "-" << curr3->tahun << endl;
      put << "Jenis Kelamin\t\t: " << curr1->jenisKelamin << "\t"
          << "\t\tGol.Darah: " << curr1->GolDar << endl;
      put << "Alamat\t\t\t: " << curr1->address << endl;
      put << "  \tRT/RW\t\t: " << curr2->RT << "/" << curr2->RW << endl;
      put << "  \tKel/Desa\t: ";
      put << curr2->Kel << endl;
      put << "  \tKec\t\t: ";
      put << curr2->Kec << endl;
      put << "Agama\t\t\t: " << curr1->agama << endl;
      put << "Status Perkawinan\t: " << curr1->statusPerkawinan << endl;
      put << "Pekerjaan\t\t: " << curr1->pekerjaan << endl;
      put << "Kewarganegaraan\t\t: " << curr1->statusKewarganegaraan << endl;
      put << "Berlaku Hingga\t\t: SEUMUR HIDUP" << endl;
      put << "=================================================\n";
      put << "\n";

      curr1 = curr1->next;
      curr2 = curr2->next;
      curr3 = curr3->next;

      l++;
    }
    put.close();
  }
}

void User::UserBiodataDataToTXT()
{
  if (AHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    NewUserData();
  }
  
  else
  {
    curr1 = AHead;
    curr2 = BHead;
    curr3 = CHead;

    l = 1;
    put.open("../UserBiodataData.txt");
    while (curr1 != NULL)
    {
      put << curr1->nik << endl;
      put << curr1->nama << endl;
      put << curr1->TempatLahir << endl;
      put << curr3->hari << endl;
      put << curr3->bulan << endl;
      put << curr3->tahun << endl;
      put << curr1->jenisKelamin << endl;
      put << curr1->GolDar << endl;
      put << curr1->address << endl;
      put << curr2->RT << endl;
      put << curr2->RW << endl;
      put << curr2->Kel << endl;
      put << curr2->Kec << endl;
      put << curr1->agama << endl;
      put << curr1->statusPerkawinan << endl;
      put << curr1->pekerjaan << endl;
      put << curr1->statusKewarganegaraan << endl;

      curr1 = curr1->next;
      curr2 = curr2->next;
      curr3 = curr3->next;

      l++;
    }
    put.close();
  }
}

void User::DeleteUserData()
{
  CountUserData();

  if (AHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    NewUserData();
  }

  else
  {
    cout << CountUserData();
    cout << "Masukkan nomor data yang ingin dihapus!" << endl;
    cout << "   ->  ";
    cin >> j;

    if (j < 1 || j > CountUserData())
    {
      cout << "|===========================================|\n";
      cout << "|                                           |" << endl;
      cout << "|            Di luar jangkauan!             |" << endl;
      cout << "|                                           |" << endl;
      cout << "|===========================================|";
      // NewUserData();
    }
    
    else
    {
      if (j == 1 && AHead == ATail)
      {
        delA = AHead;
        delB = BHead;
        delC = CHead;

        AHead = NULL;
        ATail = NULL;

        BHead = NULL;
        BTail = NULL;

        CHead = NULL;
        CTail = NULL;

        delete delA;
        delete delB;
        delete delC;
      }
      
      else if (j == 1) 
      {
        delA = AHead;
        delB = BHead;
        delC = CHead;

        AHead = AHead->next;
        BHead = BHead->next;
        CHead = CHead->next;

        AHead->prev = NULL;
        BHead->prev = NULL;
        CHead->prev = NULL;

        delete delA;
        delete delB;
        delete delC;
      }
      
      else if (j == CountUserData())
      {
        k = 1;

        curr1 = AHead;
        curr2 = BHead;
        curr3 = CHead;

        while (k < j - 1) {
          curr1 = curr1->next;
          curr2 = curr2->next;
          curr3 = curr3->next;

          k++;
        }

        delA = curr1->next;
        delB = curr2->next;
        delC = curr3->next;

        curr1->next = NULL;
        curr2->next = NULL;
        curr3->next = NULL;

        ATail = curr1;
        BTail = curr2;
        CTail = curr3;

        delete delA;
        delete delB;
        delete delC;
      }
      
      else 
      {
        k = 1;

        curr1 = AHead;
        curr2 = BHead;
        curr3 = CHead;

        while (k < j - 1)
        {
          curr1 = curr1->next;
          curr2 = curr2->next;
          curr3 = curr3->next;

          k++;
        }

        delA = curr1->next;
        delB = curr2->next;
        delC = curr3->next;

        tempA = delA->next;
        tempB = delB->next;
        tempC = delC->next;

        curr1->next = tempA;
        curr2->next = tempB;
        curr3->next = tempC;

        tempA->prev = curr1;
        tempB->prev = curr2;
        tempC->prev = curr3;

        delete delA;
        delete delB;
        delete delC;
      }
    }
  }
}

void User::LoginAsUser()
{
  cout << "#==========================================#" << endl;
  cout << "#                                          #" << endl;
  cout << "#   ||    (===)  ||===   =||=  ||=   ||    #" << endl;
  cout << "#   ||    ( O )  ||  _    ||   || || ||    #" << endl;
  cout << "#   ||__  (===)  ||__||  =||=  ||  ||||    #" << endl;
  cout << "#   +++++++++++++++++++++++++++++++++++    #" << endl;
  cout << "#                                          #" << endl;
  cout << "#                L O G I N                 #" << endl;
  cout << "#                                          #" << endl;
  cout << "#               | ******* |                #" << endl;
  cout << "#          _ _ |  APLIKASI | _ _           #" << endl;
  cout << "#        | ADMINISTRASI PRAKTIKUM |        #" << endl;
  cout << "#       |     ~~~~~~~~~~~~~~~      |       #" << endl;
  cout << "#      ------------------------------      #" << endl;
  cout << "#==========================================#" << endl;
  cout << "Nama Pengguna\t: ";
  cin >> ProfileUser.UserUsername;
  cout << "Sandi\t: ";
  cin >> ProfileUser.UserPassword;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  UserACCNode *UserACCCheck = UserACCHead;
  while (UserACCCheck != NULL)
  {
    if (ProfileUser.UserUsername == UserACCCheck->UserUsernameNode &&
        ProfileUser.UserPassword == UserACCCheck->UserPasswordNode)
    {
      system("clear");
      cout << "\n";
      cout << "#==========================================#" << endl;
      cout << "#                                          #" << endl;
      cout << "#   ||    (===)  ||===   =||=  ||=   ||    #" << endl;
      cout << "#   ||    ( O )  ||  _    ||   || || ||    #" << endl;
      cout << "#   ||__  (===)  ||__||  =||=  ||  ||||    #" << endl; 
      cout << "#                                          #" << endl;
      cout << "#     |==  |  |  |==  |== |=|  |== |==     #" << endl;
      cout << "#     _=|  |__|  |__  |__ |__  _=| _=|     #" << endl;
      cout << "#   +++++++++++++++++++++++++++++++++++    #" << endl;
      cout << "#                                          #" << endl;
      cout << "#             B E R H A S I L              #" << endl;
      cout << "#                L O G I N                 #" << endl;
      cout << "#                                          #" << endl;
      cout << "===========================================#" << endl;
      cout << "\n";

      MainMenuUser();
    }


    else
    {
      system("clear");
      cout << "\n";
      cout << "|===========================================|\n";
      cout << "|                     |                     |" << endl;
      cout << "|              Masukan Salah!               |" << endl;
      cout << "|------Nama Pengguna Tidak Ditemukan!-------|" << endl;
      cout << "|        Coba lagi Input yang benar         |" << endl;
      cout << "|                     |                     |" << endl;
      cout << "|===========================================|" << endl;
      cout << "\n";
      
      UserMenu();
    }
    UserACCCheck = UserACCCheck->next;
  }
}

void User::InputUserBiodata()
{
  cout << "#=============================#" << endl;
  cout << "#        ------------         #" << endl;
  cout << "#        $$ BIODATA $$        #" << endl;
  cout << "#        ------------         #" << endl;
  cout << "#=============================#" << endl;

  NewUserData();
  PrintUserData();
}

void User::UserRegistryACC()
{
  system("clear");
  cout << "|===================================|" << endl;
  cout << "|            -----------            |" << endl;
  cout << "|          | PENDAFTARAN |          |" << endl;
  cout << "|         | AKUN PENGGUNA |         |" << endl;
  cout << "|        ~~~~~~~~~~~~~~~~~~~        |" << endl;
  cout << "|===================================|" << endl;
  cout << " E-Mail\t: ";
  cin >> ProfileUser.UserEmail;
  cout << " Nama Pengguna\t: ";
  cin >> UserACCFirstNode->UserUsernameNode;
  cout << " Sandi\t: ";
  cin >> UserACCFirstNode->UserPasswordNode;
  cin.ignore();
  cout << " Nama\t: ";
  getline(cin, ProfileUser.UserName);
  cout << " Alamat\t: ";
  getline(cin, ProfileUser.UserAddress);
  cout << " No. Telepon\t: ";
  cin >> ProfileUser.UserPhone;
  cout << "====================================" << endl;
  UserACCFirstNode->next = NULL;
  UserACCHead = UserACCFirstNode;
  UserACCTail = UserACCFirstNode;

UserRegistryToSignUpConfirm:
  cout << "\n";
  cout << "     |==========================|" << endl;
  cout << "     |           ---            |" << endl;
  cout << "-----> Ketik Y untuk mendaftar! <-----" << endl;
  cout << "     |        .........         |" << endl;
  cout << "     |==========================|" << endl;
  cout << "\n";
  cout << " ->  ";
  cin >> UserRegistryToSignUp;

  if (  UserRegistryToSignUp == 'Y' ||
        UserRegistryToSignUp == 'y' )
  {
    rootUserData = insert(  rootUserData,
                            yyy,
                            UserACCFirstNode->UserUsernameNode,
                            UserACCFirstNode->UserPasswordNode,
                            ProfileUser.UserEmail,
                            ProfileUser.UserName,
                            ProfileUser.UserAddress,
                            ProfileUser.UserPhone  );
    yyy++;
    cout << "\n";
    cout << "|===========================================|\n";
    cout << "|                     |                     |" << endl;
    cout << "|            Berhasil Mendaftar!            |" << endl;
    cout << "|---------Kembali ke halaman awal!----------|" << endl;
    cout << "|                     |                     |" << endl;
    cout << "|===========================================|" << endl;
    cout << "\n";

    UserProfileToTXT();
    UserProfileDataToTXT();
    preOrderUserDataToTXT(rootUserData);
    UserMenu();
  }
  
  else
  {
    cout << "\n";
    cout << "     |============================|" << endl;
    cout << "----->       Masukan Salah!!      <-----" << endl;
    cout << "----->   Harap Ulang Kembali!!    <-----" << endl;
    cout << "     |============================|" << endl;
    cout << "\n";
    goto UserRegistryToSignUpConfirm;
  }
}

void User::UserProfileToTXT()
{
  put.open("../UserProfile.txt");
  put << "#=====================================#" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#        $$ PROFIL PENGGUNA $$        #" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#=====================================#" << endl;
  put << " E-Mail          : " << ProfileUser.UserEmail << endl;
  put << " Nama Pengguna   : " << UserACCFirstNode->UserUsernameNode << endl;
  put << " Nama            : " << ProfileUser.UserName << endl;
  put << " Alamat          : " << ProfileUser.UserAddress << endl;
  put << " No. Telepon     : " << ProfileUser.UserPhone << endl;
  put << "=======================================" << endl;
  put.close();
}

void User::UserProfileDataToTXT()
{
  put.open("../UserProfileData.txt");
  put << ProfileUser.UserEmail << endl;
  put << UserACCFirstNode->UserUsernameNode << endl;
  put << ProfileUser.UserName << endl;
  put << ProfileUser.UserAddress << endl;
  put << ProfileUser.UserPhone;
  put.close();
}

void User::ShowUserName()
{
  cout << "===============================" << endl;
  cout << "|  " << AHead->nama << "  |" << endl;
  cout << "===============================" << endl;
}

void User::MainMenuUser()
{
  if(AHead == NULL)
  {
    InputUserBiodata();
    MainMenuUser();
  }

  else
  {
    cout << "\n";
    ShowUserName();
    do
    {
    main_menu_user:
      cout << "\n";
      cout << "#===============================#" << endl;
      cout << "#      +-----------------+      #" << endl;
      cout << "#      +  MENU PENGGUNA  +      #" << endl;
      cout << "#      +-----------------+      #" << endl;
      cout << "#===============================#" << endl;
      cout << "#  1. Pendaftaran Praktikum     #" << endl;
      cout << "#  2. Modul Materi              #" << endl;
      cout << "#  3. Jadwal                    #" << endl;
      cout << "#  4. Lihat profil pengguna     #" << endl;
      cout << "#  0. Keluar                    #" << endl;
      cout << "#===============================#" << endl;
      cout << "  ->  ";
      cin >> MainMenuUserC;
      switch (MainMenuUserC)
      {
      case 1:
        PrakRegistration();
        break;
      case 2:
        PrakMateri(0);
        break;
      case 3:
        PrakJadwal();
        break;
      case 4:
        PrintUserProfile();
        break;
      case 0:
        exit(0);
        break;
      default:
        cout << "\n";
        cout << "     |============================|" << endl;
        cout << "     |                            |" << endl;
        cout << "----->       Masukan Salah!!      <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
        cout << "     |                            |" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        goto main_menu_user;
        break;
      }
    } while (MainMenuUserC != 0);
      cout << "\n";
  }
}

void User::PrakRegistration()
{
PREG:
  IndexOfPrakCSlot = 1;

  cout << "\n";
  cout << "#===================================#" << endl;
  cout << "#    +-------------------------+    #" << endl;
  cout << "#    +  PENDAFTARAN PRAKTIKUM  +    #" << endl;
  cout << "#    +-------------------------+    #" << endl;
  cout << "#===================================#" << endl;
  cout << "#  1. Pemilihan Mata Praktikum      #" << endl;
  cout << "#  2. Pembayaran Pendaftaran        #" << endl;
  cout << "#  3. Pemilihan Slot                #" << endl;
  cout << "#  99. Kembali                      #" << endl;
  cout << "#  0. Keluar                        #" << endl;
  cout << "=====================================" << endl;
  cout << " ->  ";
  cin >> PrakRegistryC;

  switch (PrakRegistryC)
  {
    case 0:
      exit(0);
      break;
    case 1:
      PrakCName();
      break;
    case 2:
      PrakPay();
      break;
    case 3:
      PrakCSlot();
      break;
    case 99:
      MainMenuUser();
      break;
    default:
      cout << "\n";
      cout << "     |============================|" << endl;
      cout << "     |                            |" << endl;
      cout << "----->       Masukan Salah!!      <-----" << endl;
      cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
      cout << "     |                            |" << endl;
      cout << "     |============================|" << endl;
      cout << "\n";
      goto PREG;
      break;
  }
}

void User::PrakCList()
{
  Total = 0;
  cout << "Mata Praktikum\t: || ";
  for (i = 0; i < PrakCNameAmount; i++)
  {
    cout << PrakBuy.PrakListC[i] << " || ";
  }
  cout << "\n";

  cout << "Harga\t\t\t: || ";
  for (i = 0; i < PrakCNameAmount; i++)
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
DestinationPrakCName:
  SizeOfArrayPrakList =
      sizeof(PrakList.PrakNameList) /
      sizeof(PrakList.PrakNameList[0]);
Cname:
  cout << "\n";
  cout << "---|---------------------|---" << endl;
  cout << "   |         ---         |   " << endl;
  cout << "   | PEMILIHAN PRAKTIKUM |   " << endl;
  cout << "   |        ~~~~~        |   " << endl;
  cout << "---|---------------------|---" << endl;
  for (i = 0; i < SizeOfArrayPrakList; i++)
  {
    cout << i + 1 << ". " << PrakList.PrakNameList[i] << " ||  "
         << PrakList.PrakPriceList[i] << endl;
  }
  cout << "\n";
  cout << "++----------------------------------------------++" << endl;
  cout << "+ Masukkan jumlah praktikum yang ingin diambil ->  ";
  cin >> PrakCNameAmount;
  //
  DeclareDynimicalArrayPrakBuy(PrakCNameAmount);
  IDeclaringDynamicalArray++;
  //
  for (i = 0; i < PrakCNameAmount; i++)
  {
    cout << "===============================" << endl;
    for (j = 0; j < SizeOfArrayPrakList; j++)
    {
      cout << j + 1 << ". " << PrakList.PrakNameList[j] << " ||  "
           << PrakList.PrakPriceList[i] << endl;
    }
    cout << "+------------------------------------------------+" << endl;
    cout << " Masukkan nomor praktikum ke-" << i + 1
         << " yang ingin diambil! |\n";
    cout << "-------------------------------------------------+" << endl;
    cout << " ->  ";
    cin >> PrakCNameNumber[i];

    PrakBuy.PrakListC[i] = PrakList.PrakNameList[PrakCNameNumber[i] - 1];
    PrakBuy.PrakPriceC[i] = PrakList.PrakPriceList[PrakCNameNumber[i] - 1];
    cout << "\n";
  }

bfore_done:
  cout << "-----------------" << endl;
  cout << "Selesai? (Y/N)\n";
  cout << " ->  ";
  cin >> d1;
  if (  d1 == 'Y' ||
        d1 == 'N' ||
        d1 == 'y' ||
        d1 == 'n'  )
  {
    if (  d1 == 'Y' ||
          d1 == 'y' )
    {
    y_done:
      cout << "----|=============================================|----" << endl;
      cout << "    |            +-------------------+            |" << endl;
      cout << "    |            +  MASUKKAN PILIHAN +            |" << endl;
      cout << "    |            +-------------------+            |" << endl;
      cout << "----|=============================================|----" << endl;
      cout << "    | 1. Lanjut ke pembayaran                     |" << endl;
      cout << "    | 2. Lihat Daftar Mata Praktikum Yang DiAmbil |" << endl;
      cout << "    | 9. Kembali ke menu utama                    |" << endl;
      cout << "----|=============================================|----" << endl;
      cout << "    |                                             |" << endl;
      cout << " ->  ";
      cin >> y_d1;

      switch (y_d1)
      {
      case 1:
        PayingRegistration = false;
        PrakPay();
        break;
      case 2:
        cout << "---|-----------------------------|---" << endl;
        cout << "   |            -----            |   " << endl;
        cout << "   | MATA PRAKTIKUM YANG DIPILIH |   " << endl;
        cout << "   |          ~~~~~~~~~          |   " << endl;
        cout << "---|-----------------------------|---" << endl;
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
        cout << "     |============================|" << endl;
        cout << "----->       Masukan Salah!!      <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        goto y_done;
        break;
      }
    }


    else if ( d1 == 'N' ||
              d1 == 'n' )
    {
    n_done:
      cout << "     |===============================|" << endl;
      cout << "     |                               | " << endl;
      cout << "=====| 1. Ulangi pemilihan praktikum |=====" << endl;
      cout << "=====| 2. Kembali ke menu utama      |=====" << endl;
      cout << "     |                               | " << endl;
      cout << "     |===============================|" << endl;
      cout << " ->  ";
      cin >> y_d1;
      
      switch (y_d1)
      {
      case 1:
        goto Cname;
        break;
      case 2:
        MainMenuUser();
        break;
      default:
        cout << "\n";
        cout << "     |============================|" << endl;
        cout << "----->       Masukan Salah!!      <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        goto n_done;
        break;
      }
    } 
    
    else
    {
      cout << "\n";
      cout << "     |============================|" << endl;
      cout << "----->       Masukan Salah!!       <-----" << endl;
      cout << "----->   Harap Ulangi Kembali!!    <-----" << endl;
      cout << "     |============================|" << endl;
      cout << "\n";
      goto bfore_done;
    }
  }
  
  else
  {
    cout << "     |============================|" << endl;
    cout << "----->       Masukan Salah!!      <-----" << endl;
    cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
    cout << "     |============================|" << endl;
    goto bfore_done;
  }
}

void User::PrakPay()
{
  if (PayingRegistration == false)
  {
    cout << "\n";
    cout << "#====================================#" << endl;
    cout << "#    +--------------------------+    #" << endl;
    cout << "#    +  PEMBAYARAN PENDAFTARAN  +    #" << endl;
    cout << "#    +--------------------------+    #" << endl;
    cout << "#====================================#" << endl;
    //
    PrakCList();
    //
    cout << "\n";
    cout << "     |==========================|" << endl;
    cout << "     |           ---            |" << endl;
    cout << "----->    Ketik Y untuk Bayar   <-----" << endl;
    cout << "----->         Sekarang         <-----" << endl;
    cout << "     |        .........         |" << endl;
    cout << "     |==========================|" << endl;
    cout << " -> ";
    cin >> d2;
    cout << "===============================" << endl;
    if (d2 == 'Y' || d2 == 'y') {
    y_done:
      cout << "\n";
      cout << "---|-----------------------------|---" << endl;
      cout << "   |            -----            |   " << endl;
      cout << "   |     Masukkan Jumlah Uang    |   " << endl;
      cout << "   |          $$$$$$$$$          |   " << endl;
      cout << "---|-----------------------------|---" << endl;
      cout << " ->  ";
      cin >> AmountPay;
      Chance = AmountPay - Total;
      PayingRegistration = true;
    PrintStructOrNList:
      cout << "\n";
      cout << "#==================================#" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#      +  MASUKKAN PILIHAN +       #" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#==================================#" << endl;
      cout << "#  1. Cetak Struk                  #" << endl;
      cout << "#  9. Menu Utama                   #" << endl;
      cout << "#  0. Keluar                       #" << endl;
      cout << "===================================#" << endl;
      cout << " ->  ";
      cin >> PrintStructOrN;
      switch (PrintStructOrN) {
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
        cout << "     |============================|" << endl;
        cout << "----->       Masukan Salah!!       <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!    <-----" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        goto PrintStructOrNList;
        break;
      }
    } else {
      cout << "\n";
      cout << "     |============================|" << endl;
      cout << "----->       Masukan Salah!!       <-----" << endl;
      cout << "----->   Harap Ulangi Kembali!!    <-----" << endl;
      cout << "     |============================|" << endl;
      cout << "\n";
    }
  }
  
  else
  {
    if (IDeclaringDynamicalArray == 0)
    {
      //
      DeclareDynimicalArrayPrakBuy(PrakCNameAmount);
      IDeclaringDynamicalArray++;
      //
      if (PrakBuy.PrakListC[0].empty()) {
      DestinationPayingRegistrationC1:
        cout << "\n";
        cout << "|========================================|" << endl;
        cout << "| Tidak Ada Praktikum Yang Perlu Dibayar!|" << endl;
        cout << "| -------------------------------------- |" << endl;
        cout << "| 9. Kembali                             |" << endl;
        cout << "| 0. Keluar                              |" << endl;
        cout << "=========================================|" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";
        switch (PayingRegistrationC) {
        case 9:
          PrakRegistration();
          break;
        case 0:
          exit(0);
          break;
        default:
          cout << "\n";
          cout << "     |============================|" << endl;
          cout << "----->       Masukan Salah!!       <-----" << endl;
          cout << "----->   Harap Ulangi Kembali!!    <-----" << endl;
          cout << "     |============================|" << endl;
          cout << "\n";
          goto DestinationPayingRegistrationC1;
        }
      }
      
      else
      {
      DestinationPayingRegistrationC2:
        cout << "\n";
        cout << "|========================================|" << endl;
        cout << "| Tidak Ada Praktikum Yang Perlu Dibayar!|" << endl;
        cout << "| -------------------------------------- |" << endl;
        cout << "| 1. Lihat Invoice                       |" << endl;
        cout << "| 9. Kembali                             |" << endl;
        cout << "| 0. Keluar                              |" << endl;
        cout << "=========================================|" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";

        switch (PayingRegistrationC)
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
          cout << "     |============================|" << endl;
          cout << "----->       Masukan Salah!!      <-----" << endl;
          cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
          cout << "     |============================|" << endl;
          cout << "\n";
          goto DestinationPayingRegistrationC2;
        }
      }
    }
    
    else
    {
      if (PrakBuy.PrakListC[0].empty())
      {
      DestinationPayingRegistrationC3:
        cout << "\n";
        cout << "|========================================|" << endl;
        cout << "| Tidak Ada Praktikum Yang Perlu Dibayar!|" << endl;
        cout << "| -------------------------------------- |" << endl;
        cout << "| 9. Kembali                             |" << endl;
        cout << "| 0. Keluar                              |" << endl;
        cout << "=========================================|" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";
        switch (PayingRegistrationC)
        {
        case 9:
          PrakRegistration();
          break;
        case 0:
          exit(0);
          break;
        default:
          cout << "\n";
          cout << "     |============================|" << endl;
          cout << "----->       Masukan Salah!!      <-----" << endl;
          cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
          cout << "     |============================|" << endl;
          cout << "\n";
          goto DestinationPayingRegistrationC3;
        }
      }
      
      else
      {
      DestinationPayingRegistrationC4:
        cout << "\n";
        cout << "|========================================|" << endl;
        cout << "| Tidak Ada Praktikum Yang Perlu Dibayar!|" << endl;
        cout << "| -------------------------------------- |" << endl;
        cout << "| 1. Lihat Invoice                       |" << endl;
        cout << "| 9. Kembali                             |" << endl;
        cout << "| 0. Keluar                              |" << endl;
        cout << "=========================================|" << endl;
        cout << " ->  ";
        cin >> PayingRegistrationC;
        cout << "\n";

        switch (PayingRegistrationC)
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
          cout << "     |============================|" << endl;
          cout << "----->       Masukan Salah!!      <-----" << endl;
          cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
          cout << "     |============================|" << endl;
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

  for (i = 0; i < x; i++) {
    PrakBuy.PrakListC[i] = "0";
    PrakBuy.PrakPriceC[i] = 0;
  }
}

int User::PrakTotal(int b)
{
  if (b < 0) {
    return 0;
  } else {
    Total += PrakBuy.PrakPriceC[b];
    return PrakTotal(b - 1);
  }
}

void User::PrakInvoice()
{
  cout << "\n\n#=============================#" << endl;
  cout << "#    +-------------------+    #" << endl;
  cout << "#    +      INVOICE      +    #" << endl;
  cout << "#    +-------------------+    #" << endl;
  cout << "#=============================#" << endl;
  cout << "Mata Praktikum\t\t:  ||  ";
  for (i = 0; i < PrakCNameAmount; i++) {
    cout << PrakBuy.PrakListC[i] << " || ";
  }

  cout << "\n";

  cout << "Harga\t\t\t: ||  ";
  for (i = 0; i < PrakCNameAmount; i++) {
    cout << PrakBuy.PrakPriceC[i] << " || ";
  }
  cout << "\n";
  cout << "  |                                |" << endl;
  cout << "+++--------------------------------+++" << endl;
  cout << "  | Total\t\t\t: " << Total << " |" << endl;
  cout << "  | Jumlah bayar\t\t: " << AmountPay << " |" << endl;
  cout << "+++--------------------------------+++" << endl;
  cout << "  |                                |" << endl;
  cout << "Kembali\t\t\t: " << Chance << endl;
  cout << "===================================" << endl;
  cout << "\n\t\tTerima Kasih!\t\t" << endl;
}

void User::PrakCSlot()
{
  if (IDeclaringDynamicalArray == 0)
  {
    //
    // DeclareDynimicalArrayPrakBuy(PrakCNameAmount);
    //

    if (  IDeclaringDynamicalArray != 0 )
    {
      do {
        cout << "\n";
        cout << "#====================================#" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#    +      PEMILIHAN SLOT      +    #" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#====================================#" << endl;
        cout << "Mata Praktikum\t:" << endl;

        for (i = 0; i < PrakCNameAmount; i++)
        {
          cout << i + 1 << ". " << PrakBuy.PrakListC[i] << endl;
        }

        cout << "\n";
        cout << "=============================================" << endl;
        cout << "|           Masukan Nomor Praktikum         |" << endl;
        cout << "|              Untuk Pilih Slot             |" << endl;
        cout << "|                    ...                    |" << endl;
        cout << "=============================================" << endl;
        cout << " ->  ";
        cin >> PrakCSlotC;

        PrakCSlotList(PrakCSlotC - 1);
        PrakCSlot();

      } while (PrakCSlotC == i);
    }
    
    else
    {
      cout << "\n";
      cout << "++++-----------------------------------------++++" << endl;
      cout << "++++                                         ++++" << endl;
      cout << "++++  Belum Mendaftar Pada Praktikum Apapun! ++++" << endl;
      cout << "++++     Silahkan Daftar Terlebih Dahulu!    ++++" << endl;
      cout << "++++                                         ++++" << endl;
      cout << "++++=========================================++++" << endl;
      cout << "\n";

      PrakRegistration();
    }
  }
  
  else
  {
    if (  !(PrakBuy.PrakListC[0].empty()) )
    {
      do {
        cout << "\n";
        cout << "#====================================#" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#    +      PEMILIHAN SLOT      +    #" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#====================================#" << endl;
        cout << "Mata Praktikum\t:" << endl;

        for (i = 0; i < PrakCNameAmount; i++)
        {
          cout << i + 1 << ". " << PrakBuy.PrakListC[i] << endl;
        }

        cout << "\n";
        cout << "=============================================" << endl;
        cout << "|           Masukan Nomor Praktikum         |" << endl;
        cout << "|              Untuk Pilih Slot             |" << endl;
        cout << "|                    ...                    |" << endl;
        cout << "=============================================" << endl;
        cout << " ->  ";
        cin >> PrakCSlotC;

        PrakCSlotList(PrakCSlotC - 1);

      } while (UserMenuC != 0);
    }
    
    else
    {
      cout << "\n";
      cout << "++++-----------------------------------------++++" << endl;
      cout << "++++                                         ++++" << endl;
      cout << "++++  Belum Mendaftar Pada Praktikum Apapun! ++++" << endl;
      cout << "++++     Silahkan Daftar Terlebih Dahulu!    ++++" << endl;
      cout << "++++                                         ++++" << endl;
      cout << "++++=========================================++++" << endl;
      cout << "\n";
      PrakRegistration();
    }
  }
}

void User::PrakCSlotList(int x)
{
  SizeOfArrayPrakCNameNumber =  sizeof(PrakCNameNumber) /
                                sizeof(PrakCNameNumber[0]);

  SizeOfArraySlotSData =  sizeof(DayAndTimeSlot.SDataDayAndTime) /
                          sizeof(DayAndTimeSlot.SDataDayAndTime[0]);

  SizeOfArraySlotBasDat = sizeof(DayAndTimeSlot.BasDatDayAndTime) /
                          sizeof(DayAndTimeSlot.BasDatDayAndTime[0]);

  SizeOfArraySlotStatistika = sizeof(DayAndTimeSlot.StatistikaDayAndTime) /
                              sizeof(DayAndTimeSlot.StatistikaDayAndTime[0]);

  SizeOfArraySlotSO = sizeof(DayAndTimeSlot.SODayAndTime) /
                      sizeof(DayAndTimeSlot.SODayAndTime[0]);

  SizeOfArraySlotPBO =  sizeof(DayAndTimeSlot.PBODayAndTime) /
                        sizeof(DayAndTimeSlot.PBODayAndTime[0]);

  SizeOfArraySlotDDP =  sizeof(DayAndTimeSlot.DDPDayAndTime) /
                        sizeof(DayAndTimeSlot.DDPDayAndTime[0]);

  SizeOfArraySlotLogika = sizeof(DayAndTimeSlot.LogikaDayAndTime) /
                          sizeof(DayAndTimeSlot.LogikaDayAndTime[0]);

  SizeOfArraySlotDSK = sizeof(DayAndTimeSlot.DSKDayAndTime) /
                              sizeof(DayAndTimeSlot.DSKDayAndTime[0]);

  SizeOfArraySlotAlpro = sizeof(DayAndTimeSlot.AlproDayAndTime) /
                      sizeof(DayAndTimeSlot.AlproDayAndTime[0]);

  SizeOfArraySlotPweb =  sizeof(DayAndTimeSlot.PWEBDayAndTime) /
                        sizeof(DayAndTimeSlot.PWEBDayAndTime[0]);

  SizeOfArraySlotMatdis =  sizeof(DayAndTimeSlot.MatdisDayAndTime) /
                        sizeof(DayAndTimeSlot.MatdisDayAndTime[0]);


  cout << "\n";
  cout << "==================================" << endl;
  cout << "|                                |" << endl;
  cout << "|   ~~~ SLOT YANG TERSEDIA ~~~   |" << endl;
  cout << "|                                |" << endl;
  cout << "==================================" << endl;

  if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[0])
  {
    for (i = 0; i < SizeOfArraySlotSData; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.SDataDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotSData; i++)
    {
      if (PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] =
            PrakBuy.PrakListC[x] +
            SplitterColon +
            DayAndTimeSlot.SDataDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  
  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[1])
  {
    for (i = 0; i < SizeOfArraySlotBasDat; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.BasDatDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotBasDat; i++)
    {
      if (PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] =
            PrakBuy.PrakListC[x] +
            SplitterColon +
            DayAndTimeSlot.BasDatDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  
  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[2])
  {
    for (i = 0; i < SizeOfArraySlotStatistika; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.StatistikaDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotStatistika; i++)
    {
      if (PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] =
            PrakBuy.PrakListC[x] +
            SplitterColon +
            DayAndTimeSlot.StatistikaDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  
  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[3])
  {
    for (i = 0; i < SizeOfArraySlotSO; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.SODayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotSO; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.SODayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
  
  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[4])
  {
    for (i = 0; i < SizeOfArraySlotPBO; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.PBODayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotPBO; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.PBODayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[5])
  {
    for (i = 0; i < SizeOfArraySlotDDP; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.DDPDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotDDP; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.DDPDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[6])
  {
    for (i = 0; i < SizeOfArraySlotLogika; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.LogikaDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotLogika; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.LogikaDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[7])
  {
    for (i = 0; i < SizeOfArraySlotDSK; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.DSKDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotDSK; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.DSKDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[8])
  {
    for (i = 0; i < SizeOfArraySlotAlpro; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.AlproDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotAlpro; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.AlproDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[9])
  {
    for (i = 0; i < SizeOfArraySlotPweb; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.PWEBDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotPweb; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.PWEBDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (PrakBuy.PrakListC[x] == PrakList.PrakNameList[10])
  {
    for (i = 0; i < SizeOfArraySlotMatdis; i++)
    {
      cout << i + 1 << ". " << DayAndTimeSlot.MatdisDayAndTime[i] << endl;
    }

    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nomor Slot            |" << endl;
    cout << "|             Yang Ingin Dipilih            |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << " ->  ";
    cin >> PrakCSlotC2;

    for (i = 0; i < SizeOfArraySlotMatdis; i++)
    {
      if (PrakSchedule.jadwal[i].empty()) {
        PrakSchedule.jadwal[i] = PrakBuy.PrakListC[x] +
                                  SplitterColon +
                                 DayAndTimeSlot.MatdisDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
}

void User::MenuAfterPrakCSlot(int x)
{
  if (IndexOfPrakCSlot != PrakCNameAmount)
  {
    cout << "\n";
    cout << "Selesai? (Y/N)\n";
    cout << " ->  ";
    cin >> d1;
    if (d1 == 'Y' || d1 == 'y')
    {
      IndexOfPrakCSlot++;
      cout << "\n";
      cout << "#==================================#" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#      +  MASUKKAN PILIHAN +       #" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#==================================#" << endl;
      cout << "#  1. Lanjut Memilih Slot Lain     #" << endl;
      cout << "#  2. Lihat Jadwal                 #" << endl;
      cout << "#  9. Kembali                      #" << endl;
      cout << "===================================#" << endl;
      cout << " ->  ";
      cin >> y_d1;

      switch (y_d1)
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
        cout << "     |============================|" << endl;
        cout << "----->       Masukan Salah!!      <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        PrakCSlotList(x);
        break;
      }
    }
    
    else
    {
      cout << "\n";
      cout << "     |============================|" << endl;
      cout << "----->       Masukan Salah!!      <-----" << endl;
      cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
      cout << "     |============================|" << endl;
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
    
    if (  d1 == 'Y' ||
          d1 == 'y' )
    {
      cout << "\n";
      cout << "#==================================#" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#      +  MASUKKAN PILIHAN +       #" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#==================================#" << endl;
      cout << "#  1. Lihat Jadwal                 #" << endl;
      cout << "#  9. Kembali                      #" << endl;
      cout << "#  0. Menu Utama                   #" << endl;
      cout << "===================================#" << endl;
      cout << " ->  ";
      cin >> y_d1;
      switch (y_d1) {
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
        cout << "     |============================|" << endl;
        cout << "----->       Masukan Salah!!      <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        PrakCSlotList(x);
        break;
      }
    }
    
    else
    {
      cout << "\n";
      cout << "     |============================|" << endl;
      cout << "----->       Masukan Salah!!      <-----" << endl;
      cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
      cout << "     |============================|" << endl;
      cout << "\n";
      PrakCSlotList(x);
    }
  }
}

void User::PrakMateri(int x)
{
PMAT:
  do {
    cout << "\n";
    cout << "#======================================#" << endl;
    cout << "#    +----------------------------+    #" << endl;
    cout << "#    +   MODUL MATERI PRAKTIKUM   +    #" << endl;
    cout << "#    +----------------------------+    #" << endl;
    cout << "#======================================#" << endl;

    PrintMateri(x);
    cout << "|++++++++++++++++++++++++++++++++++++++|" << endl;
    cout << "| 1. Unduh                             |" << endl;
    cout << "| 2. Cari                              |" << endl;
    cout << "| 3. Cetak Modul (Ascending)           |" << endl;
    cout << "| 4. Cetak Modul (Descending)          |" << endl;
    cout << "| 99. Kembali                          |" << endl;
    cout << "| 0. Keluar                            |" << endl;
    cout << "========================================" << endl;
    cout << " ->  ";
    cin >> pmat;

    switch (pmat) {
    case 0:
      exit(1);
      break;
    case 1:
      DownloadMateri(x);
      break;
    case 2:
      SearchMateri();
      break;
    case 3:
      PrakMateri(1);
      break;
    case 4:
      PrakMateri(4);
      break;
    case 99:
      MainMenuUser();
      break;
    default:
      cout << "\n";
      cout << "     |============================|" << endl;
      cout << "----->       Masukan Salah!!      <-----" << endl;
      cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
      cout << "     |============================|" << endl;
      cout << "\n";
      goto PMAT;
      break;
    }
  } while (pmat != 0);
}

void User::DownloadMateri(int x)
{
DLMateri:
  cout << "\n";
  cout << "=============================================" << endl;
  cout << "|                Masukan Modul              |" << endl;
  cout << "|             Yang Ingin Diunduh            |" << endl;
  cout << "|                   ******                  |" << endl;
  cout << "=============================================" << endl;
  cout << " ->  ";
  cin >> DownloadMateriC;

  if (x == 4) {
    TempDownloadMateri = tail;
    if (DownloadMateriC == 1) {
      cout << "\n";
      cout << "===============================" << endl;
      cout << TempDownloadMateri->MateriName << " Berhasil DiUnduh" << endl;
      cout << "===============================" << endl;
      cout << "\n";
    }

    else {
      for (i = 0; i < DownloadMateriC; i++) {
        if (i == DownloadMateriC - 1) {
          cout << "\n";
          cout << "===============================" << endl;
          cout << TempDownloadMateri->MateriName << " Berhasil DiUnduh" << endl;
          cout << "===============================" << endl;
          cout << "\n";
        }
        cout << TempDownloadModulMateri->MateriName << endl;
        TempDownloadMateri = TempDownloadMateri->prev;
      }
    }
  }

  else {
    TempDownloadMateri = head;
    if (DownloadMateriC == 1) {
      cout << "\n";
      cout << "===============================" << endl;
      cout << TempDownloadMateri->MateriName << " Berhasil DiUnduh" << endl;
      cout << "===============================" << endl;
      cout << "\n";
    }

    else {
      for (i = 0; i < DownloadMateriC; i++) {
        if (i == DownloadMateriC - 1) {
          cout << "\n";
          cout << "===============================" << endl;
          cout << TempDownloadMateri->MateriName << " Berhasil DiUnduh" << endl;
          cout << "===============================" << endl;
          cout << "\n";
        }
        cout << TempDownloadModulMateri->MateriName << endl;
        TempDownloadMateri = TempDownloadMateri->next;
      }
    }
  }
}

void User::DeclareMateri()
{
  SData->MateriName = "Modul Struktur Data";
  SData->prev = NULL;
  SData->next = BasDat;

  BasDat->MateriName = "Modul Basis Data";
  BasDat->prev = SData;
  BasDat->next = Statistika;

  Statistika->MateriName = "Modul Statistika Informatika";
  Statistika->prev = BasDat;
  Statistika->next = SO;

  SO->MateriName = "Modul Sistem Operasi";
  SO->prev = Statistika;
  SO->next = PBO;

  PBO->MateriName = "Modul Pemrograman Berbasis Objek";
  PBO->prev = SO;
  PBO->next = DDP;

  DDP->MateriName = "Modul Dasar-Dasar Pemrograman";
  DDP->prev = PBO;
  DDP->next = Logika;

  Logika->MateriName = "Modul Logika Informatika";
  Logika->prev = DDP;
  Logika->next = DSK;

  DSK->MateriName = "Modul Dasar Sistem Komputer";
  DSK->prev = Logika;
  DSK->next = Alpro;

  Alpro->MateriName = "Modul Algortima Pemrograman";
  Alpro->prev = DSK;
  Alpro->next = Pweb;

  Pweb->MateriName = "Modul Pemrograman Website";
  Pweb->prev = Alpro;
  Pweb->next = Matdis;

  Matdis->MateriName = "Modul Matematika Diskrit";
  Matdis->prev = Pweb;
  Matdis->next = NULL;

  head = SData;
  tail = Matdis;
}

void User::PrintMateri(int x)
{
  if (x == 4) {
    DeclareMateri();
    if (head == NULL) {
      cout << "\n";
      MainMenuUser();
    }

    else {
      i = 1;
      Check = tail;
      while (Check != NULL) {
        cout << i << ". " << Check->MateriName << endl;
        Check = Check->prev;
        i++;
      }
    }
  }

  else {
    DeclareMateri();
    if (head == NULL) {
      cout << "\n";
      MainMenuUser();
    }

    else {
      i = 1;
      Check = head;
      while (Check != NULL) {
        cout << i << ". " << Check->MateriName << endl;
        Check = Check->next;
        i++;
      }
    }
  }
}

void User::DlFromSM(string x)
{
  cout << "\n";
  cout << "      |                |      " << endl;
  cout << "------+================+------" << endl;
  cout << x << " Berhasil DiUnduh" << endl;
  cout << "------+================+------" << endl;
  cout << "      |                |      " << endl;
  cout << "\n";
}

void User::SearchMateri()
{
  DeclareMateri();
  if (head == NULL) {
    cout << endl;
    MainMenuUser();
  }

  else {
    cout << "\n";
    cout << "=============================================" << endl;
    cout << "|             Masukan Nama Modul            |" << endl;
    cout << "|             Yang Ingin Dicari             |" << endl;
    cout << "|                   ******                  |" << endl;
    cout << "=============================================" << endl;
    cout << "  ->  ";
    cin.ignore();
    getline(cin, InputSearchMateri);

    Check = head;
    while (Check != NULL) {
      if (InputSearchMateri == Check->MateriName) {
        SearchTemp = Check->MateriName;
      }
      Check = Check->next;
    }

    i = 1;
    if (!SearchTemp.empty()) {
      cout << "\n";
      cout << "===============================" << endl;
      cout << "|        Modul DiTemukan!     |" << endl;
      cout << i << ". " << SearchTemp << endl;
      cout << "===============================" << endl;
    SMATT:
      cout << "\n";
      cout << "#==================================#" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#      +  MASUKKAN PILIHAN +       #" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#==================================#" << endl;
      cout << "#  1. Unduh                        #" << endl;
      cout << "#  2. Cari                         #" << endl;
      cout << "#  99. Kembali                     #" << endl;
      cout << "#  0. Keluar                       #" << endl;
      cout << "===================================#" << endl;
      cout << " ->  ";
      cin >> smat;

      switch (smat) {
      case 1:
        DlFromSM(SearchTemp);
        break;
      case 2:
        SearchMateri();
        break;
      case 99:
        PrakMateri(1);
        break;
      case 0:
        exit(1);
        break;
      default:
        cout << "\n";
        cout << "     |============================|" << endl;
        cout << "----->       Masukan Salah!!      <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        goto SMATT;
        break;
      }
    }

    else {
      cout << "\n";
      cout << "     |=============================|" << endl;
      cout << "----->    Modul Tidak Ditemukan    <-----" << endl;
      cout << "----->>>>>>>>>>>>>>><<<<<<<<<<<<<<<-----" << endl;
      cout << "     |=============================|" << endl;
    SMAT:
      cout << "\n";
      cout << "#==================================#" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#      +  MASUKKAN PILIHAN +       #" << endl;
      cout << "#      +-------------------+       #" << endl;
      cout << "#==================================#" << endl;
      cout << "#  1. Cari                         #" << endl;
      cout << "#  99. Kembali                     #" << endl;
      cout << "#  0. Keluar                       #" << endl;
      cout << "===================================#" << endl;
      cout << " ->  ";
      cin >> smat;

      switch (smat) {
      case 1:
        SearchMateri();
        break;
      case 99:
        PrakMateri(1);
        break;
      case 0:
        exit(1);
        break;
      default:
        cout << "\n";
        cout << "     |============================|" << endl;
        cout << "----->       Masukan Salah!!      <-----" << endl;
        cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
        cout << "     |============================|" << endl;
        cout << "\n";
        goto SMAT;
        break;
      }
    }
  }
}

void User::PrakJadwal()
{
  if (PrakSchedule.jadwal[0].empty()) {
    cout << "\n";
    cout << "     |=============================|" << endl;
    cout << "----->     Jadwal Masih Kosong     <-----" << endl;
    cout << "----->>>>>>>>>>>>>>><<<<<<<<<<<<<<<-----" << endl;
    cout << "     |=============================|" << endl;
    MainMenuUser();
  } else {
    SizeOfPrakSchedule =
        sizeof(PrakSchedule.jadwal) / sizeof(PrakSchedule.jadwal[0]);
    cout << "\n";
    cout << "+====================================+" << endl;
    cout << "|    +--------------------------+    |" << endl;
    cout << "|    +          JADWAL          +    |" << endl;
    cout << "|    +--------------------------+    |" << endl;
    cout << "+====================================+" << endl;
    for (i = 0; i < SizeOfPrakSchedule; i++) {
      if (!PrakSchedule.jadwal[i].empty()) {
        cout << i + 1 << ". " << PrakSchedule.jadwal[i] << endl;
      } else {
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
  put.open("../UserSchedule.txt");
  put << "+====================================+" << endl;
  put << "|    +--------------------------+    |" << endl;
  put << "|    +          JADWAL          +    |" << endl;
  put << "|    +--------------------------+    |" << endl;
  put << "+====================================+" << endl;
  for (i = 0; i < SizeOfPrakSchedule; i++) {
    if (!PrakSchedule.jadwal[i].empty()) {
      put << i + 1 << ". " << PrakSchedule.jadwal[i] << endl;
    } else {
      break;
    }
  }
  put << "===============================" << endl;
  put.close();
}

void User::PrakScheduleDataToTXT()
{
  put.open("../UserScheduleData.txt");
  for (i = 0; i < SizeOfPrakSchedule; i++) {
    if (!PrakSchedule.jadwal[i].empty()) {
      put << PrakSchedule.jadwal[i] << endl;
    } else {
      break;
    }
  }
  put.close();
}

void User::PrintUserProfile()
{
  if( rootUserData == NULL  )
  {
    cout << "\n";
    cout << "#=====================================#" << endl;
    cout << "#        ---------------------        #" << endl;
    cout << "#      $$  DATA MASIH KOSONG  $$      #" << endl;
    cout << "#        ---------------------        #" << endl;
    cout << "#=====================================#" << endl;
  }

  else
  {
    cout << "\n";
    cout << "#=====================================#" << endl;
    cout << "#        ---------------------        #" << endl;
    cout << "#        $$ PROFIL PENGGUNA $$        #" << endl;
    cout << "#        ---------------------        #" << endl;
    cout << "#=====================================#" << endl;

    preOrderUserData(rootUserData);
  }
}

void User::InvoiceToStructTXT()
{
  put.open("../UserStruct.txt");
  put << "#=====================================#" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#        $$     INVOICE     $$        #" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#=====================================#" << endl;
  put << "Mata Praktikum\t:  || ";
  for (i = 0; i < PrakCNameAmount; i++) {
    put << PrakBuy.PrakListC[i] << " || ";
  }

  put << "\n";

  put << "Harga\t\t\t: ||  ";
  for (i = 0; i < PrakCNameAmount; i++) {
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

User Y;

#endif