﻿#include <iostream>
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
	s.diametr += 2;
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

void PrintKS(const KS& s)
{
	cout << "Kompressor Station: " << s.nameKS
		<< "\nAll workshop: " << s.aceh
		<< "\nWorking workshop: " << s.wceh << endl;
}

void EditKS(KS& s)
{
	s.aceh -= 1;
	s.wceh += 2;
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

void SaveKS(const KS& s)
{
	ofstream out;
	out.open("OTBET.txt", ios::app );
	out << "Kompressor Station: " << s.nameKS
		<< "\nAll workshop: " << s.aceh
		<< "\nWorking workshop: " << s.wceh << endl;
		out.close();
}

void PrintMenu()
{
	cout << "1. Add Truba" << endl
		<< "2. Add KS" << endl
		<< "3. View Truba and KS" << endl
		<< "4. Edit Truba" << endl
		<< "5. Edit KS" << endl
		<< "6. Save" << endl
		<< "7. Load" << endl
		<< "0. Exit" << endl;
}

int main()
{
	Truba tr;
	KS ks;
	while (1)
	{
		PrintMenu();
		int i = 0;
		cin >> i;
		switch (i)
		{
		case 1:
		{
			tr = InputTruba();
			break;
		}
		case 2:
		{
			ks = InputKS();
			break;
		}
		case 3:
		{
			PrintTruba(tr);
			PrintKS(ks);
			break;
		}
		case 4:
		{
			EditTruba(tr);
			break;
		}
		case 5:
		{
			EditKS(ks);
			break;
		}
		case 6:
		{
			SaveTruba(tr);
			SaveKS(ks);
			break;
		}
		case 7:
		{
			tr = LoadTruba();
			ks = LoadKS();
			break;
		}
		case 0:
		{
			return 0;
		}
		default:
		{
			cout << "ERROR" << endl;
		}
		}
	}
	return 0;
}