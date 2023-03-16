#include "Otomobil.h"

// Otomobil Constructor
Otomobil::Otomobil(string _renk, string _model, int _beygirgucu) {
	renk = _renk;
	model = _model;
	beygirgucu = _beygirgucu;
}


void Otomobil::ruhsatbilgileri() {
	cout << "Renk : " << Otomobil::renk << endl;
	cout << "Model : " << Otomobil::model << endl;
	cout << "Beygir Gucu : " << Otomobil::beygirgucu << endl;
}