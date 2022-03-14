
#include <iostream>

using namespace std;

//ini struct ke 1
struct namaLengkap
{
    string firstName,
    lastname;
};


//ini struct ke 2
struct mahasiswa
{
    int nim,
    umur,
    nilaiSDA,
    totalNilai;
    namaLengkap namaMHS; //memanggil struct pertama
    string nama,
    status;
};
mahasiswa mhs[3];
int nilaibonus = 30;
void input(){
    for (int i = 0; i < 3; i++)
    {
    
    cout << "NIM           : "; cin >> mhs[i].nim;
    cout << "Nama Depan    : "; cin >> mhs[i].namaMHS.firstName;
    cout << "Nama Belakang : "; cin >> mhs[i].namaMHS.lastname;
    cout << "Umur          : "; cin >> mhs[i].umur;
    cout << "Nilai         : "; cin >> mhs[i].nilaiSDA;

    mhs[i].totalNilai = mhs[i].nilaiSDA + nilaibonus;

    if (mhs[i].totalNilai > 80)
    {
        mhs[i].status = "Lulus";
    }
    else if (mhs[i].totalNilai > 50 && mhs[i].totalNilai < 80)
    {
        mhs[i].status = "Remedial";
    }
    else
    {
        mhs[i].status = "Tidak Lulus";
    }
        system("cls");
    
    }
}

void output(){
    for (int i = 0; i < 3; i++)
{
    cout << "NIM         : " << mhs[i].nim << endl;
    cout << "Nama        : " << mhs[i].namaMHS.firstName << " " <<mhs[i].namaMHS.lastname << endl;
    cout << "Umur        : " << mhs[i].umur << endl;
    cout << "Nilai       : " << mhs[i].nilaiSDA << endl;
    cout << "Total nilai : " << mhs[i].totalNilai << endl;
    cout << "Status      : " << mhs[i].status << endl;
    cout << endl;
    cout << endl;
}
}
int main(){
   
   input();
   output();

    
    return 0;

}