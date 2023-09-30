#include <iostream>
#include <string>
#include <fstream>

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

void PrintTruba(const Truba& s)
{
	cout << "Truba: " << s.nameT
		<< "\nLong: " << s.dlina
		<< "\nDiameter: " << s.diametr << endl;
}

void EditTruba(Truba& s)
{
	s.dlina -= 1;
}

Truba LoadTruba()
{
	ifstream in;
	in.open("Truba.txt",ios::in);
	Truba s;
	in >> s.nameT;
	in >> s.dlina;
	in >> s.diametr;
	in.close();
	return s;
}

void SaveTruba(const Truba& s)
{
	ofstream out;
	out.open("OTBET.txt", ios::out);
	out << "Truba: " << s.nameT
		<< "\nLong: " << s.dlina
		<< "\nDiameter: " << s.diametr << endl;
	out.close();
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

KS LoadKS()
{
	ifstream in;
	in.open("KS.txt", ios::in);
	KS s;
	in >> s.nameKS;
	in >> s.aceh;
	in >> s.wceh;
	in.close();
	return s;
}

void SaveKS(KS s)
{
	ofstream out;
	out.open("OTBET.txt", ios::app );
	out << "Kompressor Station: " << s.nameKS
		<< "\nAll workshop: " << s.aceh
		<< "\nWorking workshop: " << s.wceh << endl;
	out.close();
}

int main()
{
	Truba tr = LoadTruba();
	SaveTruba(tr);
	//EditTruba(tr);
	//PrintTruba(tr);
	KS ks = LoadKS();
	SaveKS(ks);

	return 0;
}