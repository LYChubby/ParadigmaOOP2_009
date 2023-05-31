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