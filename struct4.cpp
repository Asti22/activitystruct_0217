#include <iostream>
using namespace std;

struct DetailAlamat{
    string desa;
    string kota;

};
struct Mahasiswa
{
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;

};
int main(){
    Mahasiswa mhs[3];
    for (int i=0; i<3;i++)
    cout <<"Nomor Mahasiswa:";
    getline(cin,mhs.nim);
    cout <<"Nama Mahasswa:";
    getline(cin,mhs.nama);
    cout <<"Alamat Mahasiswa:";
    cout << "\t nama Desa:";
    cin >> mhs.alamat.desa;
    cout <<"\t nama Kota:";
    cin >> mhs.alamat.kota;

    cout <<"Umur Mahasiswa:";
    cin>> mhs.umur;

    cout <<endl;
    cout <<"\n Nim:"<<mhs.nim;
    cout <<"\n Nama:" <<mhs.nama;
    cout <<"\n Alamat:";
    cout <<"\n Desa:"<<mhs.alamat.desa;
    cout <<"\n Kota:" <<mhs.alamat.kota;
    cout <<"\n Umur:"<<mhs.umur;

}