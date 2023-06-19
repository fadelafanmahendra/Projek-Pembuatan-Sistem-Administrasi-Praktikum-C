#include <iostream>
#include <stdio.h>

using namespace std;

class bioskop{
	public:
    int jumlah_tiket(int, int);
    void menu();
    void tiket();
    void foodndrink_menu();
    void fnd_food();
    void fnd_drink();
    void fnd_package();
		void input();
		void proses();
		void output();  
  struct{
    string judul_film[3] = {"Avatar", "Jailangkung", "Aladdin"};
  }judul;
	private:
    int hrg_tiket = 35000;
    int foodndrink_c;
		int pilih;
		int jumlah;
		int total;
		int bayar;
		int kembali;
    int i;
    string user = "admin", pass = "admin";
    string username, password;
};

int bioskop::jumlah_tiket(int a, int b) {
  if(b == 1) return a;
  else return a + jumlah_tiket(a, b - 1);
}

void bioskop::menu() {
  cout << "==============================" << endl;
  cout << "|\tMENU\t|" << endl;
  cout << "==============================" << endl;
  cout << "1. Jadwal Bioskop" << endl;
  cout << "2. Food `n Drink" << endl;
  cout << "3. Profil" << endl;
}

void bioskop::tiket() {
  cout << "===============================" << endl;
	cout << "|\tJADWAL BIOSKOP\t|" <<endl;
	cout << "===============================" << endl;
  for(i = 0; i < 3; i++) {
    cout << "| " << i + 1 << ". " << judul.judul_film[i] << endl;
  }
	cout << "===============================" << endl;
	cout << "Masukkan pilihan film\t: ";
	cin >> pilih;
  cout << endl << endl;
}

void bioskop::foodndrink_menu() {
  fnd:
  cout << "===============================" << endl;
	cout << "|\tFOOD `N DRINK\t|" <<endl;
	cout << "===============================" << endl;
  cout << "1. Food" << endl;
  cout << "2. Drink" << endl;
  cout << "3. Package" << endl;
  cout << "Masukkan pilihan  ->  "; cin >> foodndrink_c;
  switch(foodndrink_c) {
    case 1:
      fnd_food();
      break;
    case 2:
      fnd_drink();
      break;
    case 3:
      fnd_package();
      break;
    default:
      cout << "Input Error! Try Again!\n" << endl;
      goto fnd;
  }
}

void bioskop::fnd_food(){
  cout << "==============================" << endl;
  cout << "|\tFOODS\t|" << endl;
  cout << "==============================" << endl;
  cout << "1. POP CORN" << endl;
  cout << "2. FRENCH FRIES" << endl;
  cout << "3. FISH N' CHIPS" << endl;
}

void bioskop::fnd_drink() {
  cout << "==============================" << endl;
  cout << "|\tDRINKS\t|" << endl;
  cout << "==============================" << endl;
  cout << "1. COCA COLA" << endl;
  cout << "2. JASMINE TEA" << endl;
  cout << "3. JAVA TEA" << endl;
}

void bioskop::fnd_package() {
  cout << "==============================" << endl;
  cout << "|\tPACKAGE\t|" << endl;
  cout << "==============================" << endl;
  cout << "1. P1 ~ POP CORN x COCA COLA" << endl;
  cout << "2. P2 ~ DOUBLE POP CORN x COCA COLA" << endl;
  cout << "3. P3 ~ " << endl;
}

void bioskop::input(){
  log_in:
  cout << "===============================" << endl;
	cout << "|\tLOGIN\t|" <<endl;
	cout << "===============================" << endl;
  cout << "Masukkan username\t: "; cin >> username;
  cout << "Masukkan password\t: "; cin >> password;
  if(username == user && password == pass) {
    cout << "\nBerhasil login!" << endl << endl;
  }
  else {
    cout << "\nUsername atau password salah! Harap masukkan kembali!" << endl << endl;
    goto log_in;
  }
}

void bioskop::proses(){
  switch(pilih) {
    case 1:
      cout << "===============================" << endl;
  		cout << "|\tAVATAR\t|" << endl;
  		cout << "===============================" << endl;
  		cout << "Harga per-tiket : Rp." << hrg_tiket << endl;
  		cout << "Jumlah e-tiket\t: ";
  		cin >> jumlah;
      total = jumlah_tiket(hrg_tiket, jumlah);
  		cout << "Harga Total\t\t: Rp." << total << endl;
  		cout << "Jumlah Bayar\t: Rp.";
  		cin >> bayar; 
  		kembali = bayar - total;
  		cout << "Kembalian\t\t: Rp." << kembali << endl;
      break;
    case 2:
      cout << "===============================" << endl;
  		cout << "|\tJAILANGKUNG\t|" << endl;
  		cout << "===============================" << endl;
  		cout << "Harga per-tiket : Rp." << hrg_tiket << endl;
  		cout << "Jumlah e-tiket\t: ";
  		cin >> jumlah;
  		total = jumlah_tiket(hrg_tiket, jumlah);
  		cout << "Harga Total\t\t: Rp." << total << endl;
  		cout << "Jumlah Bayar\t: Rp.";
  		cin >> bayar; 
  		kembali = bayar - total;
  		cout << "Kembalian\t\t: Rp." << kembali << endl;
      break;
    case 3:
      cout << "===============================" << endl;
  		cout << "|\tALADDIN\t|" << endl;
  		cout << "===============================" << endl;
  		cout << "Harga per-tiket : Rp." << hrg_tiket << endl;
  		cout << "Jumlah e-tiket\t: ";
  		cin >> jumlah;
  		total = jumlah_tiket(hrg_tiket, jumlah);
  		cout << "Harga Total\t\t: Rp." << total << endl;
  		cout << "Jumlah Bayar\t: Rp.";
  		cin >> bayar;
  		kembali = bayar - total;
  		cout << "Kembalian\t\t: Rp." << kembali << endl;
      break;
    default:
      cout << "\nInput tidak valid! Harap Masukkan kembali!" << endl;
      input();
  }
}

void bioskop::output(){
	cout << "\n\n===================================" << endl;
	cout << "|\tE-TIKET BIOSKOP\t|" << endl;
	cout << "===================================" << endl;
	cout << "Judul Film\t\t:\t" << judul.judul_film[pilih - 1] << endl;
  cout << "Harga per-tiket :\t" << hrg_tiket << "\t||\t" << "Jumlah e-tiket :\t" << jumlah << endl;
  cout << "Total\t\t\t:\t" << total << endl;
  cout << "Jumlah bayar\t:\t" << bayar << endl;
  cout << "===================================" << endl;
  cout << "Kembali\t\t\t:\t" << kembali << endl;
  cout << "\n\t\t\tTerima Kasih!\t\t\t" << endl;
}

int main() {
  bioskop X;
  X.input();
  X.proses();
  X.output();

  return 0;
}

