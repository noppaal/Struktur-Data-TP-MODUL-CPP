#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

#define head(Q) Q.head
#define tail(Q) Q.tail
#define next(P) P->next
#define info(P) P->info

struct infotype{
    string nama;
    int usia;
    string pekerjaan;
    bool prioritas;
    int nomor_antrean;
    bool kondisi_darurat;
    int waktu_daftar;
};

struct ElemQ{
    infotype info;
    ElemQ *next;
};

struct Queue{
    ElemQ *head;
    ElemQ *tail;
};

void createQueue_103012300239(Queue &Q);
bool isEmpty_103012300239(Queue Q);
ElemQ* createElemQueue_103012300239(string nama, int usia, string pekerjaan, int nomor_antrean, int waktu_daftar);
void enqueue_103012300239(Queue &Q, ElemQ *P);
void dequeue_103012300239(Queue &Q, ElemQ *&P);
ElemQ* front_103012300239(Queue Q);
ElemQ* back_103012300239(Queue Q);
int size_103012300239(Queue Q);
void printInfo_103012300239(Queue Q);
void serveQueue_103012300239(Queue &Q);
void reassignQueue_103012300239(Queue &Q);
void checkWaitingTIme_103012300239(Queue &Q, int waktu_sekarang);
void emergencyHandle_103012300239(Queue &Q, int nomor_antrean);
void updatePriority_103012300239(Queue &Q);
ElemQ* findAndRemove_103012300239(Queue Q, int nomor_antrean);


#endif // HEADER_H_INCLUDED
