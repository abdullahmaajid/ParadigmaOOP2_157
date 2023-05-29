#incliude <iostream>
#include <string>
using namespace std;

class orang {
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
};