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
    Mahasiswa mhs;
    cout <<"Nomor Mahasiswa:";
    cin >>mhs.nim;
    cout <<"Nama Mahasiswa:";
    cin >> mhs.nama;

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
    cout <<"\n Alamat:"<<mhs.alamat;
    cout <<"\n Umur:"<<mhs.umur;

}
}
