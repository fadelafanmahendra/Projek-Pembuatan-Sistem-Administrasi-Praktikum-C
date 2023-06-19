#ifndef ASSISTANT_H_
#define ASSISTANT_H_
// #pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <cstdlib>

#include "../261-Admin/Admin.h"
#include "../269-User/User.h"

using namespace std;

extern Admin X;

class Assistant
{
  public:
    Assistant(  );
    void LoginAsAssistant(  );
    void AssistantRegistryACC(  );
    void AssistantProfileToTXT( );
    void AssistantProfileDataToTXT( );
    void PrintAssistantProfile( );
    void AssistantMenu( );
    void InputAssistantBiodata( );
    void AssistantHeadNTail(  );
    int CountAssistantData( );
    void PrintAssistantData(  );
    void newAssistantData(  );
    void AssistantBiodataToTXT( );
    void AssistantBiodataDataToTXT( );
    void deleteAssistantData( );
    void MainMenuAssistant( );
    void ShowAssistantName( );
    void AssistantPrakRegistration( );
    void AssistantPrakCList(  );
    void PrakPay( );
    int PrakTotal(  int );
    void DeclareDynimicalArrayAssistantPrakC( int );
    void AssistantPrakCName();
    void AssistantPrakCSlot();
    void AssistantPrakCSlotList(  int );
    void MenuAfterPrakCSlot(  int );
    void AssistantPrakJadwal( );
    void AssistantPrakScheduleToTXT(  );
    void AssistantPrakScheduleDataToTXT(  );
    void AssistantPrakMateri(int);
    void DeclareMateri( );
    void DownloadMateri(  int );
    void PrintMateri( int );
		void PrakInvoice( );
    void InvoiceToStructTXT(  );
    void SearchMateri(  );
    void DownloadMateriAssistant( int  );
    void DlFromSM( string );

    struct
    {
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
    }DayAndTimeSlot;

    struct
    {
      string AssistantEmail;
      string AssistantUsername;
      string AssistantPassword;
      string AssistantName;
      string AssistantAddress;
      string AssistantPhone;
    }ProfileAssistant;

    struct
    {
      string *PrakListC;
    } AssistantPrakC;

    struct
    {
      string PrakListOnSchedule[5];
      string jadwal[5];
    } PrakSchedule;

  private:
    int AssistantMenuC;
    char AssistantRegistryToSignUp;
    int MainMenuAssistantC;
    int PrakRegistryC;
    int count;
    int SizeOfArrayPrakList;
    int SizeOfArrayPrakCNameNumber;
    int AssistenPrakCNameAmount;
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
    int IDeclaringDynamicalArray = 0;
    int IndexOfPrakCSlot;
    int Top = 0;
    int aspmat;
    int assmat;
    string InputSearchMateri;
    string SearchTemp;
    ofstream put;
};

class AssistantACCNode
{
  public :
    string AssistantUsernameNode;
    string AssistantPasswordNode;
    AssistantACCNode *next;
};

AssistantACCNode *AssistantACCFirstNode = new AssistantACCNode;
AssistantACCNode *AssistantACYHead = new AssistantACCNode;
AssistantACCNode *AssistantACYTail = new AssistantACCNode;

class KTPAssistantNode
{
    public:
        string nik;
        string nama;
        string tempatLahir;
        string jenisKelamin;
        string GolDar;
        string address;
        string agama;
        string statusPerkawinan;
        string pekerjaan;
        string statusKewarganegaraan;
        KTPAssistantNode *next;
        KTPAssistantNode *prev;
};

KTPAssistantNode *XHead;
KTPAssistantNode *XTail;
KTPAssistantNode *currX;
KTPAssistantNode *delX;
KTPAssistantNode *tempX;

struct dateAssistantNode
{
  string hari;
  string bulan;
  string tahun;
  dateAssistantNode *next;
  dateAssistantNode *prev;
}
  *YHead,
  *YTail,
  *currY,
  *delY,
  *tempY;

struct addressAssistantNode
{
  string RT;
  string RW;
  string Kel;
  string Kec;
  addressAssistantNode *next;
  addressAssistantNode *prev;
}
  *ZHead,
  *ZTail,
  *currZ,
  *delZ,
  *tempZ;

class AssistantMateriNode
{
  public :
    string MateriName;
    AssistantMateriNode *prev;
    AssistantMateriNode *next;
};

AssistantMateriNode *AssistantHead = new AssistantMateriNode;
AssistantMateriNode *AssistantTail = new AssistantMateriNode;
AssistantMateriNode *ModulSDataAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulBasDatAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulStatistikaAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulSOAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulPBOAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulDDPAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulLogikaAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulDSKAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulAlproAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulPwebAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulMatdisAsisten = new AssistantMateriNode;
AssistantMateriNode *ModulheadAsisten = new AssistantMateriNode;
AssistantMateriNode *ModultailAsisten = new AssistantMateriNode;
AssistantMateriNode *AssistantCheck = new AssistantMateriNode;
AssistantMateriNode *TempDownloadModulMateriAsisten = new AssistantMateriNode;
AssistantMateriNode *TempDeleteModulMateriAAsisten = new AssistantMateriNode;
AssistantMateriNode *TempDeleteModulMateriBAsisten = new AssistantMateriNode;

class assistantData 
{ 
  public:
    int key; 
    assistantData *left; 
    assistantData *right; 
    int height;

    string username;
    string password;
    string email;
    string nama;
    string alamat;
    string notelp;
};

assistantData *rootAssistantData = NULL;
static int zzz = 1;

int maxAssistantData(int a, int b);
int heightAssistant(assistantData *N);
assistantData* newAssistantData(  int key,
                        string username,
                        string password,
                        string email,
                        string nama,
                        string alamat,
                        string notelp  );
assistantData *rightRotate(assistantData *y);
assistantData *leftRotate(assistantData *x);
int getBalance(assistantData *N);
assistantData* insert( assistantData* node,
                  int key,
                  string username,
                  string password,
                  string email,
                  string nama,
                  string alamat,
                  string notelp );
assistantData * minValueAssistantData(assistantData* node);
assistantData* deleteAssistantData(assistantData* root, int key);
void preOrderAssistantData(assistantData *root);

int maxAssistantData(int a, int b);

int heightAssistant(assistantData *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int maxAssistantData(int a, int b)
{
	return (a > b) ? a : b;
}

assistantData* newAssistantData(  int key,
                        string username,
                        string password,
                        string email,
                        string nama,
                        string alamat,
                        string notelp  )
{
	assistantData* node = new assistantData();
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

assistantData *rightRotate(assistantData *y)
{
	assistantData *x = y->left;
	assistantData *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = maxAssistantData(heightAssistant(y->left),
					heightAssistant(y->right)) + 1;
	x->height = maxAssistantData(heightAssistant(x->left),
					heightAssistant(x->right)) + 1;

	return x;
}

assistantData *leftRotate(assistantData *x)
{
	assistantData *y = x->right;
	assistantData *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = maxAssistantData(heightAssistant(x->left),
					heightAssistant(x->right)) + 1;
	y->height = maxAssistantData(heightAssistant(y->left),
					heightAssistant(y->right)) + 1;

	return y;
}

int getBalance(assistantData *N)
{
	if (N == NULL)
		return 0;
	return heightAssistant(N->left) -
		heightAssistant(N->right);
}

assistantData* insert( assistantData* node,
                  int key,
                  string username,
                  string password,
                  string email,
                  string nama,
                  string alamat,
                  string notelp )
{
	if (node == NULL)
		return(newAssistantData( key,
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

	node->height = 1 + maxAssistantData(heightAssistant(node->left),
						heightAssistant(node->right));

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

assistantData * minValueAssistantData(assistantData* node)
{
	assistantData* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}

assistantData* deleteAssistantData(assistantData* root, int key)
{
	
	if (root == NULL)
		return root;

	if ( key < root->key )
		root->left = deleteAssistantData(root->left, key);

	else if( key > root->key )
		root->right = deleteAssistantData(root->right, key);

	else
	{
		if( (root->left == NULL) ||
			(root->right == NULL) )
		{
			assistantData *temp = root->left ?
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
			assistantData* temp = minValueAssistantData(root->right);

			root->key = temp->key;

			root->right = deleteAssistantData(root->right,
									temp->key);
		}
	}

	if (root == NULL)
	return root;

	root->height = 1 + maxAssistantData(heightAssistant(root->left),
						heightAssistant(root->right));

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

void preOrderAssistantData(assistantData *root)
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
		preOrderAssistantData(root->left);
		preOrderAssistantData(root->right);
	}
}

ofstream putAssistData;
bool putCheckY = false;
void preOrderAssistantDataToTXT(assistantData *root) {
  if(root != NULL)
	{
    if(!putCheckY) {
      putAssistData.open("AssistantProfile.txt");
      putCheckY = true;
    }
    putAssistData << "#=====================================#" << endl;
    putAssistData << "#        ---------------------        #" << endl;
    putAssistData << "#        $$  PROFIL ASISTEN $$        #" << endl;
    putAssistData << "#        ---------------------        #" << endl;
    putAssistData << "#=====================================#" << endl;
		putAssistData << " Key             : " << root->key << endl;
    putAssistData << " E-Mail          : " << root->email << endl;
    putAssistData << " Nama Pengguna   : " << root->username << endl;
    putAssistData << " Nama            : " << root->nama << endl;
    putAssistData << " Alamat          : " << root->alamat << endl;
    putAssistData << " No. Telepon     : " << root->notelp << endl;
    putAssistData << "=======================================" << endl;
		preOrderAssistantDataToTXT(root->left);
		preOrderAssistantDataToTXT(root->right);
	}
  else {
    putAssistData.close();
  }
}

Assistant::Assistant()
{
  AssistantHeadNTail();
}

void Assistant::AssistantMenu()
{
  do
  {
    cout << "#===============================#" << endl;
    cout << "#    |---------------------|    #" << endl;
    cout << "#    |    MENU ASSISTANT   |    #" << endl;
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
    cout << " ->  ";
    cin >> AssistantMenuC;
    
    switch (AssistantMenuC)
    {
    case 1:
      LoginAsAssistant();
      break;
    case 2:
      AssistantRegistryACC();
      break;
    case 0:
      exit(0);
    default:
      break;
    }
  } while(AssistantMenuC != 0);
}

void Assistant::AssistantHeadNTail()
{
  XHead = NULL;
  XTail = NULL;

  ZHead = NULL;
  ZTail = NULL;

  YHead = NULL;
  YTail = NULL;
}

int Assistant::CountAssistantData()
{
  if(XHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    newAssistantData();
  }
  else
  {
    count = 0;
    currX = XHead;
    while(currX != NULL) {
      count++;
      currX = currX->next;
    }
    return count;
  }
}

void Assistant::PrintAssistantData()
{
  if(XHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    newAssistantData();
  }
  else
  {
    currX = XHead;
    currZ = ZHead;
    currY = YHead;
  
    l = 1;
  
    while(currX != NULL)
    {
      cout << "\n=================================================\n";
      cout << "\t\t" << l << "\t\t" << endl;
      cout << "==================================================" << endl;
      cout << "\t\tPROVINSI DKI JAKARTA" << endl;
      cout << "\t\tKOTA JAKARTA BARAT" << endl;
      cout << "==================================================" << endl;
      cout << "NIK\t\t\t: "<< currX->nik << endl;
      cout << "Nama\t\t\t: "<< currX->nama << endl;
      cout << "tempXt/Tgl Lahir\t: "<< currX->tempatLahir
        << ", " << currY->hari
        << "-" << currY->bulan
        << "-" << currY->tahun
        << endl;
      cout << "Jenis Kelamin\t\t: " << currX->jenisKelamin
        << "\t" << "\t\tGol.Darah: "
        << currX->GolDar << endl;
      cout << "Alamat\t\t\t: " << currX->address << endl;
      cout << "  \tRT/RW\t\t: " <<  currZ->RT << "/" << currZ->RW << endl;
      cout << "  \tKel/Desa\t: "; cout << currZ->Kel << endl;
      cout << "  \tKec\t\t: "; cout << currZ->Kec << endl;
      cout << "Agama\t\t\t: " << currX->agama << endl;
      cout << "Status Perkawinan\t: " << currX->statusPerkawinan << endl;
      cout << "Pekerjaan\t\t: " << currX->pekerjaan << endl;
      cout <<  "Kewarganegaraan\t\t: " << currX->statusKewarganegaraan << endl;
      cout << "Berlaku Hingga\t\t: SEUMUR HIDUP" << endl;
      cout << "=================================================\n";
      cout << "\n";

      currX = currX->next;
      currZ = currZ->next;
      currY = currY->next;
      
      l++;
    }
  }
}

void Assistant::newAssistantData()
{
  KTPAssistantNode *NewX = new KTPAssistantNode;
  addressAssistantNode *NewY = new addressAssistantNode;
  dateAssistantNode *NewZ = new dateAssistantNode;

  cout << "\n=================================================\n";
  cout << "NIK\t: "; cin >> NewX->nik; cin.ignore();
  cout << "Nama\t: "; getline(cin, NewX->nama);
  cout << "Tempat Lahir\t: "; getline(cin, NewX->tempatLahir);
  cout << "Tanggal Lahir\t: "; cin >> NewZ->hari;
  cout << "Bulan Lahir\t: "; cin >> NewZ->bulan;
  cout << "Tahun Lahir\t: "; cin >> NewZ->tahun;
  cout << "Jenis Kelamin\t: "; cin >> NewX->jenisKelamin;
  cout << "Golongan Darah\t: "; cin >> NewX->GolDar; cin.ignore();
  cout << "Alamat\t: "; getline(cin, NewX->address);
  cout << "RT\t: "; cin >> NewY->RT;
  cout << "RW\t: "; cin >> NewY->RW; cin.ignore();
  cout << "Kelurahan\t: "; getline(cin, NewY->Kel);
  cout << "Kecamatan\t: "; getline(cin, NewY->Kec);
  cout << "Agama\t: "; cin >> NewX->agama; cin.ignore();
  cout << "Status Perkawinan\t: "; getline(cin, NewX->statusPerkawinan);
  cout << "Pekerjaan\t: "; getline(cin, NewX->pekerjaan);
  cout << "Status Kewarganegaraan\t: "; cin >> NewX->statusKewarganegaraan;
  cout << "\n=================================================\n";

  if(XHead == NULL) {
      NewX->prev = NULL;
      NewY->prev = NULL;
      NewZ->prev = NULL;

      XHead = NewX;
      ZHead = NewY;
      YHead = NewZ;

      NewX->next = NULL;
      NewY->next = NULL;
      NewZ->next = NULL;

      XTail = NewX;
      ZTail = NewY;
      YTail = NewZ;

      i++;
  }
  else {
    NewX->prev = XTail;
    NewY->prev = ZTail;
    NewZ->prev = YTail;

    XTail->next = NewX;
    ZTail->next = NewY;
    YTail->next = NewZ;

    NewX->next = NULL;
    NewY->next = NULL;
    NewZ->next = NULL;

    XTail = NewX;
    ZTail = NewY;
    YTail = NewZ;

    i++;
  }
  AssistantBiodataToTXT();
  AssistantBiodataDataToTXT();
}

void Assistant::AssistantBiodataToTXT()
{
  if(XHead == NULL)
  {
   cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    newAssistantData();
  }
  else
  {
    currX = XHead;
    currZ = ZHead;
    currY = YHead;
  
    l = 1;
    put.open("../AssistantBiodata.txt");
    while(currX != NULL)
    {
      put << "==================================================" << endl;
      put << "\t\tPROVINSI DKI JAKARTA" << endl;
      put << "\t\tKOTA JAKARTA BARAT" << endl;
      put << "==================================================" << endl;
      put << "NIK\t\t\t: "<< currX->nik << endl;
      put << "Nama\t\t\t: "<< currX->nama << endl;
      put << "tempXt/Tgl Lahir\t: "<< currX->tempatLahir
        << ", " << currY->hari
        << "-" << currY->bulan
        << "-" << currY->tahun
        << endl;
      put << "Jenis Kelamin\t\t: " << currX->jenisKelamin
        << "\t" << "\t\tGol.Darah: "
        << currX->GolDar << endl;
      put << "Alamat\t\t\t: " << currX->address << endl;
      put << "  \tRT/RW\t\t: " <<  currZ->RT << "/" << currZ->RW << endl;
      put << "  \tKel/Desa\t: "; put << currZ->Kel << endl;
      put << "  \tKec\t\t: "; put << currZ->Kec << endl;
      put << "Agama\t\t\t: " << currX->agama << endl;
      put << "Status Perkawinan\t: " << currX->statusPerkawinan << endl;
      put << "Pekerjaan\t\t: " << currX->pekerjaan << endl;
      put <<  "Kewarganegaraan\t\t: " << currX->statusKewarganegaraan << endl;
      put << "Berlaku Hingga\t\t: SEUMUR HIDUP" << endl;
      put << "=================================================\n";
      put << "\n";

      currX = currX->next;
      currZ = currZ->next;
      currY = currY->next;
      
      l++;
    }
    put.close();
  }
}

void Assistant::AssistantBiodataDataToTXT()
{
  if(XHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
    newAssistantData();
  }
  else
  {
    currX = XHead;
    currZ = ZHead;
    currY = YHead;
  
    l = 1;
    put.open("../AssistantBiodataData.txt");
    while(currX != NULL)
    {
      put << currX->nik << endl;
      put << currX->nama << endl;
      put << currX->tempatLahir << endl;
      put << currY->hari << endl;
      put  << currY->bulan << endl;
      put << currY->tahun << endl;
      put << currX->jenisKelamin << endl;
      put << currX->GolDar << endl;
      put << currX->address << endl;
      put << currZ->RT << endl;
      put << currZ->RW << endl;
      put << currZ->Kel << endl;
      put << currZ->Kec << endl;
      put << currX->agama << endl;
      put << currX->statusPerkawinan << endl;
      put << currX->pekerjaan << endl;
      put << currX->statusKewarganegaraan << endl;

      currX = currX->next;
      currZ = currZ->next;
      currY = currY->next;
      
      l++;
    }
    put.close();
  }
}

void Assistant::deleteAssistantData()
{
  CountAssistantData();
  if(XHead == NULL)
  {
    cout << "|===========================================|\n";
    cout << "|                                           |" << endl;
    cout << "|            Data masih kosong!             |" << endl;
    cout << "|                                           |" << endl;
    cout << "|===========================================|";
      newAssistantData();
  }
  else
  {
      cout << CountAssistantData();
      cout << "Masukkan nomor data yang ingin dihapus!" << endl;
      cout << "   ->  "; cin >> j;

      if(j < 1 || j > CountAssistantData())
      {
          cout << "|===========================================|\n";
          cout << "|                                           |" << endl;
          cout << "|            Di luar jangkauan!             |" << endl;
          cout << "|                                           |" << endl;
          cout << "|===========================================|";
          // newAssistantData();
      }
      else
      {
          if(j == 1 && XHead == XTail)
          {
              delX = XHead;
              delZ = ZHead;
              delY = YHead;

              XHead = NULL;
              XTail = NULL;

              ZHead = NULL;
              ZTail = NULL;

              YHead = NULL;
              YTail = NULL;

              delete delX;
              delete delZ;
              delete delY;
          }
          else if(j == 1)
          {
              delX = XHead;
              delZ = ZHead;
              delY = YHead;

              XHead = XHead->next;
              ZHead = ZHead->next;
              YHead = YHead->next;

              XHead->prev = NULL;
              ZHead->prev = NULL;
              YHead->prev = NULL;

              delete delX;
              delete delZ;
              delete delY;
          }
          else if(j == CountAssistantData())
          {
              k = 1;

              currX = XHead;
              currZ = ZHead;
              currY = YHead; 

              while(k < j - 1)
              {
                  currX = currX->next;
                  currZ = currZ->next;
                  currY = currY->next;

                  k++;
              }

              delX = currX->next;
              delZ = currZ->next;
              delY = currY->next;

              currX->next = NULL;
              currZ->next = NULL;
              currY->next = NULL;

              XTail = currX;
              ZTail = currZ;
              YTail = currY;

              delete delX;
              delete delZ;
              delete delY;
          }
          else {
              k = 1;

              currX = XHead;
              currZ = ZHead;
              currY = YHead; 

              while(k < j - 1)
              {
                  currX = currX->next;
                  currZ = currZ->next;
                  currY = currY->next;

                  k++;
              }

              delX = currX->next;
              delZ = currZ->next;
              delY = currY->next;

              tempX = delX->next;
              tempZ = delZ->next;
              tempY = delY->next;

              currX->next = tempX;
              currZ->next = tempZ;
              currY->next = tempY;

              tempX->prev = currX;
              tempZ->prev = currZ;
              tempY->prev = currY;

              delete delX;
              delete delZ;
              delete delY;
          }
      }
  }
}

void Assistant::LoginAsAssistant()
{
  cout << "#==============================#" << endl;
  cout << "#    |---------------------|    #" << endl;
  cout << "#    MASUK SEBAGAI ASSISTANT    #" << endl;    
  cout << "#    |---------------------|    #" << endl;
  cout << "#==============================#" << endl;
  cout << "Nama Pengguna\t: ";
  cin >> ProfileAssistant.AssistantUsername;
  cout << "Sandi\t: ";
  cin >> ProfileAssistant.AssistantPassword;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

  AssistantACCNode *AssistantACCCheck = AssistantACYHead;
  while(AssistantACCCheck != NULL)
  {
    if(
      ProfileAssistant.AssistantUsername == AssistantACCCheck->AssistantUsernameNode &&
      ProfileAssistant.AssistantPassword == AssistantACCCheck->AssistantPasswordNode
      )
    {
      cout << "\n";
      cout << "|===========================================|\n";
      cout << "|                    |                      |" << endl;
      cout << "|------------Berhasil Masuk! ^-^------------|" << endl;
      cout << "|                    |                      |" << endl;
      cout << "|===========================================|";
      cout << "\n";
      MainMenuAssistant();
    }
    else
    {
      cout << "\n";
      cout << "|===========================================|\n";
      cout << "|                     |                     |" << endl;
      cout << "|              Masukan Salah!               |" << endl;
      cout << "|------Nama Pengguna Tidak Ditemukan!-------|" << endl;
      cout << "|        Coba lagi Input yang benar         |" << endl;
      cout << "|                     |                     |" << endl;
      cout << "|===========================================|" << endl;
      cout << "\n";
      AssistantMenu();
    }
    AssistantACCCheck = AssistantACCCheck->next;
  }
}

void Assistant::InputAssistantBiodata()
{
  cout << "#=============================#" << endl;
  cout << "#        ------------         #" << endl;
  cout << "#        $$ BIODATA $$        #" << endl;
  cout << "#        ------------         #" << endl;
  cout << "#=============================#" << endl;
  newAssistantData();
  PrintAssistantData();
}

void Assistant::AssistantRegistryACC()
{
  cout << "|===================================|" << endl;
  cout << "|            -----------            |" << endl;
  cout << "|          |  PENDAFTARAN |         |" << endl;
  cout << "|         | AKUN ASSISTANT |        |" << endl;
  cout << "|        ~~~~~~~~~~~~~~~~~~~        |" << endl;
  cout << "|===================================|" << endl;
  cout << "E-Mail\t: ";
  cin >> ProfileAssistant.AssistantEmail;
  cout << "Nama Pengguna\t: ";
  cin >> AssistantACCFirstNode->AssistantUsernameNode;
  cout << "Sandi\t: ";
  cin >> AssistantACCFirstNode->AssistantPasswordNode;
  cin.ignore();
  cout << "Nama\t: ";
  getline(cin, ProfileAssistant.AssistantName);
  cout << "Alamat\t: ";
  getline(cin, ProfileAssistant.AssistantAddress);
  cout << "No. Telepon\t: ";
  cin >> ProfileAssistant.AssistantPhone;
  AssistantACCFirstNode->next = NULL;
  AssistantACYHead = AssistantACCFirstNode;
  AssistantACYTail = AssistantACCFirstNode;

  AssistantRegistryToSignUpConfirm:
  cout << "\n";
  cout << "     |==========================|" << endl;
  cout << "     |           ---            |" << endl;
  cout << "-----> Ketik Y untuk mendaftar! <-----" << endl;
  cout << "     |        .........         |" << endl;
  cout << "     |==========================|" << endl;
  cout << "\n";
  cout << " ->  ";
  cin >> AssistantRegistryToSignUp;
  
  if(AssistantRegistryToSignUp == 'Y' || AssistantRegistryToSignUp == 'y')
  {
    rootAssistantData = insert( rootAssistantData,
                                zzz,
                                AssistantACCFirstNode->AssistantUsernameNode,
                                AssistantACCFirstNode->AssistantPasswordNode,
                                ProfileAssistant.AssistantEmail,
                                ProfileAssistant.AssistantName,
                                ProfileAssistant.AssistantAddress,
                                ProfileAssistant.AssistantPhone  );

    cout << "\n";
    cout << "|===========================================|\n";
    cout << "|                     |                     |" << endl;
    cout << "|            Berhasil Mendaftar!            |" << endl;
    cout << "|---------Kembali ke halaman awal!----------|" << endl;
    cout << "|                     |                     |" << endl;
    cout << "|===========================================|" << endl;
    cout << "\n";
    AssistantProfileToTXT();
    AssistantProfileDataToTXT();
    preOrderAssistantDataToTXT(rootAssistantData);
    AssistantMenu();
  }
  else
  {
    cout << "\n";
    cout << "     |============================|" << endl;
    cout << "----->       Masukan Salah!!      <-----" << endl;
    cout << "----->   Harap Ulang Kembali!!    <-----" << endl;
    cout << "     |============================|" << endl;
    cout << "\n";
    goto AssistantRegistryToSignUpConfirm;
  }
}

void Assistant::AssistantProfileToTXT()
{
  put.open("../AssistantProfile.txt");
  put << "#=====================================#" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#        $$ PROFIL ASSISTANT $$       #" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#=====================================#" << endl;
  put << "E-Mail\t: " << ProfileAssistant.AssistantEmail << endl;
  put << "Nama Pengguna\t: " << AssistantACCFirstNode->AssistantUsernameNode << endl;
  put << "Nama\t: " << ProfileAssistant.AssistantName << endl;
  put << "Alamat\t: " << ProfileAssistant.AssistantAddress << endl;
  put << "No. Telepon\t: " << ProfileAssistant.AssistantPhone << endl;
  put << "==============================" << endl;
  put.close();
}

void Assistant::AssistantProfileDataToTXT()
{
  put.open("../AssistantProfileData.txt");
  put << ProfileAssistant.AssistantEmail << endl;
  put << AssistantACCFirstNode->AssistantUsernameNode << endl;
  put << ProfileAssistant.AssistantName << endl;
  put << ProfileAssistant.AssistantAddress << endl;
  put << ProfileAssistant.AssistantPhone;
  put.close();
}

void Assistant::PrintAssistantProfile()
{
  if( rootAssistantData == NULL  )
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

    preOrderAssistantData(rootAssistantData);
  }
}

void Assistant::ShowAssistantName()
{
  cout << "===============================" << endl;
	cout << "|  " << XHead->nama << "  |" <<endl;
	cout << "===============================" << endl;
}

void Assistant::MainMenuAssistant()
{
  if(XHead == NULL)
  {
    InputAssistantBiodata();
    MainMenuAssistant();
  }
  else
  {
    cout << "\n";
    ShowAssistantName();
    do
    {
      main_menu_Assistant:
      cout << "\n";
      cout << "#===============================#" << endl;
      cout << "#      +-----------------+      #" << endl;
      cout << "#      +  MENU ASSISTANT +      #" << endl;
      cout << "#      +-----------------+      #" << endl;
      cout << "#===============================#" << endl;
      cout << "#  1. Pendaftaran Praktikum     #" << endl;
      cout << "#  2. Modul Materi              #" << endl;
      cout << "#  3. Jadwal                    #" << endl;
      // cout << "#  4. Input Nilai Praktikan     #" << endl;
      cout << "#  4. Lihat Profil Asisten      #" << endl;
      cout << "#  0. Keluar                    #" << endl;
      cout << "#===============================#" << endl;
      cout << "  ->  "; cin >> MainMenuAssistantC;
      switch(MainMenuAssistantC)
      {
        case 1:
          AssistantPrakRegistration();
          break;
        case 2:
          AssistantPrakMateri(0);
          break;
        case 3:
          AssistantPrakJadwal();
          break;
        // case 4:
        //   //
        //   break;
        case 4:
          PrintAssistantProfile();
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
          goto main_menu_Assistant;
          break;
      }
    } while(MainMenuAssistantC != 0);
    cout << "\n";
  }
}

void Assistant::AssistantPrakRegistration()
{
  IndexOfPrakCSlot = 1;

  cout << "\n";
  cout << "#===================================#" << endl;
  cout << "#    +-------------------------+    #" << endl;
  cout << "#    +  PENDAFTARAN PRAKTIKUM  +    #" << endl;
  cout << "#    +-------------------------+    #" << endl;
  cout << "#===================================#" << endl;
  cout << "#  1. Pemilihan Mata Praktikum      #" << endl;
  // cout << "#  2. Pembayaran Pendaftaran        #" << endl;
  cout << "#  2. Pemilihan Slot                #" << endl;
  cout << "#  99. Kembali                      #" << endl;
	cout << "=====================================" << endl;
	cout << " ->  "; cin >> PrakRegistryC;
  switch (PrakRegistryC) {
    case 1:
      AssistantPrakCName();
      break;
    // case 2:
    //   PrakPay();
    //   break;
    case 2:
      AssistantPrakCSlot();
      break;
    default:
      AssistantPrakRegistration();
      break;
    }
}

void Assistant::AssistantPrakCList()
{
  Total = 0;
  cout << "Mata Praktikum\t: || ";
  for(i = 0; i < AssistenPrakCNameAmount; i++)
  {
    cout << AssistantPrakC.PrakListC[i] << " || ";
  }
  cout << "\n";
}

void Assistant::AssistantPrakCName()
{
  DestinationPrakCName:
  SizeOfArrayPrakList = sizeof(PrakList.PrakNameList) / sizeof(PrakList.PrakNameList[0]);
  Cname:
  cout << "\n";
  cout << "---|---------------------|---" << endl;
  cout << "   |         ---         |   " << endl;
	cout << "   | PEMILIHAN PRAKTIKUM |   " << endl;
  cout << "   |        ~~~~~        |   " << endl;
	cout << "---|---------------------|---" << endl;
  for(i = 0; i < SizeOfArrayPrakList; i++)
  {
    cout << i + 1 << ". " << PrakList.PrakNameList[i] << endl;
  }
  cout << "\n";
  cout << "++----------------------------------------------++" << endl;
  cout << "+ Masukkan jumlah praktikum yang ingin diambil ->  "; cin >> AssistenPrakCNameAmount;
  //
  DeclareDynimicalArrayAssistantPrakC(AssistenPrakCNameAmount);
  IDeclaringDynamicalArray++;
  //
  for(i = 0; i < AssistenPrakCNameAmount; i++)
  {
    cout << "===============================" << endl;
    for(j = 0; j < SizeOfArrayPrakList; j++)
    {
      cout << j + 1 << ". " << PrakList.PrakNameList[j] << endl;
    }
    cout << "===============================" << endl;
    cout << "Masukkan nomor praktikum ke-" << i + 1 << " yang ingin diambil!\n";
    cout << "===============================" << endl;
    cout << " ->  ";
    cin >> PrakCNameNumber[i];
    AssistantPrakC.PrakListC[i] = PrakList.PrakNameList[PrakCNameNumber[i] - 1];
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
      cout << "----|=============================================|----" << endl;
      cout << "    |            +-------------------+            |" << endl;
      cout << "    |            +  MASUKKAN PILIHAN +            |" << endl;
      cout << "    |            +-------------------+            |" << endl;
      cout << "----|=============================================|----" << endl;
      cout << "    | 1. Lanjut ke pemilihan slot                 |" << endl;
      cout << "    | 2. Lihat Daftar Mata Praktikum Yang DiAmbil |" << endl;
      cout << "    | 9. Kembali ke menu utama                    |" << endl;
      cout << "----|=============================================|----" << endl;
      cout << "    |                                             |" << endl;
      cout << " ->  "; cin >> y_d1;
      switch(y_d1)
      {
        case 1:
          PayingRegistration = false;
          AssistantPrakCSlot();
          break;
        case 2:
          cout << "---|-----------------------------|---" << endl;
          cout << "   |            -----            |   " << endl;
	        cout << "   | MATA PRAKTIKUM YANG DIPILIH |   " << endl;
          cout << "   |          ~~~~~~~~~          |   " << endl;
	        cout << "---|-----------------------------|---" << endl;
          //
          AssistantPrakCList();
          //
          goto y_done;
          break;
        case 9:
          MainMenuAssistant();
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
    else if(d1 == 'N' || d1 == 'n')
    {
      n_done:
      cout << "     |===============================|" << endl;
      cout << "     |                               | " << endl;
      cout << "=====| 1. Ulangi pemilihan praktikum |=====" << endl;
      cout << "=====| 2. Kembali ke menu utama      |=====" << endl;
      cout << "     |                               | " << endl;
      cout << "     |===============================|" << endl;
      cout << " ->  "; cin >> y_d1;
      switch(y_d1)
      {
        case 1:
          goto Cname;
          break;
        case 2:
          MainMenuAssistant();
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
    cout << "\n";
    cout << "     |============================|" << endl;
    cout << "----->       Masukan Salah!!      <-----" << endl;
    cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
    cout << "     |============================|" << endl;
    cout << "\n";
    goto bfore_done;
  }
}

void Assistant::PrakPay()
{
  if(PayingRegistration == false)
  {
    cout << "\n";
    cout << "#====================================#" << endl;
    cout << "#    +--------------------------+    #" << endl;
    cout << "#    +  PEMBAYARAN PENDAFTARAN  +    #" << endl;
    cout << "#    +--------------------------+    #" << endl;
    cout << "#====================================#" << endl;
    //
    AssistantPrakCList();
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
    if(d2 == 'Y' || d2 == 'y')
    {
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
      switch (PrintStructOrN)
      {
      case 1:
        PrakInvoice();
        InvoiceToStructTXT();
        break;
      case 9:
        MainMenuAssistant();
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
    }
    else
    {
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
    if(IDeclaringDynamicalArray == 0)
    {
      //
      DeclareDynimicalArrayAssistantPrakC(AssistenPrakCNameAmount);
      IDeclaringDynamicalArray++;
      //
      if(AssistantPrakC.PrakListC[0].empty())
      {
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
        switch(PayingRegistrationC)
        {
          case 9:
            AssistantPrakRegistration();
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
        switch(PayingRegistrationC)
        {
          case 1:
            PrakInvoice();
            MainMenuAssistant();
            break;
          case 9:
            AssistantPrakRegistration();
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
      if(AssistantPrakC.PrakListC[0].empty())
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
        switch(PayingRegistrationC)
        {
          case 9:
            AssistantPrakRegistration();
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
        switch(PayingRegistrationC)
        {
          case 1:
            PrakInvoice();
            MainMenuAssistant();
            break;
          case 9:
            AssistantPrakRegistration();
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

void Assistant::DeclareDynimicalArrayAssistantPrakC(int x)
{
  AssistantPrakC.PrakListC = new string[x];
}

int Assistant::PrakTotal(int b)
{
  if(b < 0)
  {
    return 0;
  }
  else
  {
    return PrakTotal(b - 1);
  }
}

void Assistant::PrakInvoice()
{
	cout << "\n\n#=============================#" << endl;
  cout << "#    +-------------------+    #" << endl;
  cout << "#    +      INVOICE      +    #" << endl;
  cout << "#    +-------------------+    #" << endl;
  cout << "#=============================#" << endl;
	cout << "Mata Praktikum\t\t:  ||  ";
  for(i = 0; i < AssistenPrakCNameAmount; i++)
  {
    cout << AssistantPrakC.PrakListC[i] << " || ";
  }

  cout << "\n";
  
  cout << "===================================" << endl;
  cout << "\n\t\tTerima Kasih!\t\t" << endl;
}

void Assistant::AssistantPrakCSlot()
{
  if( IDeclaringDynamicalArray == 0  )
  {
    //
    // DeclareDynimicalArrayAssistantPrakC(AssistenPrakCNameAmount);
    //
    if( IDeclaringDynamicalArray != 0  )
    {
      do {
        cout << "\n";
        cout << "#====================================#" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#    +      PEMILIHAN SLOT      +    #" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#====================================#" << endl;
        cout << "Mata Praktikum\t:" << endl;
        for(i = 0; i < AssistenPrakCNameAmount; i++)
        {
          cout << i + 1 << ". " << AssistantPrakC.PrakListC[i] << endl;
        }
        cout << "\n";
        cout << "=============================================" << endl;
        cout << "|           Masukan Nomor Praktikum         |" << endl;
        cout << "|              Untuk Pilih Slot             |" << endl;
        cout << "|                    ...                    |" << endl;
        cout << "=============================================" << endl;
        cout << " ->  "; cin >> PrakCSlotC;
        AssistantPrakCSlotList(PrakCSlotC - 1);
        AssistantPrakCSlot();
      } while(PrakCSlotC == i);
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
      AssistantPrakRegistration();
    }
  }

  else
  {
    if( !(AssistantPrakC.PrakListC[0].empty())  )
    {
      do {
        cout << "\n";
        cout << "#====================================#" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#    +      PEMILIHAN SLOT      +    #" << endl;
        cout << "#    +--------------------------+    #" << endl;
        cout << "#====================================#" << endl;
        cout << "Mata Praktikum\t:" << endl;
        for(i = 0; i < AssistenPrakCNameAmount; i++)
        {
          cout << i + 1 << ". " << AssistantPrakC.PrakListC[i] << endl;
        }
        cout << "\n";
        cout << "=============================================" << endl;
        cout << "|           Masukan Nomor Praktikum         |" << endl;
        cout << "|              Untuk Pilih Slot             |" << endl;
        cout << "|                    ...                    |" << endl;
        cout << "=============================================" << endl;
        cout << " ->  ";
        cin >> PrakCSlotC;
        AssistantPrakCSlotList(PrakCSlotC - 1);
      } while(AssistantMenuC != 0);
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
      AssistantPrakRegistration();
    }
  }
}

void Assistant::AssistantPrakCSlotList(int x)
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

  SizeOfArraySlotLogika =  sizeof(DayAndTimeSlot.LogikaDayAndTime) /
                          sizeof(DayAndTimeSlot.LogikaDayAndTime[0]);

  SizeOfArraySlotDSK = sizeof(DayAndTimeSlot.DSKDayAndTime) /
                          sizeof(DayAndTimeSlot.DSKDayAndTime[0]);

  SizeOfArraySlotAlpro = sizeof(DayAndTimeSlot.AlproDayAndTime) /
                              sizeof(DayAndTimeSlot.AlproDayAndTime[0]);

  SizeOfArraySlotPweb = sizeof(DayAndTimeSlot.PWEBDayAndTime) /
                      sizeof(DayAndTimeSlot.PWEBDayAndTime[0]);

  SizeOfArraySlotMatdis =  sizeof(DayAndTimeSlot.MatdisDayAndTime) /
                        sizeof(DayAndTimeSlot.MatdisDayAndTime[0]);

  cout << "\n";
  cout << "==================================" << endl;
  cout << "|                                |" << endl;
  cout << "|   ~~~ SLOT YANG TERSEDIA ~~~   |" << endl;
  cout << "|                                |" << endl;
  cout << "==================================" << endl;

  if(AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[0])
  {
    for(i = 0; i < SizeOfArraySlotSData; i++)
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

    for(i = 0; i < SizeOfArraySlotSData; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] = AssistantPrakC.PrakListC[x] + SplitterColon + DayAndTimeSlot.SDataDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if(AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[1])
  {
    for(i = 0; i < SizeOfArraySlotBasDat; i++)
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

    for(i = 0; i < SizeOfArraySlotBasDat; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] =  AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.BasDatDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if(AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[2])
  {
    for(i = 0; i < SizeOfArraySlotStatistika; i++)
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

    for(i = 0; i < SizeOfArraySlotStatistika; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] =  AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.StatistikaDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if(AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[3])
  {
    for(i = 0; i < SizeOfArraySlotSO; i++)
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

    for(i = 0; i < SizeOfArraySlotSO; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] =  AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.SODayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if(AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[4])
  {
    for(i = 0; i < SizeOfArraySlotPBO; i++)
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

    for(i = 0; i < SizeOfArraySlotPBO; i++)
    {
      if(PrakSchedule.jadwal[i].empty())
      {
        PrakSchedule.jadwal[i] =  AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.PBODayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[5])
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
        PrakSchedule.jadwal[i] = AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.DDPDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[6])
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
        PrakSchedule.jadwal[i] = AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.LogikaDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[7])
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
        PrakSchedule.jadwal[i] = AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.DSKDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[8])
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
        PrakSchedule.jadwal[i] = AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.AlproDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[9])
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
        PrakSchedule.jadwal[i] = AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.PWEBDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }

  else if (AssistantPrakC.PrakListC[x] == PrakList.PrakNameList[10])
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
        PrakSchedule.jadwal[i] = AssistantPrakC.PrakListC[x] +
                                  SplitterColon +
                                  DayAndTimeSlot.MatdisDayAndTime[PrakCSlotC2 - 1];
        break;
      }
    }

    MenuAfterPrakCSlot(x);
  }
}

void Assistant::MenuAfterPrakCSlot(int x)
{
  if(IndexOfPrakCSlot != AssistenPrakCNameAmount)
  {
    cout << "\n";
    cout << "Selesai? (Y/N)\n";
    cout << " ->  ";
    cin >> d1;
    if(d1 == 'Y' || d1 == 'y')
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
      switch(y_d1)
      {
        case 1:
          AssistantPrakCSlot();
          break;
        case 2:
          AssistantPrakJadwal();
        case 9:
          AssistantPrakCSlotList(x);
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
          AssistantPrakCSlotList(x);
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
      AssistantPrakCSlotList(x);
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
          AssistantPrakJadwal();
        case 9:
          AssistantPrakCSlotList(x);
          break;
        case 0:
          MainMenuAssistant();
          break;
        default:
          cout << "\n";
          cout << "     |============================|" << endl;
          cout << "----->       Masukan Salah!!      <-----" << endl;
          cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
          cout << "     |============================|" << endl;
          cout << "\n";
          AssistantPrakCSlotList(x);
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
      AssistantPrakCSlotList(x);
    }
  }
}

void Assistant::AssistantPrakMateri(int x)
{
aspmat:
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
    cin >> aspmat;

    switch (aspmat) {
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
      AssistantPrakMateri(1);
      break;
    case 4:
      AssistantPrakMateri(4);
      break;
    case 99:
      MainMenuAssistant();
      break;
    default:
      cout << "\n";
      cout << "     |============================|" << endl;
      cout << "----->       Masukan Salah!!      <-----" << endl;
      cout << "----->   Harap Ulangi Kembali!!   <-----" << endl;
      cout << "     |============================|" << endl;
      cout << "\n";
      AssistantPrakMateri(x);
      break;
    }
  } while (aspmat != 0);
  
}

void Assistant::DownloadMateriAssistant(int x)
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
    TempDownloadModulMateriAsisten = AssistantTail;
    if (DownloadMateriC == 1) {
      cout << "\n";
      cout << "===============================" << endl;
      cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
      cout << "===============================" << endl;
      cout << "\n";
    }

    else {
      for (i = 0; i < DownloadMateriC; i++) {
        if (i == DownloadMateriC - 1) {
          cout << "\n";
          cout << "===============================" << endl;
          cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
          cout << "===============================" << endl;
          cout << "\n";
        }
        cout << TempDownloadModulMateriAsisten->MateriName << endl;
        TempDownloadModulMateriAsisten = TempDownloadModulMateriAsisten->prev;
      }
    }
  }

  else {
    TempDownloadModulMateriAsisten = AssistantHead;
    if (DownloadMateriC == 1) {
      cout << "\n";
      cout << "===============================" << endl;
      cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
      cout << "===============================" << endl;
      cout << "\n";
    }

    else {
      for (i = 0; i < DownloadMateriC; i++) {
        if (i == DownloadMateriC - 1) {
          cout << "\n";
          cout << "===============================" << endl;
          cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
          cout << "===============================" << endl;
          cout << "\n";
        }
        cout << TempDownloadModulMateriAsisten->MateriName << endl;
        TempDownloadModulMateriAsisten = TempDownloadModulMateriAsisten->next;
      }
    }
  }
}

void Assistant::DeclareMateri()
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

  Top = 11;
}

void Assistant::DownloadMateri(int x)
{
  do
  {
    DLMateri:
    PrintMateri(x);
    cout << "#==================================#" << endl;
    cout << "#      +-------------------+       #" << endl;
    cout << "#      +  MASUKKAN PILIHAN +       #" << endl;
    cout << "#      +-------------------+       #" << endl;
    cout << "#==================================#" << endl;
    cout << "#  9. Cetak Modul Descending       #" << endl;
    cout << "#  0. Kembali                      #" << endl;
    cout << "===================================#" << endl;
    cout << "Masukkan modul yang ingin diunduh!\n";
    cout << " ->  ";
    cin >> DownloadMateriC;

    if(DownloadMateriC == 0 || DownloadMateriC == 9)
    {
      switch(DownloadMateriC)
      {
      case 0:
        MainMenuAssistant();
        break;
      case 9:
        AssistantPrakMateri(9);
        break;
      default:
        goto DLMateri;
        break;
      }
    }

    else if(x == 9)
    {
      TempDownloadModulMateriAsisten = AssistantTail;
      if(DownloadMateriC == 1)
      {
        cout << "\n";
        cout << "===============================" << endl;
        cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
        cout << "===============================" << endl;
        cout << "\n";
      }

      else if(DownloadMateriC == Top)
      {
        TempDownloadModulMateriAsisten = AssistantTail;
        cout << "\n";
        cout << "===============================" << endl;
        cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
        cout << "===============================" << endl;
        cout << "\n";
      }

      else
      {
        for(i = 0; i < DownloadMateriC; i++)
        {
          if(i == DownloadMateriC - 1)
          {
            cout << "\n";
            cout << "===============================" << endl;
            cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
            cout << "===============================" << endl;
            cout << "\n";
          }
          TempDownloadModulMateriAsisten = TempDownloadModulMateriAsisten->prev;
        }
      }
    }

    else
    {
      TempDownloadModulMateriAsisten = AssistantHead;
      if(DownloadMateriC == 1)
      {
        cout << "\n";
        cout << "===============================" << endl;
        cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
        cout << "===============================" << endl;
        cout << "\n";
      }

      else
      {
        for(i = 0; i < DownloadMateriC; i++)
        {
          if(i == DownloadMateriC - 1)
          {
            cout << "\n";
            cout << "===============================" << endl;
            cout << TempDownloadModulMateriAsisten->MateriName << " Berhasil DiUnduh" << endl;
            cout << "===============================" << endl;
            cout << "\n";
          }
          TempDownloadModulMateriAsisten = TempDownloadModulMateriAsisten->next;
        }
      }
    }
  } while(DownloadMateriC != 0);
}

void Assistant::PrintMateri(int x)
{
  if (x == 4)
  {
    DeclareMateri();
    if (head == NULL) {
      cout << "\n";

      MainMenuAssistant();
    }

    else
    {
      i = 1;
      Check = tail;
      while (Check != NULL)
      {
        cout << i << ". " << Check->MateriName << endl;
        Check = Check->prev;
        i++;
      }
    }
  }

  else
  {
    DeclareMateri();
    if (head == NULL)
    {
      cout << "\n";
      
      MainMenuAssistant();
    }

    else
    {
      i = 1;
      Check = head;
      while (Check != NULL)
      {
        cout << i << ". " << Check->MateriName << endl;
        Check = Check->next;
        i++;
      }
    }
  }
}

void Assistant::DlFromSM(string x)
{
  cout << "\n";
  cout << "      |                |      " << endl;
  cout << "------+================+------" << endl;
  cout << x << " Berhasil DiUnduh" << endl;
  cout << "------+================+------" << endl;
  cout << "      |                |      " << endl;
  cout << "\n";
}

void Assistant::SearchMateri()
{
  DeclareMateri();
  if (head == NULL) {
    cout << endl;
    
    MainMenuAssistant();
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
    assmatT:
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
      cin >> assmat;

      switch (assmat) {
      case 1:
        DlFromSM(SearchTemp);
        break;
      case 2:
        SearchMateri();
        break;
      case 99:
        AssistantPrakMateri(1);
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
        goto assmatT;
        break;
      }
    }

    else {
      cout << "\n";
      cout << "     |=============================|" << endl;
      cout << "----->    Modul Tidak Ditemukan    <-----" << endl;
      cout << "----->>>>>>>>>>>>>>><<<<<<<<<<<<<<<-----" << endl;
      cout << "     |=============================|" << endl;
    assmat:
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
      cin >> assmat;

      switch (assmat) {
      case 1:
        SearchMateri();
        break;
      case 99:
        AssistantPrakMateri(1);
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
        goto assmat;
        break;
      }
    }
  }
}

void Assistant::AssistantPrakJadwal()
{
  if(PrakSchedule.jadwal[0].empty())
  {
    cout << "\n";
    cout << "     |=============================|" << endl;
    cout << "----->     Jadwal Masih Kosong     <-----" << endl;
    cout << "----->>>>>>>>>>>>>>><<<<<<<<<<<<<<<-----" << endl;
    cout << "     |=============================|" << endl;
    MainMenuAssistant();
  }
  else
  {
    SizeOfPrakSchedule = sizeof(PrakSchedule.jadwal) / sizeof(PrakSchedule.jadwal[0]);
    cout << "\n";
    cout << "+====================================+" << endl;
    cout << "|    +--------------------------+    |" << endl;
    cout << "|    +          JADWAL          +    |" << endl;
    cout << "|    +--------------------------+    |" << endl;
    cout << "+====================================+" << endl;
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
    AssistantPrakScheduleToTXT();
    cout << "\n";
    MainMenuAssistant();
  }
}

void Assistant::AssistantPrakScheduleToTXT()
{
  put.open("../AssistantSchedule.txt");
  put << "+====================================+" << endl;
  put << "|    +--------------------------+    |" << endl;
  put << "|    +          JADWAL          +    |" << endl;
  put << "|    +--------------------------+    |" << endl;
  put << "+====================================+" << endl;
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

void Assistant::AssistantPrakScheduleDataToTXT()
{
  put.open("../AssistantScheduleData.txt");
  for(i = 0; i < SizeOfPrakSchedule; i++)
  {
    if(!PrakSchedule.jadwal[i].empty())
    {
      put << PrakSchedule.jadwal[i] << endl;
    }
    else
    {
      break;
    }
  }
  put.close();
}

void Assistant::InvoiceToStructTXT()
{
  put.open("../AssistenStruct.txt");
  put << "#=====================================#" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#        $$     INVOICE     $$        #" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#=====================================#" << endl;
	put << "Mata Praktikum\t:  || ";
  for(i = 0; i < AssistenPrakCNameAmount; i++)
  {
    put << AssistantPrakC.PrakListC[i] << " || ";
  }

  put << "\n";
  put.close();
}

Assistant Z;

#endif