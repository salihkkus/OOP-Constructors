#pragma once

#include <iostream>
using namespace std;

class Otomobil {
public:
	string renk;
	string model;
	int beygirgucu;

	void ruhsatbilgileri();
	Otomobil(string _renk, string _model, int _beygirgucu);
};
