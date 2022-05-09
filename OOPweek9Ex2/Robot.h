#pragma once
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
class ROBOT {
protected:
	int S = 10;
public:
	void virtual Input() {};
	void virtual Output() {};
	void virtual highestEnergy(int& max, int &i) {};
	void virtual totalEnergy(int &x) {};
};
class PEDION : public ROBOT {
protected:
	int numPedion;
	int F = rand() % 5 + 1;
public:
	int M = 20;
	void Input();
	void Output();
	void highestEnergy(int& max, int &i);
	int totalEnergy();
	void totalEnergy(int& x);
};
class ZATTACKER : public ROBOT {
protected:
	int numZattacker;
	int P = rand() %11 + 1;
public:
	int M = 50;
	void Input();
	void Output();
	void highestEnergy(int& max, int &i);
	int totalEnergy();
	void totalEnergy(int& x);
};
class CARRIER : public ROBOT {
protected:
	int numCarrier;
	int E = rand() % 51 + 1;
public:
	int M = 30;
	void Input();
	void Output();
	void highestEnergy(int& max, int &i);
	int totalEnergy();
	void totalEnergy(int& x);
};
