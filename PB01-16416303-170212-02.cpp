// NIM/Nama : 16416303
// Nama file: PB01-16416303-170212-02.cpp
// Tanggal  : 12 Febuari 2017
// Deskripsi: program input data mahasiswa
#include <iostream>
#include <string>
using namespace std;

int main(){
    typedef struct{
        string nama;
        string nim;
    }user;
    user jaya;

    //input nama dan nim
    cout << "masukkan nama: ";
    cin >> jaya.nama;
    cout << "masukkan nim: ";
    cin >> jaya.nim;
    //output nama dan nim
    cout << jaya.nama << " adalah mahasiswa ITB dengan NIM " << jaya.nim;

    return 0;
}
