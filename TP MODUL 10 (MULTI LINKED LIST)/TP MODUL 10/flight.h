#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef struct elmJadwal *adr_JadwalP;
typedef struct jadwalPenerbangan infotype;

struct jadwalPenerbangan{
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

struct elmJadwal {
    infotype info;
    adr_JadwalP next;
};

struct ListJadwal{
    adr_JadwalP first;
};

void createListJadwal_103012300239(ListJadwal &L);
adr_JadwalP createElemenJadwal_103012300239(infotype x);
void insertLastJ_103012300239(ListJadwal &L, adr_JadwalP P);
void showJadwal_103012300239(ListJadwal L);
void deleteFirstJ_103012300239(ListJadwal &L, adr_JadwalP P);
adr_JadwalP searchJ_103012300239(ListJadwal L, string dari, string ke, string tanggal);


#endif // FLIGHT_H_INCLUDED
