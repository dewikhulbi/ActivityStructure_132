#include <iostream>
using namespace std;

struct AlamatDetail
{
	char Desa[20];
	char Kota[20];

};

struct Mahasiswa
{
	char NIM[12];
	char Nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++) {
		cout << "Masukan NIM :";
		cin.getline(mhs[i].NIM,12);
		cout << "Masukan Nama :";
		cin.getline(mhs[i].Nama, 20);
		cout << "Masukan Alamat :";
		cout << "\n\tMasukan Desa :";
		cin.getline(mhs[i].alamat.Desa,20);
		cout << "\n\tMasukan Kota :";
		cin.getline(mhs[i].alamat.Kota,20);
		cout << "Masukan Umur :";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM =" << mhs[i].NIM;
		cout << "\nNama =" << mhs[i].Nama;
		cout << "\nDesa =" << mhs[i].alamat.Desa;
		cout << "\nKota =" << mhs[i].alamat.Kota;
		cout << "\nUmur =" << mhs[i].umur;
	}
}