#include<iostream>
#include<string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "Orang dibuat\n" << endl;
	}
	~orang() {
		cout << "Orang dihapus\n" << endl;
	}
};

class manusia {
public:
	string JenisKelamin;

	manusia(string pJenisKelamin) :
		JenisKelamin(pJenisKelamin) {
		cout << "Manusia dibuat\n" << endl;
	}
	~manusia() {
		cout << "Manusia dihapus\n" << endl;
	}
};

