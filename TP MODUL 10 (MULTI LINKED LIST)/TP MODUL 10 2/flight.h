#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) P->info
#define next(P) P->next
#define first(L) L.first

typedef struct jadwalPenerbangan infotype;
typedef struct elemenJadwal *adr_jadwalP;

struct jadwalPenerbangan{
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal{
    adr_jadwalP first;
};

void createListJadwal_103012300239(ListJadwal &L);
adr_jadwalP createElementJadwal_103012300239(infotype X);
void InsertLastJ_103012300239(ListJadwal &L, adr_jadwalP P);
void ShowJadwal_103012300239(ListJadwal L);
void DeleteFirstJ_103012300239(ListJadwal &L, adr_jadwalP &P);
adr_jadwalP SearchJ_103012300239(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
