#include "flight.h"
#include <iostream>
using namespace std;

int main()
{
    ListJadwal L;
    int n;
    adr_jadwalP P;
    infotype X;

    createListJadwal_103012300239(L);

    //memasukkan jadwal
    cout<<"Masukkan berapa jadwal yang ingin dimasukkan: ";
    cin>>n;
    cout<<"Masukkan data! "<<endl;
    for(int i=0;i<n;i++){
       cin>>X.Kode>>X.Jenis>>X.Tanggal>>X.Waktu>>X.Asal>>X.Tujuan>>X.Kapasitas;
       P=createElementJadwal_103012300239(X);
       InsertLastJ_103012300239(L,P);
    }
    cout<<endl;

    //show isi jadwal
    cout<<"List seluruh daftar penerbangan:"<<endl;
    ShowJadwal_103012300239(L);
    cout<<endl;
    //delete jadwal
    DeleteFirstJ_103012300239(L, P);
    cout<<"List daftar penerbangan setelah didelete:"<<endl;
    ShowJadwal_103012300239(L);
    cout<<endl;

    //cari penerbangan surabaya ke malang tanggal 9 desember 2022
    P=SearchJ_103012300239(L, "surabaya", "malang", "9desember2022");
    if(P!=NULL){
        cout<<"Ditemukan penerbangan tersebut."<<endl;
        cout<<"Kode penerbangan"<<" "<<info(P).Kode<<", "<<"jenis pesawat"<<" "<<info(P).Jenis<<", "<<"tanggal penerbangan"<<" "<<info(P).Tanggal<<", "<<"waktu"<<" "<<info(P).Waktu<<", "<<"asal"<<" "<<info(P).Asal<<", "<<"tujuan"<<" "<<info(P).Tujuan<<", "<<"dengan kapasitas"<<" "<<info(P).Kapasitas<<" Orang"<<endl;
    }else{
        cout<<"Data penerbangan tersebut tidak ditemukan";
    }
    return 0;
}