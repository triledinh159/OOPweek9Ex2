#include <cstdlib>
#include <ctime>
#include "Robot.cpp"
int main()
{
	int max = 0,count=0;
	srand(time(NULL));
	ROBOT* rbt[3];
	PEDION ped;
	ZATTACKER zat;
	CARRIER car;
	rbt[0] = &ped;
	rbt[0]->Input();
	rbt[1] = &zat;
	rbt[1]->Input();
	rbt[2] = &car;
	rbt[2]->Input();
	for (int i = 0; i < 3; i++) rbt[i]->Output();
	for (int i = 0; i < 3; i++) rbt[i]->highestEnergy(max,count);
	cout << "\nLoai robot tieu thu nhieu nang luong nhat: ";
	if (count == 0) cout << "PEDION";
	if (count == 1) cout << "ZATTACKER";
	if (count == 2) cout << "CARRIER";
	int total=0;
	for (int i = 0; i < 2; i++) rbt[i]->totalEnergy(total);
	cout << "\nTong nang luong da tieu thu cua ca doan Robot: " << total;
}