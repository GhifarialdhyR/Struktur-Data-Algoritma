#include <iostream>


using namespace std;


struct dataBarang{
    
    int *data=new int;
    string *nama=new string[20];
    int *kode=new int;
    int *jumlah=new int;
};

dataBarang brg;

int main(){
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
        cout << "Masukan Kode Barang   : "; cin >> brg.kode[i];
        cout << "Masukan Nama Barang   : "; cin >> brg.nama[i];
        cout << "Masukan Jumlah Barang : "; cin >> brg.jumlah[i];

        system("cls");
    }
    cout << endl;

    cout << "\t\t\t ----- DATA BARANG ----- \t\t\t\n\n";

    for (int i = 1; i <= n; i++)
    {
        cout << "==================================" << endl;
        cout << "== BARANG KE - [" << i << "] :" << endl;
        cout << "== Kode   : " << brg.kode[i] << endl;
        cout << "== Nama   : " << brg.nama[i] << endl;
        cout << "== Jumlah : " << brg.jumlah[i] << endl;
        cout << "==================================" << endl;
    }
    delete []brg.nama;
    delete []brg.kode;
    delete []brg.jumlah;
    
    return 0;
}