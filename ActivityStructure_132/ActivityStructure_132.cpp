#include <iostream>
using namespace std;

struct mahasiswa
{
    string NIM;
    string nama;
    string alamat;
    int umur;
};

int main() {
    mahasiswa mhs1, mhs2;

    mhs1.NIM = "20220140132";
    mhs1.nama = "Dewi Khulbi";
    mhs1.alamat = "Purwokerto";
    mhs1.umur = 19;
}