#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;

	cout << "Masukan NIM :";
	cin >> mhs.NIM;
	cout << "Masukan Nama :";
	cin >> mhs.nama;
	cout << "Alamat :";
	cout << "\t Masukan Desa :";
	cin >> mhs.alamat.desa;
	cout << "\t Masukan Kota :";
	cin >> mhs.alamat.kota;
	cout << "Masukan Umur :";
	cin >> mhs.umur;
}