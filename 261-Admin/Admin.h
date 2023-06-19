#ifndef ADMIN_H_
#define ADMIN_H_
// #pragma once

#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>
#include <cstdlib>
#define MaxMateri 10
#define IndexManMat 1

using namespace std;

const int MaxQueue = 10;

class Admin
{
	public:
    Admin();
    void AdminMenu();
    void AdminRegistryACC();
    void AdminProfileToTXT();
    void AdminProfileDataToTXT();
		void LoginAsAdmin();
    void ProfileAuthor();
    void MainMenuAdmin();
    void PrakManagement();
    void ManagementPraktikum();
    void UserProfile();
    void ShowUserProfile();
    void ShowUserSchedule();
    void PrintUserProfile();
    void PrintAssistantProfile();
    void UserProfileDataFromTXT();
    void UserScheduleDataFromTXT();
    void AssistantProfile();
    void ShowAssistantProfile();
    void AssistantProfileDataFromTXT();
    void ListOfPrak();
    void PrintPrakList();
    void EditPrakList();
    void MenuAddMateri(int);
    void MenuDeleteMateri(int);
    void ManagementMateri(int);
    void DeclareFirstMateri();
    void DownloadMateri(int);
    void AddAmountMateri();
    void AddMateri(int);
    bool MateriIsFull();
    bool MateriIsEmpty();
    void CountPushMateri(int);
    void PushMateri(int);
    void PushMoreThanOneMateri(int);
    void PopMateri(int);
    void AddMateri2();
    void DeleteMateri(int);
    void PrintMateri(int);
    void PrintMateriDescending(int);
    void PrintStackMateri(int);
    void DeclareFirstQueue();
    void DeclareNextQueue();
    void Enqueue(string);
    void Dequeue();
    bool QueueIsFull();
    bool QueueIsEmpty();
    void PrintQueue();
    void TempMenu();
    void PriorityEnqueue(int);
    void PriorityDequeue(int);
    void MinimumPriorityDequeue(int);
    void MaximumPriorityDequeue(int);
    bool PriorityQueueIsFull();
    bool PriorityQueueIsEmpty();
    void PrintPriorityQueue(int);
    void MenuPriorityQueue(int);
  
		void proses();

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
            "Algoritma Pemrograman",
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

      string DDPDayAndTime[10] =
      {

      };
    }DayAndTimeSlot;

	private:
    int FirstMenuC;
    int MenuC;
    int SizeOfArrayPrakList;
    int PrakManagementC;
    int ManagementPraktikumC;
    int EditPrakListC;
    int UserProfileC;
    int AssistantProfileC;
    int MateriC;
    int DownloadMateriC;
    int AmountAddMateri;
    int DeleteMateriC;
		int PayTotal;
    bool IndexOfDeclaringFM = false;
    int ptr;
		int pay;
		int chance;
    int i;
    int j;
    int k;
    bool HeadIsNULL = false;
    int Top = 0;
    int front = 0;
    int back = 0;
    int rear = 0;
    string QueueMateri[MaxQueue];
    int CountPM;
    int qc;
    int pdq;
    int mpq;
    int mamc;
    int mdmc;
    int AdminMenuC;
    char AdminRegistryToSignUp;
    string InputData;
    ifstream take;
    string AdminUsername = "admin";
    string AdminPassword = "admin";
    string username;
    string password;
    string UserUsername[100];
    string UserName[100];
    string UserAddress[100];
    string UserPhone[100];
    string AssistantUsername[100];
    string AssistantName[100];
    string AssistantAddress[100];
    string AssistantPhone[100];
};

string UserDataProfile[100];
string AssistDataProfile[100];

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

struct AdminACC
{
  string username;
  string password;
  AdminACC* next;
};

AdminACC* one = new AdminACC;
AdminACC* headAdminACC = new AdminACC;
AdminACC* tailAdminACC = new AdminACC;

struct AdminProfile
  {
    string AdminEmail;
    string AdminUsername;
    string AdminPassword;
    string AdminName;
    string AdminAddress;
    string AdminPhone;
  };

AdminProfile admProfile;

class Login
{
  public:
    string user;
    string pass;
    int *next;
};

class MateriNode
{
  public :
    string MateriName;
    MateriNode *next;
    MateriNode *prev;
};

MateriNode *head = new MateriNode;
MateriNode *SData = new MateriNode;
MateriNode *BasDat = new MateriNode;
MateriNode *Statistika = new MateriNode;
MateriNode *SO = new MateriNode;
MateriNode *PBO = new MateriNode;
MateriNode *DDP = new MateriNode;
MateriNode *Logika = new MateriNode;
MateriNode *DSK = new MateriNode;
MateriNode *Alpro = new MateriNode;
MateriNode *Pweb = new MateriNode;
MateriNode *Matdis = new MateriNode;
MateriNode *tail = new MateriNode;
MateriNode *Check = new MateriNode;
MateriNode *TempDownloadMateri = new MateriNode;
MateriNode *TempDeleteMateriA = new MateriNode;
MateriNode *TempDeleteMateriB = new MateriNode;
MateriNode *TempDeleteMateriC = new MateriNode;

class adminData 
{ 
  public:
    int key; 
    adminData *left; 
    adminData *right; 
    int height;

    string username;
    string password;
    string email;
    string nama;
    string alamat;
    string notelp;
};

adminData *rootAdminData = NULL;
static int xxx = 1;

int maxAdminData(int a, int b);
int height(adminData *N);
adminData* newAdminData(  int key,
                        string username,
                        string password,
                        string email,
                        string nama,
                        string alamat,
                        string notelp  );
adminData *rightRotate(adminData *y);
adminData *leftRotate(adminData *x);
int getBalance(adminData *N);
adminData* insert(  adminData* node,
                    int key,
                    string username,
                    string password,
                    string email,
                    string nama,
                    string alamat,
                    string notelp );
adminData * minValueAdminData(adminData* node);
adminData* deleteAdminData(adminData* root, int key);
void preOrderAdminData(adminData *root);

int height(adminData *N)
{
	if (N == NULL)
		return 0;
	return N->height;
}

int maxAdminData(int a, int b)
{
	return (a > b)? a : b;
}

adminData* newAdminData(  int key,
                        string username,
                        string password,
                        string email,
                        string nama,
                        string alamat,
                        string notelp  )
{
	adminData* node = new adminData();
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

adminData *rightRotate(adminData *y)
{
	adminData *x = y->left;
	adminData *T2 = x->right;

	x->right = y;
	y->left = T2;

	y->height = maxAdminData(height(y->left),
					height(y->right)) + 1;
	x->height = maxAdminData(height(x->left),
					height(x->right)) + 1;

	return x;
}

adminData *leftRotate(adminData *x)
{
	adminData *y = x->right;
	adminData *T2 = y->left;

	y->left = x;
	x->right = T2;

	x->height = maxAdminData(height(x->left),
					height(x->right)) + 1;
	y->height = maxAdminData(height(y->left),
					height(y->right)) + 1;

	return y;
}

int getBalance(adminData *N)
{
	if (N == NULL)
		return 0;
	return height(N->left) -
		height(N->right);
}

adminData* insert(  adminData* node,
                    int key,
                    string username,
                    string password,
                    string email,
                    string nama,
                    string alamat,
                    string notelp )
{
	if (node == NULL)
		return(newAdminData(  key,
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

	node->height = 1 + maxAdminData(height(node->left),
						height(node->right));

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

adminData * minValueAdminData(adminData* node)
{
	adminData* current = node;

	while (current->left != NULL)
		current = current->left;

	return current;
}

adminData* deleteAdminData(adminData* root, int key)
{
	
	if (root == NULL)
		return root;

	if ( key < root->key )
		root->left = deleteAdminData(root->left, key);

	else if( key > root->key )
		root->right = deleteAdminData(root->right, key);

	else
	{
		if( (root->left == NULL) ||
			(root->right == NULL) )
		{
			adminData *temp = root->left ?
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
			adminData* temp = minValueAdminData(root->right);

			root->key = temp->key;

			root->right = deleteAdminData(root->right,
									temp->key);
		}
	}

	if (root == NULL)
	return root;

	root->height = 1 + maxAdminData(height(root->left),
						height(root->right));

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

void preOrderAdminData(adminData *root)
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
		preOrderAdminData(root->left);
		preOrderAdminData(root->right);
	}
}

void dumpAdminData()
{
  rootAdminData = insert( rootAdminData,
                          xxx,
                          "261",
                          "ael",
                          "fadel2100018261@webmail.uad.ac.id",
                          "Fadel Afan Mahendra",
                          "Yogyakarta",
                          "0821"  );
  xxx++;

  rootAdminData = insert( rootAdminData,
                          xxx,
                          "269",
                          "puspa",
                          "puspa2100018269@webmail.uad.ac.id",
                          "Puspa Zahara",
                          "Yogyakarta",
                          "0821"  );
  xxx++;

  rootAdminData = insert( rootAdminData,
                          xxx,
                          "271",
                          "hervia",
                          "hervia2100018271@webmail.uad.ac.id",
                          "Hervia Salsabila",
                          "Yogyakarta",
                          "0821"  );
  xxx++;
}

void dumpin()
{
  dumpAdminData();
  
    cout << "#=====================================#" << endl;
    cout << "#        ---------------------        #" << endl;
    cout << "#        $$  PROFIL ADMIN  $$         #" << endl;
    cout << "#        ---------------------        #" << endl;
    cout << "#=====================================#" << endl;

  preOrderAdminData(rootAdminData);
}

Admin::Admin()
{
  dumpAdminData();

  for(i = 0; i < 100; i++) {
    UserDataProfile[i] = "";
    AssistDataProfile[i] = "";
  }
}

void Admin::AdminMenu()
{
  do
  {
    cout << "#===============================#" << endl;
    cout << "#    |---------------------|    #" << endl;
    cout << "#    |     MENU ADMIN      |    #" << endl;
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
    cout << "  Pilihan -> ";
    cin >> AdminMenuC;

    switch (AdminMenuC)
    {
      case 1:
        LoginAsAdmin();
        break;
      case 2:
        AdminRegistryACC();
        break;
      case 0:
        exit(0);
      default:
        break;
    }
  } while (AdminMenuC != 0);
}

void Admin::AdminRegistryACC()
{
  system("clear");
  cout << "|===================================|" << endl;
  cout << "|            -----------            |" << endl;
  cout << "|          | PENDAFTARAN |          |" << endl;
  cout << "|         |  AKUN ADMIN   |         |" << endl;
  cout << "|        ~~~~~~~~~~~~~~~~~~~        |" << endl;
  cout << "|===================================|" << endl;
  cout << " E-Mail\t: ";
  cin >> admProfile.AdminEmail;
  cout << " Nama Pengguna\t: ";
  cin >> one->username;
  cout << " Sandi\t: ";
  cin >> one->password;
  cin.ignore();
  cout << " Nama\t: ";
  getline(cin, admProfile.AdminName);
  cout << " Alamat\t: ";
  getline(cin, admProfile.AdminAddress);
  cout << " No. Telepon\t: ";
  cin >> admProfile.AdminPhone;
  cout << "====================================" << endl;

  one->next = NULL;
  headAdminACC = one;
  tailAdminACC = one;

admmn:
  cout << "\n";
  cout << "     |==========================|" << endl;
  cout << "     |           ---            |" << endl;
  cout << "-----> Ketik Y untuk mendaftar! <-----" << endl;
  cout << "     |        .........         |" << endl;
  cout << "     |==========================|" << endl;
  cout << "\n";
  cout << " ->  ";
  cin >> AdminRegistryToSignUp;

  if (  AdminRegistryToSignUp == 'Y' ||
        AdminRegistryToSignUp == 'y' )
  {
    system("clear");

    rootAdminData = insert( rootAdminData,
                            xxx,
                            one->username,
                            one->password,
                            admProfile.AdminEmail,
                            admProfile.AdminName,
                            admProfile.AdminAddress,
                            admProfile.AdminPhone );
    xxx++;

    cout << "\n";
    cout << "|===========================================|\n";
    cout << "|                     |                     |" << endl;
    cout << "|            Berhasil Mendaftar!            |" << endl;
    cout << "|---------Kembali ke halaman awal!----------|" << endl;
    cout << "|                     |                     |" << endl;
    cout << "|===========================================|" << endl;
    cout << "\n";

    AdminProfileToTXT();
    AdminProfileDataToTXT();
    AdminMenu();
  }
  
  else
  {
    system("clear");
    cout << "\n";
    cout << "     |============================|" << endl;
    cout << "----->       Masukan Salah!!      <-----" << endl;
    cout << "----->   Harap Ulang Kembali!!    <-----" << endl;
    cout << "     |============================|" << endl;
    cout << "\n";
    goto admmn;
  }
}

void Admin::AdminProfileToTXT()
{
  ofstream put;
  put.open("../AdminProfile.txt");
  put << "#=====================================#" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#        $$  PROFIL ADMIN  $$         #" << endl;
  put << "#        ---------------------        #" << endl;
  put << "#=====================================#" << endl;
  put << " E-Mail          : " << admProfile.AdminEmail<< endl;
  put << " Nama Pengguna   : " << one->username << endl;
  put << " Nama            : " << admProfile.AdminName << endl;
  put << " Alamat          : " << admProfile.AdminAddress << endl;
  put << " No. Telepon     : " << admProfile.AdminPhone << endl;
  put << "=======================================" << endl;
  put.close();
}

void Admin::AdminProfileDataToTXT()
{
  ofstream put;
  put.open("../AdminProfileData.txt");
  put << admProfile.AdminEmail<< endl;
  put << one->username << endl;
  put << admProfile.AdminName << endl;
  put << admProfile.AdminAddress << endl;
  put << admProfile.AdminPhone;
  put.close();
}

void Admin::LoginAsAdmin()
{
  system("clear");
  Login *LogIn = new Login;
  log_in:
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
  cout << "|  Masukkan nama pengguna  :  ";
  cin >> admProfile.AdminUsername;
  cout << "|  Masukkan sandi  :  ";
  cin >> admProfile.AdminPassword;
	cout << "#------------------------------------------#" << endl;
  LogIn->next = NULL;
  
  AdminACC* check = headAdminACC;
  while(check != NULL)
  {
    if( admProfile.AdminUsername == check->username &&
        admProfile.AdminPassword == check->password  )
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

      MainMenuAdmin();
    }

    else
    {
      system("clear");
      cout << "\n";
      cout << "|===========================================|\n";
      cout << "|                     |                     |" << endl;
      cout << "|    -----------------------------------    |" << endl;
      cout << "|    | Nama Pengguna atau Sandi Salah! |    |" << endl;
      cout << "|-----|   Harap inputkan yang benar   |-----|" << endl;
      cout << "|      -------------------------------      |" << endl;
      cout << "|                     |                     |" << endl;
      cout << "|===========================================|" << endl;
      cout << "\n";

      AdminMenu();
    }

    check = check->next;
  }
}

void Admin::MainMenuAdmin()
{
  do
  {
    main_menu:
    cout << "\n\n";
    cout << "#=======================================#" << endl;
    cout << "#                   |                   #" << endl;
    cout << "#          +-----------------+          #" << endl;
    cout << "#          +       MENU      +          #" << endl;
    cout << "#          +-----------------+          #" << endl;
    cout << "#                   |                   #" << endl;
    cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
    cout << "|                                       |" << endl;
    cout << "|  1. Manajemen Praktikum               |" << endl;
    cout << "|  2. Manajemen Materi                  |" << endl;
    cout << "|  3. Profil                            |" << endl;
    cout << "|  0. Keluar                            |" << endl;
    cout << "|                                       |" << endl;
    cout << "#=======================================#" << endl;
    cout << "  ->  ";
    cin >> MenuC;

    switch(MenuC)
    {
      case 1:
        PrakManagement();
        break;
      case 2:
        ManagementMateri(0);
        break;
      case 3:
        ProfileAuthor();
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
        goto main_menu;
        break;
    }
  } while(MenuC != 0);
}

void Admin::PrakManagement()
{
  prakmanagement:
  cout << "\n\n";
  cout << "#=======================================#" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#      +   MANAJEMEN PRAKTIKUM   +      #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
  cout << "|                                       |" << endl;
  cout << "|  1. Manajemen Praktikum               |" << endl;
  cout << "|  2. Profil Pengguna                   |" << endl;
  cout << "|  3. Profil Asisten                    |" << endl;
  cout << "|  99. Kembali                          |" << endl;
  cout << "|  0. Keluar                            |" << endl;
  cout << "|                                       |" << endl;
  cout << "#=======================================#" << endl;
  cout << "  ->  ";
  cin >> PrakManagementC;
  cout << "+----------------------------------------+" << endl;

  switch(PrakManagementC)
  {
    case 1:
      ManagementPraktikum();
      break;
    case 2:
      UserProfile();
      break;
    case 3:
      AssistantProfile();
      break;
    case 99:
      MainMenuAdmin();
      break;
    case 0:
      exit(1);
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
      goto prakmanagement;
      break;
  }
}

void Admin::ManagementPraktikum()
{
  managementprak:
  cout << "\n";
  cout << "\n";
  cout << "#=======================================#" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#      +   MANAJEMEN PRAKTIKUM   +      #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
  cout << "|                                       |" << endl;
  cout << "|  1. Daftar Mata Praktikum             |" << endl;
  cout << "|  2. Edit Mata Praktikum               |" << endl;
  cout << "|  99. Kembali                          |" << endl;
  cout << "|  0. Keluar                            |" << endl;
  cout << "|                                       |" << endl;
  cout << "#=======================================#" << endl;
  cout << "  ->  ";
  cin >> ManagementPraktikumC;
  cout << "+---------------------------------------+" << endl;

  switch(ManagementPraktikumC)
  {
    case 0:
      exit(0);
      break;
    case 1:
      ListOfPrak();
      break;
    case 2:
      EditPrakList();
      break;
    case 99:
      PrakManagement();
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
      goto managementprak;
      break;
  }
}

void Admin::PrintPrakList()
{
  SizeOfArrayPrakList = sizeof(PrakList.PrakNameList) / sizeof(PrakList.PrakNameList[0]);

  for(i = 0; i < SizeOfArrayPrakList; i++)
  {
    cout << i + 1 << ". "
    << PrakList.PrakNameList[i]   << " || "
    << PrakList.PrakPriceList[i]  << endl;
  }
}

void Admin::ListOfPrak()
{
  cout << "\n";
  cout << "\n";
  cout << "   |                              |   " << endl;
  cout << "===|==============================|===" << endl;
  cout << "   |             -----            |   " << endl;
	cout << "   |     DAFTAR MATA PRAKTIKUM    |   " << endl;
  cout << "   |           ^^^^^^^^^          |   " << endl;
	cout << "===|==============================|===" << endl;
  cout << "   |                              |   " << endl;

  SizeOfArrayPrakList = sizeof(PrakList.PrakNameList) / sizeof(PrakList.PrakNameList[0]);
  for(i = 0; i < SizeOfArrayPrakList; i++)
  {
    cout << i + 1 << ". "
    << PrakList.PrakNameList[i]   << " || "
    << PrakList.PrakPriceList[i]  << endl;
  }

  cout << endl;
  ManagementPraktikum();
}

void Admin::EditPrakList()
{
  editpraklist:
  cout << "\n";
  cout << "\n";
  cout << "   |                              |   " << endl;
  cout << "===|==============================|===" << endl;
  cout << "   |             -----            |   " << endl;
	cout << "   |     DAFTAR MATA PRAKTIKUM    |   " << endl;
  cout << "   |           ^^^^^^^^^          |   " << endl;
	cout << "===|==============================|===" << endl;
  cout << "   |                              |   " << endl;

  SizeOfArrayPrakList = sizeof(PrakList.PrakNameList) / sizeof(PrakList.PrakNameList[0]);
  for(i = 0; i < SizeOfArrayPrakList; i++)
  {
    cout << i + 1 << ". " << PrakList.PrakNameList[i] << " || " << PrakList.PrakPriceList[i] << endl;
  }

  cout << "\n";
  cout << "+=========================================+" << endl;
  cout << "|          .....................          |" << endl;
  cout << "|  1. Tambah Praktikum                    |" << endl;
  cout << "|     (Mata, Harga, dan Slot Praktikum)   |" << endl;
  cout << "|  99. Kembali                            |" << endl;
  cout << "|  0. Keluar                              |" << endl;
  cout << "|          ....................           |" << endl;
  cout << "+=========================================+" << endl;
  cout << " ->  ";
  cin >> EditPrakListC;

  switch(EditPrakListC)
  {
    // case 1:
      // AddPrakCName();
      // break;
    case 99:
      ManagementPraktikum();
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
      goto editpraklist;
      break;
  }
}

void Admin::UserProfile()
{
  userprofile:
  cout << "\n\n";
  cout << "#=======================================#" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#      +     PROFIL PENGGUNA     +      #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
  cout << "|                                       |" << endl;
  cout << "|  1. Lihat Profil                      |" << endl;
  // cout << "|  2. Lihat Detail Praktikum             |" << endl;
  cout << "|  9. Kembali                           |" << endl;
  cout << "|  0. Keluar                            |" << endl;
  cout << "|                                       |" << endl;
  cout << "#=======================================#" << endl;
  cout << "  ->  ";
  cin >> UserProfileC;
  cout << "+----------------------------------------+" << endl;

  switch(UserProfileC)
  {
    case 1:
      PrintUserProfile();
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
      goto userprofile;
      break;
  }
}

void Admin::ShowUserProfile()
{
  UserProfileDataFromTXT();

  cout << "\n";
  cout << "#=======================================#" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#      +     PROFIL PENGGUNA     +      #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
  i = 0;

  while(!(
    UserUsername[i].empty() &&
    UserName[i].empty() &&
    UserAddress[i].empty() &&
    UserPhone[i].empty()
  ))

  {
    cout << "|  Username : " << UserUsername[i] << endl;
    cout << "|  Nama\t: " << UserName[i] << endl;
    cout << "|  Alamat\t: " << UserAddress[i] << endl;
    cout << "|  No. Telepon : " << UserPhone[i] << endl;
    i++;
  }
  cout << "+--------------------------------------+" << endl;
}

void Admin::PrintUserProfile() {
  // if( rootUserData == NULL  )
  // {
  //   cout << "\n";
  //   cout << "#=====================================#" << endl;
  //   cout << "#        ---------------------        #" << endl;
  //   cout << "#      $$  DATA MASIH KOSONG  $$      #" << endl;
  //   cout << "#        ---------------------        #" << endl;
  //   cout << "#=====================================#" << endl;

  //   cout << endl;
  //   PrakManagement();
  // }

  // else
  // {
    take.open("UserProfile.txt");
    i = 0;
    while(!take.eof()) {
      getline(take, UserDataProfile[i]);
      i++;
    }
    cout << "\n";
    // cout << "#=====================================#" << endl;
    // cout << "#        ---------------------        #" << endl;
    // cout << "#        $$ PROFIL PENGGUNA $$        #" << endl;
    // cout << "#        ---------------------        #" << endl;
    // cout << "#=====================================#" << endl;

    for(i = 0; i < 100; i++) {
      if(UserDataProfile[i] != "") {
        cout << UserDataProfile[i] << endl;
      }
      else {
        break;
      }
    }
    cout << endl;
    PrakManagement();
  // }
}

void Admin::PrintAssistantProfile() {
  take.open("AssistantProfile.txt");
  i = 0;
  while(!take.eof()) {
    getline(take, AssistDataProfile[i]);
    i++;
  }
  cout << "\n";
  // cout << "#=====================================#" << endl;
  // cout << "#        ---------------------        #" << endl;
  // cout << "#        $$  PROFIL ASISTEN $$        #" << endl;
  // cout << "#        ---------------------        #" << endl;
  // cout << "#=====================================#" << endl;

  for(i = 0; i < 100; i++) {
    if(AssistDataProfile[i] != "") {
      cout << AssistDataProfile[i] << endl;
    }
    else {
      break;
    }
  }
  cout << endl;
  PrakManagement();
}

void Admin::UserProfileDataFromTXT()
{
  i = 0;
  take.open("../UserProfileData.txt");

  while(!(take.eof()))
  {
    take >> UserUsername[i];
    take >> UserName[i];
    take >> UserAddress[i];
    take >> UserPhone[i];
    i++;
  }

  take.close();
}

void Admin::ShowUserSchedule()
{
  UserScheduleDataFromTXT();

  cout << "\n";
  cout << "#=======================================#" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#      +     JADWAL PENGGUNA     +      #" << endl;
  cout << "#      +-------------------------+      #" << endl;
  cout << "#                   |                   #" << endl;
  cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;

  i = 0;

  while(!(
    UserUsername[i].empty() &&
    UserName[i].empty() &&
    UserAddress[i].empty() &&
    UserPhone[i].empty()
  ))

  {
    cout << "|  Username : " << UserUsername[i] << endl;
    cout << "|  Nama\t: " << UserName[i] << endl;
    cout << "|  Alamat\t: " << UserAddress[i] << endl;
    cout << "|  No. Telepon : " << UserPhone[i] << endl;
    i++;
  }
  cout << "+----------------------------------------+" << endl;
}

void Admin::UserScheduleDataFromTXT()
{
  i = 0;
  take.open("../UserScheduleData.txt");

  while(!(take.eof()))
  {
    take >> UserUsername[i];
    take >> UserName[i];
    take >> UserAddress[i];
    take >> UserPhone[i];
    i++;
  }

  take.close();
}

void Admin::AssistantProfile()
{
  assistantprofile:
  cout << "\n\n";
  cout << "#========================================#" << endl;
  cout << "#                   |                    #" << endl;
  cout << "#      +--------------------------+      #" << endl;
  cout << "#      +      PROFIL ASISTEN      +      #" << endl;
  cout << "#      +--------------------------+      #" << endl;
  cout << "#                   |                    #" << endl;
  cout << "#~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~#" << endl;
  cout << "|                                        |" << endl;
  cout << "|  1. Lihat Profil                       |" << endl;
  // cout << "|  2. Lihat Detail Praktikum             |" << endl;
  cout << "|  9. Kembali                            |" << endl;
  cout << "|  0. Keluar                             |" << endl;
  cout << "|                                        |" << endl;
  cout << "#========================================#" << endl;
  cout << "  ->  ";
  cin >> AssistantProfileC;
  cout << "+----------------------------------------+" << endl;

  switch(AssistantProfileC)
  {
    case 1:
      PrintAssistantProfile();
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
      goto assistantprofile;
      break;
  }
}

void Admin::AssistantProfileDataFromTXT()
{
  i = 0;
  take.open("../AssistantProfileData.txt");

  while(!(take.eof()))
  {
    take >> AssistantUsername[i];
    take >> AssistantName[i];
    take >> AssistantAddress[i];
    take >> AssistantPhone[i];
    i++;
  }

  take.close();
}

void Admin::ShowAssistantProfile()
{
  AssistantProfileDataFromTXT();

  cout << "\n";
  cout << "#========================================#" << endl;
  cout << "#                   |                    #" << endl;
  cout << "#      +--------------------------+      #" << endl;
  cout << "#      +      PROFIL ASISTEN      +      #" << endl;
  cout << "#      +--------------------------+      #" << endl;
  cout << "#                   |                    #" << endl;
  cout << "#========================================#" << endl;

  i = 0;

  while(!(
    AssistantUsername[i].empty() &&
    AssistantName[i].empty() &&
    AssistantAddress[i].empty() &&
    AssistantPhone[i].empty()
  ))

  {
    cout << "|  Username : " << AssistantUsername[i] << endl;
    cout << "|  Nama\t: " << AssistantName[i] << endl;
    cout << "|  Alamat\t: " << AssistantAddress[i] << endl;
    cout << "|  No. Telepon : " << AssistantPhone[i] << endl;
    i++;
  }
  cout << "+----------------------------------------+" << endl;
}

void Admin::ProfileAuthor()
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

    switch(A.sk[i])
    {
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
  do
  {
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

void Admin::DeclareFirstMateri()
{
  if(HeadIsNULL == true)
  {
    cout << "+========================================+" << endl;
    cout << "|           ..................           |" << endl;
    cout << "|                                        |" << endl;
    cout << "|            TIDAK ADA MODUL!            |" << endl;
    cout << "|                                        |" << endl;
    cout << "|           ..................           |" << endl;
    cout << "+========================================+" << endl;

    ManagementMateri(0);
  }

  else
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
}

void Admin::MenuAddMateri(int x)
{
  MAM:
  cout << "+========================================+" << endl;
  cout << "|           ..................           |" << endl;
  cout << "|                                        |" << endl;
  cout << "|  1. Tambah Modul                       |" << endl;
  cout << "|  2. Tambah Modul (Push Operation)      |" << endl;
  cout << "|  3. Tambah Lebih Dari Satu Modul       |" << endl;
  cout << "|     (Push Operation)                   |" << endl;
  cout << "|  4. Tambah Modul                       |" << endl;
  cout << "      (Priority Enqueue Operation)       |" << endl;
  cout << "|  99. Kembali                           |" << endl;
  cout << "|  0. Keluar                             |" << endl;
  cout << "|                                        |" << endl;
  cout << "|           ..................           |" << endl;
  cout << "+========================================+" << endl;
  cout << "| ->  ";
  cin >> mamc;
  cout << "+----------------------------------------+" << endl;

  switch(mamc)
  {
    case 0:
      exit(0);
      break;
    case 1:
      AddMateri(x);
      break;
    case 2:
      PushMateri(x);
      break;
    case 3:
      CountPushMateri(x);
      break;
    case 4:
      PriorityEnqueue(x);
      break;
    case 99:
      ManagementMateri(x);
      break;
    default:
      goto MAM;
      break;
  }
}

void Admin::MenuDeleteMateri(int x)
{
  MDM:
  cout << "+========================================+" << endl;
  cout << "|           ..................           |" << endl;
  cout << "|                                        |" << endl;
  cout << "|  1. Hapus Modul                        |" << endl;
  cout << "|  2. Hapus Modul (Pop Operation)        |" << endl;
  cout << "|  3. Hapus Modul                        |" << endl;
  cout << "|     (Priority Dequeue Operation)       |" << endl;
  cout << "|  99. Kembali                           |" << endl;
  cout << "|  0. Keluar                             |" << endl;
  cout << "|                                        |" << endl;
  cout << "|           ..................           |" << endl;
  cout << "+========================================+" << endl;
  cout << "| ->  ";
  cin >> mdmc;
  cout << "+----------------------------------------+" << endl;

  switch (mdmc)
  {
  case 0:
      exit(0);
      break;
  case 1:
    DeleteMateri(x);
    break;
  case 2:
    PopMateri(x);
    break;
  case 3:
    PriorityDequeue(x);
    break;
  case 99:
    ManagementMateri(x);
    break;
  default:
    goto MDM;
    break;
  }
}

void Admin::ManagementMateri(int x)
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
        PrintMateri(x);
        cout << "+========================================+" << endl;
        cout << "|           ..................           |" << endl;
        cout << "|                                        |" << endl;
        cout << "| 1. Download Modul                      |" << endl;
        cout << "| 2. Tambah Modul                        |" << endl;
        cout << "| 3. Hapus Modul                         |" << endl;
        cout << "| 4. Cetak Modul Descending              |" << endl;
        cout << "| 99. Keluar                             |" << endl;
        cout << "| 0. Menu Utama                          |" << endl;
        cout << "|                                        |" << endl;
        cout << "|           ..................           |" << endl;
        cout << "+========================================+" << endl;
        cout << "| ->  ";
        cin >> MateriC;
        cout << "+----------------------------------------+" << endl;

        switch (MateriC)
        {
        case 0:
          MainMenuAdmin();
          break;
        case 1:
          DownloadMateri(x);
          break;
        case 2:
          MenuAddMateri(x);
          break;
        case 3:
          MenuDeleteMateri(x);
          break;
        case 4:
          ManagementMateri(6);
          break;
        case 99:
          exit(0);
          break;
        default:
          goto DestinationDeclareFirstMateri1;
          break;
        }
      } while(MateriC != 99);
      
    }
    else
    {
      do
      {
        DestinationDeclareFirstMateri3:
        PrintMateri(x);
        cout << "+========================================+" << endl;
        cout << "|           ..................           |" << endl;
        cout << "|                                        |" << endl;
        cout << "| 1. Download Modul                      |" << endl;
        cout << "| 2. Tambah Modul                        |" << endl;
        cout << "| 3. Hapus Modul                         |" << endl;
        cout << "| 4. Cetak Modul Descending              |" << endl;
        cout << "| 99. Keluar                             |" << endl;
        cout << "| 0. Menu Utama                          |" << endl;
        cout << "|                                        |" << endl;
        cout << "|           ..................           |" << endl;
        cout << "+========================================+" << endl;
        cout << "| ->  ";
        cin >> MateriC;
        cout << "+----------------------------------------+" << endl;

        switch (MateriC)
        {
        case 0:
          MainMenuAdmin();
          break;
        case 1:
          DownloadMateri(x);
          break;
        case 2:
          MenuAddMateri(x);
          break;
        case 3:
          MenuDeleteMateri(x);
          break;
        case 4:
          ManagementMateri(6);
          break;
        case 99:
          exit(0);
          break;
        default:
          goto DestinationDeclareFirstMateri1;
          break;
        }
      } while(MateriC != 99);
    }
  }
  
  else
  {
    do
    {
      DestinationDeclareFirstMateri2:
      cout << "+========================================+" << endl;
      cout << "|                   |                    |" << endl;
      cout << "|       --------------------------       |" << endl;
      cout << "|-------|    TIDAK ADA MODUL!    |       |" << endl;
      cout << "|       --------------------------       |" << endl;
      cout << "|                   |                    |" << endl;
      cout << "+========================================+" << endl;
      cout << "|           ..................           |" << endl;
      cout << "|                                        |" << endl;
      cout << "| 1. Tambah Modul                        |" << endl;
      cout << "| 99. Keluar                             |" << endl;
      cout << "| 0. Menu Utama                          |" << endl;
      cout << "|                                        |" << endl;
      cout << "|           ..................           |" << endl;
      cout << "+========================================+" << endl;
      cout << "| ->  ";
      cin >> MateriC;
      cout << "+----------------------------------------+" << endl;

      switch (MateriC)
      {
      case 0:
        MainMenuAdmin();
        break;
      case 1:
        MenuAddMateri(x);
        break;
      case 99:
        exit(0);
        break;
      default:
        goto DestinationDeclareFirstMateri2;
        break;
      }
    } while(MateriC != 99);
  }
}

void Admin::DownloadMateri(int x)
{
  if(x == 6)
  {
    do
    {
      PrintMateri(x);
      cout << "+========================================+" << endl;
      cout << "|           ..................           |" << endl;
      cout << "|                                        |" << endl;
      cout << "| 9. Kembali                             |" << endl;
      cout << "| 0. Menu Utama                          |" << endl;
      cout << "|                                        |" << endl;
      cout << "|           ..................           |" << endl;
      cout << "+========================================+" << endl;
      cout << "| ->  ";
      cin >> DownloadMateriC;
      cout << "+----------------------------------------+" << endl;

      if(DownloadMateriC == 0)
      {
        MainMenuAdmin();
      }
        
      else if(DownloadMateriC == 9)
      {
        ManagementMateri(x);
      }
      
      TempDownloadMateri = tail;
      
      for(i = 0; i < DownloadMateriC; i++)
      {
        if(i == DownloadMateriC - 1)
        {
          cout << "\n";
          cout << "+----------------------------------------+" << endl;
          cout << "|                                        " << endl;
          cout << "|  " << TempDownloadMateri->MateriName << " Berhasil DiUnduh      |" << endl;
          cout << "|                                        " << endl;
          cout << "+----------------------------------------+" << endl;
        }
        TempDownloadMateri = TempDownloadMateri->prev;
      }
    } while(DownloadMateriC != 0);
  }

  else
  {
    do
    {
      PrintMateri(x);
      
      cout << "+========================================+" << endl;
      cout << "|           ..................           |" << endl;
      cout << "|                                        |" << endl;
      cout << "| 9. Kembali                             |" << endl;
      cout << "| 0. Menu Utama                          |" << endl;
      cout << "|                                        |" << endl;
      cout << "|           ..................           |" << endl;
      cout << "+========================================+" << endl;
      cout << "|  Masukkan modul yang ingin diunduh!\n";
      cout << " ->  "; cin >> DownloadMateriC;
      cout << "+----------------------------------------+" << endl;

      if(DownloadMateriC == 0)
      {
        MainMenuAdmin();
      }
        
      else if(DownloadMateriC == 9)
      {
        ManagementMateri(x);
      }
      
      TempDownloadMateri = head;
      
      for(i = 0; i < DownloadMateriC; i++)
      {
        if(i == DownloadMateriC - 1)
        {
          cout << "\n";
          cout << "+----------------------------------------+" << endl;
          cout << "|                                        " << endl;
          cout << "|  " << TempDownloadMateri->MateriName << " Berhasil DiUnduh" << endl;
          cout << "|                                        " << endl;
          cout << "+----------------------------------------+" << endl;
        }
        TempDownloadMateri = TempDownloadMateri->next;
      }
    } while(DownloadMateriC != 0);
  }
}

void Admin::PrintMateri(int x)
{
  if(x == 6)
  {
    if(head == NULL || MateriIsEmpty())
    {
      HeadIsNULL = true;
      cout << "\n";
      ManagementMateri(x);
    }

    else
    {
      i = 1;
      Check = tail;
      cout << "\n";
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +  MODUL MATERI PRAKTIKUM   +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      while(Check != NULL)
      {
        cout << i << ". " << Check->MateriName << endl;
        Check = Check->prev;
        i++;
      }
    }
  }

  else
  {
    if(head == NULL)
    {
      HeadIsNULL = true;
      cout << "\n";
      ManagementMateri(x);
    }
      
    else
    {
      i = 1;
      Check = head;
      cout << "\n";
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +  MODUL MATERI PRAKTIKUM   +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      while(Check != NULL)
      {
        cout << i << ". " << Check->MateriName << endl;
        Check = Check->next;
        i++;
      }
    }
  }
}

void Admin::PrintMateriDescending(int x)
{
  if(head == NULL)
  {
    HeadIsNULL = true;
    cout << "\n";
    ManagementMateri(x);
  }

  else
  {
    i = 1;
    Check = tail;
    cout << "\n";
    cout << "\n";
    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +  MODUL MATERI PRAKTIKUM   +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;
    while(Check != NULL)
    {
      cout << i << ". " << Check->MateriName << endl;
      Check = Check->prev;
      i++;
    }
  }
}

void Admin::PrintStackMateri(int x)
{
  if(head == NULL)
  {
    HeadIsNULL = true;
    cout << "\n";
    ManagementMateri(x);
  }
    
  else
  {
    i = 1;
    Check = head;
    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +  MODUL MATERI PRAKTIKUM   +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;
    while(Check != NULL)
    {
      cout << i << ". " << Check->MateriName << endl;
      Check = Check->next;
      i++;
    }
  }
}

void Admin::AddMateri(int x)
{
  MateriNode *New1 = new MateriNode;
  
  if(HeadIsNULL == true)
  {
    HeadIsNULL = false;
    cout << "\n";
    cout << "\n";

    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;
    cout << "|  Masukkan nama materi ->  ";
    cin.ignore();
    getline(cin, New1->MateriName);
    cout << "+----------------------------------------+" << endl;

    New1->next = NULL;
    New1->prev = NULL;
    head = New1;
    tail = New1;

    cout << "\n";
    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;
    cout << "\n";
    Top++;
    ManagementMateri(x);
  }
    
  else
  {
    cout << "\n";
    cout << "\n";

    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;
    cout << "|  Masukkan nama materi ->  ";
    cin.ignore();
    getline(cin, New1->MateriName);
    cout << "+----------------------------------------+" << endl;

    New1->next = NULL;
    New1->prev = tail;
    tail->next = New1;
    tail = New1;

    cout << "\n";
    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;
    cout << "\n";
    Top++;
    ManagementMateri(x);
  }
}

bool Admin::MateriIsFull()
{
  if(Top == MaxMateri)
  {
    return true;
  }

  else
  {
    return false;
  }
}

bool Admin::MateriIsEmpty()
{
  if(Top == 0)
  {
    return true;
  }

  else
  {
    return false;
  }
}

void Admin::PushMateri(int x)
{
  if(x == 6)
  {
    if(!MateriIsFull())
    {
      if(HeadIsNULL == true)
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->next = NULL;
        New->prev = NULL;
        head = New;
        tail = New;
        Top++;
        HeadIsNULL = false;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }

      else
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->prev = tail;
        New->next = NULL;
        tail->next = New;
        tail = New;
        Top++;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }
    }
    
    else
    {
      cout << "\n";
      cout << "#===============================================#" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#      +  SUDAH MENCAPAI BATAS MAKSIMUM!  +     #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#===============================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }

  else
  {
    if(!MateriIsFull())
    {
      if(HeadIsNULL == true)
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->next = NULL;
        New->prev = NULL;
        head = New;
        tail = New;
        Top++;
        HeadIsNULL = false;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }

      else
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->prev = NULL;
        New->next = head;
        head->prev = New;
        head = New;
        Top++;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }
    }
    
    else
    {
      cout << "\n";
      cout << "#===============================================#" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#      +  SUDAH MENCAPAI BATAS MAKSIMUM!  +     #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#===============================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }
}

void Admin::CountPushMateri(int x)
{
  DestinationCountPushMateri:
  cout << "\n";
  cout << "#=================================================#" << endl;
  cout << "#                        |                        #" << endl;
  cout << "#      +-----------------------------------+      #" << endl;
  cout << "#      +      MASUKKAN JUMLAH MODUL!       +      #" << endl;
  cout << "#      + (MAX " << (MaxMateri - Top) << ") +      #" << endl;
  cout << "#      +-----------------------------------+      #" << endl;
  cout << "#                        |                        #" << endl;
  cout << "#=================================================#" << endl;
  cout << "| ->  ";
  cin >> CountPM;
  cout << "+----------------------------------------+" << endl;

  if(CountPM > (MaxMateri - Top))
  {
    cout << "\n";
    cout << "#===============================================#" << endl;
    cout << "#                       |                       #" << endl;
    cout << "#      +----------------------------------+     #" << endl;
    cout << "#      +      JUMLAH MELEBIHI BATAS!      +     #" << endl;
    cout << "#      +----------------------------------+     #" << endl;
    cout << "#                       |                       #" << endl;
    cout << "#===============================================#" << endl;
    cout << "\n";
    goto DestinationCountPushMateri;
  }

  else
  {
    if(CountPM == 1)
    {
      PushMateri(x);
    }

    else
    {
      i = 0;
      while(i != CountPM)
      {
        PushMoreThanOneMateri(x);
        i++;
      }

      ManagementMateri(x);
    }
  }
}

void Admin::PushMoreThanOneMateri(int x)
{
  if(x == 6)
  {
    if(!MateriIsFull())
    {
      if(HeadIsNULL == true)
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->next = NULL;
        New->prev = NULL;
        head = New;
        tail = New;
        Top++;
        HeadIsNULL = false;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
      }

      else
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->prev = tail;
        New->next = NULL;
        tail->next = New;
        tail = New;
        Top++;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
      }
    }
    
    else
    {
      cout << "\n";
      cout << "#===============================================#" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#      +  SUDAH MENCAPAI BATAS MAKSIMUM!  +     #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#===============================================#" << endl;
      cout << "\n";
    }
  }

  else
  {
    if(!MateriIsFull())
    {
      if(HeadIsNULL == true)
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->next = NULL;
        New->prev = NULL;
        head = New;
        tail = New;
        Top++;
        HeadIsNULL = false;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
      }

      else
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->prev = NULL;
        New->next = head;
        head->prev = New;
        head = New;
        Top++;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
      }
    }
    
    else
    {
      cout << "\n";
      cout << "#===============================================#" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#      +  SUDAH MENCAPAI BATAS MAKSIMUM!  +     #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#===============================================#" << endl;
      cout << "\n";
    }
  }
}

void Admin::PopMateri(int x)
{
  if(x == 6)
  {
    cout << "\n";
    cout << "\n";

    if(!MateriIsEmpty())
    {
      TempDeleteMateriA = tail;
      tail = TempDeleteMateriA->prev;
      tail->next = NULL;
      free(TempDeleteMateriA);
      Top--;
      ManagementMateri(x);
    }

    else
    {
      HeadIsNULL == true;
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +          KOSONG           +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }

  else
  {
    cout << "\n";
    cout << "\n";

    if(!MateriIsEmpty())
    {
      TempDeleteMateriA = head;
      head = TempDeleteMateriA->next;
      head->prev = NULL;
      free(TempDeleteMateriA);
      Top--;
      return;
      ManagementMateri(x);
    }

    else
    {
      HeadIsNULL == true;
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +          KOSONG           +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }
}

void Admin::DeleteMateri(int x)
{
  if(x == 6)
  {
    cout << "\n\n";
    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +     HAPUS MODUL MATERI    +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;

    PrintMateri(x);

    cout << "+                                        +" << endl;
    cout << "+----------------------------------------+" << endl;
    cout << "|  Masukkan Nomor Modul Yang Ingin DiHapus!" << endl;
    cout << "|  ->  ";
    cin >> DeleteMateriC;
    cout << "+----------------------------------------+" << endl;
    cout << "+                                        +" << endl;

    TempDeleteMateriA = tail;
    if(DeleteMateriC == 1)
    {
      tail = TempDeleteMateriA->prev;
      tail->next == NULL;
      free(TempDeleteMateriA);
      Top--;
      return;
    }

    else if(DeleteMateriC == Top)
    {
      TempDeleteMateriA = head;
      TempDeleteMateriB = TempDeleteMateriA->next;
      TempDeleteMateriB->prev = NULL;
      head = TempDeleteMateriB;
      free(TempDeleteMateriA);
      Top--;
      return;
    }

    else
    {
      TempDeleteMateriA = tail;
      for(i = Top; i >= DeleteMateriC; i--)
      {
        TempDeleteMateriA = TempDeleteMateriA->prev;
      }

      cout << TempDeleteMateriA->MateriName << endl;

      TempDeleteMateriB = TempDeleteMateriA->prev;
      TempDeleteMateriC = TempDeleteMateriA->next;
      TempDeleteMateriB->next = TempDeleteMateriC;
      TempDeleteMateriC->prev = TempDeleteMateriB;
      free(TempDeleteMateriA);
      Top--;
    }
  }

  else
  {
    cout << "\n\n";
    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +     HAPUS MODUL MATERI    +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;

    PrintMateri(x);

    cout << "+                                        +" << endl;
    cout << "+----------------------------------------+" << endl;
    cout << "|  Masukkan Nomor Modul Yang Ingin DiHapus!" << endl;
    cout << "|  ->  ";
    cin >> DeleteMateriC;
    cout << "+----------------------------------------+" << endl;
    cout << "+                                        +" << endl;

    TempDeleteMateriA = head;
    if(DeleteMateriC == 1)
    {
      head = TempDeleteMateriA->next;
      head->prev == NULL;
      free(TempDeleteMateriA);
      Top--;
      return;
    }

    else if(DeleteMateriC == Top)
    {
      TempDeleteMateriA = tail;
      TempDeleteMateriB = TempDeleteMateriA->prev;
      TempDeleteMateriB->next = NULL;
      tail = TempDeleteMateriB;
      free(TempDeleteMateriA);
      Top--;
      return;
    }

    else
    {
      for(i = 1; i < DeleteMateriC; i++)
      {
        TempDeleteMateriA = TempDeleteMateriA->next;
      }
      
      TempDeleteMateriB = TempDeleteMateriA->prev;
      TempDeleteMateriC = TempDeleteMateriA->next;
      TempDeleteMateriB->next = TempDeleteMateriC;
      TempDeleteMateriC->prev = TempDeleteMateriB;
      free(TempDeleteMateriA);
      Top--;
    }
  }
}

void Admin::PriorityEnqueue(int x)
{
  if(x == 6)
  {
    if(!MateriIsFull())
    {
      if(HeadIsNULL == true)
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->next = NULL;
        New->prev = NULL;
        head = New;
        tail = New;
        Top++;
        HeadIsNULL = false;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }

      else
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->next = head;
        New->prev = NULL;
        head->prev = New;
        head = New;
        Top++;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }
    }
    
    else
    {
      cout << "\n";
      cout << "#===============================================#" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#      +  SUDAH MENCAPAI BATAS MAKSIMUM!  +     #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#===============================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }

  else
  {
    if(!MateriIsFull())
    {
      if(HeadIsNULL == true)
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);

        New->next = NULL;
        New->prev = NULL;
        head = New;
        tail = New;
        Top++;
        HeadIsNULL = false;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }

      else
      {
        MateriNode *New = new MateriNode;
        cout << "\n";
        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +    TAMBAH MODUL MATERI    +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "|  Masukkan nama materi ->  ";
        cin.ignore();
        getline(cin, New->MateriName);
        cout << "+----------------------------------------+" << endl;

        New->prev = tail;
        New->next = NULL;
        tail->next = New;
        tail = New;
        Top++;

        cout << "\n";
        cout << "#=========================================#" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#      +  BERHASIL MENAMBAH MODUL  +      #" << endl;
        cout << "#      +---------------------------+      #" << endl;
        cout << "#                   |                     #" << endl;
        cout << "#=========================================#" << endl;
        cout << "\n";
        ManagementMateri(x);
      }
    }
    
    else
    {
      cout << "\n";
      cout << "#===============================================#" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#      +  SUDAH MENCAPAI BATAS MAKSIMUM!  +     #" << endl;
      cout << "#      +----------------------------------+     #" << endl;
      cout << "#                       |                       #" << endl;
      cout << "#===============================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }
}

void Admin::PriorityDequeue(int x)
{
  PDQ:
  cout << "+----------------------------------------+" << endl;
  cout << "|                                        |" << endl;
  cout << "|  1. MINIMUM                            |" << endl;
  cout << "|  2. MAKSIMUM                           |" << endl;
  cout << "|                                        |" << endl;
  cout << "+----------------------------------------+" << endl;
  cout << "|  ->  ";
  cin >> pdq;
  cout << "+----------------------------------------+" << endl;

  switch(pdq)
    {
      case 1:
        MinimumPriorityDequeue(x);
        break;
      case 2:
        MaximumPriorityDequeue(x);
        break;
      default:
        goto PDQ;
    }
}

void Admin::MinimumPriorityDequeue(int x)
{
  if(x == 6)
  {
    cout << "\n";
    cout << "\n";

    if(!MateriIsEmpty())
    {
      TempDeleteMateriA = tail;
      tail = TempDeleteMateriA->prev;
      tail->next = NULL;
      free(TempDeleteMateriA);
      Top--;
      ManagementMateri(x);
    }

    else
    {
      HeadIsNULL = true;
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +          KOSONG           +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      ManagementMateri(x);
    }
  }

  else
  {
    cout << "\n";
    cout << "\n";

    if(!MateriIsEmpty())
    {
      TempDeleteMateriA = head;
      head = TempDeleteMateriA->next;
      head->prev = NULL;
      free(TempDeleteMateriA);
      Top--;
      return;
      ManagementMateri(x);
    }

    else
    {
      HeadIsNULL = true;
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +          KOSONG           +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }
}

void Admin::MaximumPriorityDequeue(int x)
{
  if(x == 6)
  {
    cout << "\n";
    cout << "\n";

    if(!MateriIsEmpty())
    {
      TempDeleteMateriA = head;
      head = TempDeleteMateriA->next;
      head->prev = NULL;
      free(TempDeleteMateriA);
      Top--;
      ManagementMateri(x);
    }

    else
    {
      HeadIsNULL = true;
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +          KOSONG           +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }

  else
  {
    cout << "\n";
    cout << "\n";

    if(!MateriIsEmpty())
    {
      TempDeleteMateriA = tail;
      tail = TempDeleteMateriA->prev;
      tail->next = NULL;
      free(TempDeleteMateriA);
      Top--;
      return;
      ManagementMateri(x);
    }

    else
    {
      HeadIsNULL = true;
      cout << "\n";
      cout << "#=========================================#" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#      +          KOSONG           +      #" << endl;
      cout << "#      +---------------------------+      #" << endl;
      cout << "#                   |                     #" << endl;
      cout << "#=========================================#" << endl;
      cout << "\n";
      ManagementMateri(x);
    }
  }
}

void Admin::TempMenu()
{
  QM:
  cout << "\n";
  cout << "\n";
  cout << "#=========================================#" << endl;
  cout << "#                    |                    #" << endl;
  cout << "#      +---------------------------+      #" << endl;
  cout << "#      +           QUEUE           +      #" << endl;
  cout << "#      +---------------------------+      #" << endl;
  cout << "#                    |                    #" << endl;
  cout << "#=========================================#" << endl;

  PrintQueue();
  cout << "+----------------------------------------+" << endl;
  cout << "|                                        |" << endl;
  cout << "|  1. ENQUEUE                            |" << endl;
  cout << "|  2. DEQUEUE                            |" << endl;
  cout << "|                                        |" << endl;
  cout << "+----------------------------------------+" << endl;
  cout << "|  ->  ";
  cin >> qc;
  cout << "+----------------------------------------+" << endl;

  if(qc == 1)
  {
    cout << "+----------------------------------------+" << endl;
    cout << "|  Masukkan Nama Modul Materi!";
    cout << "|  ->  ";
    cin >> InputData;
    cout << "+----------------------------------------+" << endl;
    Enqueue(InputData);
    goto QM;
  }

  else if(qc == 2)
  {
    Dequeue();
    goto QM;
  }
}

bool Admin::QueueIsFull()
{
  if(back == MaxQueue)
  {
    return true;
  }

  else
  {
    return false;
  }
}

bool Admin::QueueIsEmpty()
{
  if(back == 0)
  {
    return true;
  }

  else
  {
    return false;
  }
}

void Admin::DeclareFirstQueue()
{
  for(i = 0; i < MaxQueue; i++)
  {
    QueueMateri[i] = "0";
  }
}

void Admin::DeclareNextQueue()
{
  i = 0;
  Check = head;
  while(Check != NULL)
  {
    QueueMateri[i] = Check->MateriName;
    Check = Check->next;
    if(i == 0)
    {
      front++;
    }

    else
    {
      back++;
    }
    i++;
  }
}

void Admin::Enqueue(string InputData)
{
  if(QueueIsFull())
  {
    cout << "\n";
    cout << "#===============================================#" << endl;
    cout << "#                       |                       #" << endl;
    cout << "#      +----------------------------------+     #" << endl;
    cout << "#      +  SUDAH MENCAPAI BATAS MAKSIMUM!  +     #" << endl;
    cout << "#      +----------------------------------+     #" << endl;
    cout << "#                       |                       #" << endl;
    cout << "#===============================================#" << endl;
    cout << "\n";
  }
  
  else
  {
    if(QueueIsEmpty())
    {
      QueueMateri[0] = InputData;
      front++;
      back++;
    }

    else
    {
      QueueMateri[++back] = InputData;
      // back++;
    }
  }
}

void Admin::Dequeue()
{
  if(QueueIsEmpty())
  {
    cout << "\n";
    cout << "#=========================================#" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#      +          KOSONG           +      #" << endl;
    cout << "#      +---------------------------+      #" << endl;
    cout << "#                   |                     #" << endl;
    cout << "#=========================================#" << endl;
    cout << "\n";
  }

  else
  {
    for(i = 0; i < MaxQueue; i++)
    {
      if(QueueMateri[i] == "0")
      {
        break;
      }

      else
      {
        QueueMateri[i] = QueueMateri[i + 1];
      }
    }
    cout << i << endl;
  }
}

void Admin::PrintQueue()
{
  cout << "\n";
  cout << "\n";
  cout << "#=========================================#" << endl;
  cout << "#             ..............              #" << endl;
  cout << "#      +---------------------------+      #" << endl;
  cout << "#      +   MODUL MATERI PRAKTIKUM  +      #" << endl;
  cout << "#      +---------------------------+      #" << endl;
  cout << "#                 ,,,,,,                  #" << endl;
  cout << "#=========================================#" << endl;
  for(i = 0; i < MaxQueue; i++)
  {
    if(QueueMateri[i] == "0")
    {
      break;
    }
    
    else
    {
      cout << "|  " << i + 1 << ". " << QueueMateri[i] << endl;
    }
  }
  cout << "+----------------------------------------+" << endl;
}

Admin X;

#endif