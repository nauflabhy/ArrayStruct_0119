#include <iostream>
using namespace std;

struct alamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    string alamat;
};
int main() {
    for (int m = 0; m < 2; m++)
    mahasiswa mhs[2];

    {
        cout << "Data ke-" << m + 1 << endl;
        cout << "NIM  :"; cin >> mhs[m].nim;
        cout << "NAMA :"; cin.ignore(); getline(cin, mhs[m].nama);
        cout << "ALAMAT KOTA  :"; getline(cin,mhs[m].alamat.kota);
        cout << endl;
    }

    cout << "Data Mahasiswa" << endl;
    for (int m = 0; m < 2; m++)
    {
        cout << "Data ke-" << m + 1 << endl;
        cout << "NIM  :" << mhs[m].nim << endl;
        cout << "NAMA :" << mhs[m].nama << endl;
        cout << "ALAMAT DESA :" << mhs[m].alamat.desa << endl;
        cout << "ALAMAT KOTA :" << mhs[m].alamat.kota << endl;
        cout << endl;
    }
    