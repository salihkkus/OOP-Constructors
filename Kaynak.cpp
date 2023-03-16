#include <iostream>
#include "Otomobil.h"
using namespace std;



int main() {

	Otomobil otomobil1("mavi", "mclaren", 320);
	Otomobil otomobil2("siyah", "togg", 180);



	otomobil1.ruhsatbilgileri();
	cout << endl << endl;
	otomobil2.ruhsatbilgileri();



	return 0;
}
