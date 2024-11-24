#include "flight.h"
#include <iostream>
using namespace std;

void createListJadwal_103012300239(ListJadwal &L){
    first(L)=NULL;
}

adr_jadwalP createElementJadwal_103012300239(infotype X){
    adr_jadwalP P= new elemenJadwal;

    next(P)=NULL;
    info(P)=X;
}

void InsertLastJ_103012300239(ListJadwal &L, adr_jadwalP P){
    adr_jadwalP Q;
    if(first(L)==NULL){
        first(L)=P;
    }else{
        Q=first(L);
        while(next(Q)!=NULL){
            Q=next(Q);
        }
        next(Q)=P;
    }
}

void ShowJadwal_103012300239(ListJadwal L){
    adr_jadwalP P;

    if(first(L)==NULL){
        cout<<"Tidak ada jadwal!"<<endl;
    }else{
        P=first(L);
        while(P!=NULL){
            cout<<"Kode penerbangan"<<" "<<info(P).Kode<<", "<<"jenis pesawat"<<" "<<info(P).Jenis<<", "<<"tanggal penerbangan"<<" "<<info(P).Tanggal<<", "<<"waktu"<<" "<<info(P).Waktu<<", "<<"asal"<<" "<<info(P).Asal<<", "<<"tujuan"<<" "<<info(P).Tujuan<<", "<<"dengan kapasitas"<<" "<<info(P).Kapasitas<<" Orang"<<endl;
            P=next(P);
        }
    }
}

void DeleteFirstJ_103012300239(ListJadwal &L, adr_jadwalP &P){
    if(first(L)==NULL){
        cout<<"Tidak ada jadwal!"<<endl;
    }else{
        P=first(L);
        first(L)=next(P);
        next(P)=NULL;
    }
}

adr_jadwalP SearchJ_103012300239(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP Q;

    if(first(L)==NULL){
        return NULL;
    }else{
        Q=first(L);
        while((Q!=NULL)&& (info(Q).Asal!=dari)&&(info(Q).Tujuan!=ke)&&(info(Q).Tanggal!=tanggal)){
            Q=next(Q);
        }
        if((info(Q).Asal==dari)&&(info(Q).Tujuan==ke)&&(info(Q).Tanggal==tanggal)){
            return Q;
        }else{
            return NULL;
        }
    }
}