#include <iostream>
using namespace std;

int bilSatu, bilDua;

void input()
{
	cout << "Masukan Bilangan pertama = ";
	cin >> bilSatu;
	cout << "Masukan Bilangan keDua = ";
	cin >> bilDua;

}
float penjumlahan(float a, float b)
{
	return a + b;
}
float pembagian(float a, float b)
{
	return a + b;
}
float perkalian(float a, float b)
{
	return a + b;
}
float pengurangan(float a, float b)
{
	return a + b;
}
int main()
{
	int pilihan;

	do
	{
		cout << "============================" << endl;
		cout << "MENU" << endl;
		cout << "1. Penjumlahan " << endl;
		cout << "2. Pembagian " << endl; 
		cout << "3. Perkalian " << endl;
		cout << "4. Pengurangan " << endl;
		cout << "5. EXIT " << endl;
		cout << "Masukan Pilihan 1/2/3/4/5 :" ;
		cin >> pilihan;
	} while (pilihan != 5);
	switch (pilihan)
	{
	case 1:
		input();
		cout << "Hasil penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
		break;
	case 2:
		input();
		cout << "Hasil pembagian = " << pembagian(bilSatu, bilDua) << endl;
		break;
	case 3:
		input();
		cout << "Hasil perkalian = " << perkalian(bilSatu, bilDua) << endl;
		break;
	case 4:
		input();
		cout << "Hasil pengurangan = " << pengurangan(bilSatu, bilDua) << endl;
		break;
	case 5:
		cout << "Pilihan tidak ada" << endl;
		break;

	}
}