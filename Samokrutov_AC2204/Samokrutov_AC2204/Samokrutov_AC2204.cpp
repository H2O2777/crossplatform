#include <iostream>
#include <string>

using namespace std;

struct Truba
{
	string nameT;
	int dlina;
	int diametr;
	string repair;
};

struct KS
{
	string nameKS;
	int aceh;
	int wceh;
	int kpd;
};

Truba InputTruba()
{
	Truba s;
	cout << "Truba name: ";
	cin >> s.nameT;
	cout << "Truba long: ";
	cin >> s.dlina;
	cout << "Truba diameter: ";
	cin >> s.diametr;
	return s;
}

void PrintTruba(Truba s)
{
	cout << "Truba: " << s.nameT
		<< "\nLong: " << s.dlina
		<< "\nDiameter: " << s.diametr << endl;
}

KS InputKS()
{
	KS s;
	cout << "Kompressor Station name: ";
	cin >> s.nameKS;
	cout << "All workshop: ";
	cin >> s.aceh;
	cout << "Working workshop: ";
	cin >> s.wceh;
	return s;
}


void PrintKS(KS s)
{
	cout << "Kompressor Station: " << s.nameKS
		<< "\nAll workshop: " << s.aceh
		<< "\nWorking workshop: " << s.wceh << endl;
}

int main()
{
	Truba tr = InputTruba();
	PrintTruba(tr);
	KS ks = InputKS();
	PrintKS(ks);

	return 0;
}