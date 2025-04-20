#include <iostream>
using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    string alamat;
};

int main()
{
    // Membuat object struct
    Mahasiswa mhs;

    cout << "Masukan nim = ";
    cin >> mhs.nim;
    cout << "Masukan nama = ";
    cin >> mhs.nama;
    cout << "Masukan alamat = ";
    cin >> mhs.alamat;
