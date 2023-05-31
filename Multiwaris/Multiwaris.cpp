#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		
		cout << "Orang Dibuat\n" << endl;
	}
	~orang() {
		cout << "Orang Dihapus\n" << endl;
	}
};

class manusia {
public:
	string jenisKelamin;

	manusia(string pJenisKelamin) :
		jenisKelamin(pJenisKelamin) {

		cout << "Manusia Dibuat\n" << endl;
	}
	~manusia() {
		cout << "Manusia Dihapus\n" << endl;
	}
};

class pelajar : private manusia, public orang {
public:
	string sekolah;

	pelajar(string pNama, string pJenisKelamin, string pSekolah) :
		orang(pNama),
		manusia(pJenisKelamin),
		sekolah(pSekolah) {

		cout << "Pelajar Dibuat\n" << endl;
	}
	~pelajar() {
		cout << "Pelajar Dihapus\n" << endl;
	}
	string perkenalan() {
		return "Halo, Nama Saya " + nama + " Dengan Jenis kelamin " + jenisKelamin + " Dari Sekolah " + sekolah + "\n\n";
	}
};