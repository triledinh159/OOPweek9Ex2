#include "Robot.h"
void PEDION::Input(){
	cout << "Nhap so luong Pedion: "; cin >> numPedion;
}
void ZATTACKER::Input() {
	cout << "Nhap so luong Zattacker: "; cin >> numZattacker;
}
void CARRIER::Input() {
	cout << "Nhap so luong Carrier: "; cin >> numCarrier;
}
int PEDION::totalEnergy(){
	return numPedion*(M * S + (F + 1) * S / 2);
}
int ZATTACKER::totalEnergy() {
	return (M * S + P * P * S)*numZattacker;
}
int CARRIER::totalEnergy() {
	return (M * S + 4 * E * S)*numCarrier;
}
void PEDION::totalEnergy(int& x) {
	x = x + totalEnergy();
}
void ZATTACKER::totalEnergy(int& x) {
	x = x + totalEnergy();
}
void CARRIER::totalEnergy(int& x) {
	x = x + totalEnergy();
}
void PEDION::Output() {
	if (numPedion == 0) cout << "\nKhong co loai PEDION";
	else
	cout << "\nPEDION:     Khoi luong M: " << M << " Linh hoat F: " << F << " So nang luong da tieu thu tren 1 don vi: "
		<<totalEnergy()/numPedion;
}
void ZATTACKER::Output() {
	if (numZattacker == 0) cout << "\nKhong co loai ZATTACKER";
	else 
	cout << "\nZATTACKER:  Khoi luong M: " << M << " Suc manh P: " << P << " So nang luong da tieu thu tren 1 don vi: "
		<< totalEnergy()/numZattacker;
}
void CARRIER::Output() {
	if (numCarrier == 0) cout << "\nKhong co loai CARRIER";
	else
	cout << "\nCARRIER:    Khoi luong M: " << M << " Kho nang luong van chuyen E: " << E << " So nang luong da tieu thu tren 1 don vi: "
		<< totalEnergy()/numCarrier;
}
void PEDION::highestEnergy(int& max, int &i) {
	max = totalEnergy();
}
void ZATTACKER::highestEnergy(int& max, int &i) {
	if (max < totalEnergy()) {
		max = totalEnergy();
		i = 1;
	}
}
void CARRIER::highestEnergy(int& max, int &i) {
	if (max < totalEnergy()) {
		max = totalEnergy();
		i = 2;
	}
}