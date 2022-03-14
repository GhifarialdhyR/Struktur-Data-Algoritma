#include <iostream>

using namespace std;

int main()
{
    int hasil[3][2]; //variabel untuk menjumlahkan matriks 1 dengan matriks 2
    int matriks1[3][2] = {
        {2,-5},
        {5,2},
        {4,3},
    }; // fungsi array untuk matriks ke 1

    int matriks2[3][2] = {
        {9,-2},
        {5,4},
        {-6,5},
    }; // fungsi array untuk matriks ke 2

    // menampilkan bilangan matriks ke 1
    cout << "Bilangan Matriks ke - 1" << endl;
    for (int i = 0; i < 3; i++) //pengulangan pertama untuk menampilkan baris pada matriks ke 1
    {
        for (int j = 0; j < 2; j++) //pengulangan kedua untuk menampilkan kolom pada matriks ke 1
        {
            cout << matriks1[i][j] << " ";
        }
        cout << endl;
    }

    // menampilkan bilangan matriks ke 2
    cout << "Bilangan Matriks ke - 2" << endl;
    for (int i = 0; i < 3; i++) //pengulangan pertama untuk menampilkan baris pada matriks ke 2
    {
        for (int j = 0; j < 2; j++) //pengulangan kedua untuk menampilkan kolom pada matriks ke 2
        {
            cout << matriks2[i][j] << " ";
        }
        cout << endl;
    }
    
    // menampilkan penjumlahan antara kedua matriks
    cout << "Hasil Penjumlahan dari kedua matriks tersebut adalah : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; //variabel untuk menjumlahkan matriks 1 dengan matriks 2
            cout << hasil[i][j] << "\t"; // menampilkan hasil dari penjumlahan matriks 1 dengan matriks 2
        }
        cout << endl;
    }
    
    return 0;

}