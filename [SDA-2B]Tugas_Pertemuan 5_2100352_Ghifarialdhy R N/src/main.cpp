#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct barang
{
    
    int *kode = new int;
    int *jumlah = new int;
    string nama;

};
barang brg[100];


int main()
{
    cout << "================================" << endl;
    cout << "== Nama  : Ghifarialdhy R N" << endl;
    cout << "== NIM   : 2100352" << endl;
    cout << "== Kelas : RPL / 2B" << endl;
    cout << "================================" << endl;

    int n;
    cout << "Berapa data barang yang akan diinputkan : "; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "\t\t\t ----- INPUT DATA BARANG ----- \t\t\t\n" << endl;
        cout << "BARANG KE - [" << i << "] :" << endl;
        cout << "Masukan Kode Barang   : "; cin >> brg[i].kode[i];
        cout << "Masukan Nama Barang   : "; cin >> brg[i].nama;
        cout << "Masukan Jumlah Barang : "; cin >> brg[i].jumlah[i];

        system("cls");
    }
     
    cout << endl;

    cout << "\t\t\t ----- DATA BARANG ----- \t\t\t\n\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "==================================" << endl;
        cout << "== BARANG KE - [" << i << "] :" << endl;
        cout << "== Kode   : " << brg[i].kode[i] << endl;
        cout << "== Nama   : " << brg[i].nama << endl;
        cout << "== Jumlah : " << brg[i].jumlah[i] << endl;
        cout << "==================================" << endl;
    }
    

    delete [] brg->kode;
    
    delete [] brg->jumlah;

}
