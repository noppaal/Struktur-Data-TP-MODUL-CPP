#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info
#define prev(P) P->prev

typedef struct Lagu infotype;
typedef struct elmList *address;

struct Lagu{
    string Penyanyi;
    string Judul;
};

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List{
    address first;
    address last;
};

bool isEmpty_103012300239(List L);
void createList_103012300239(List &L);
address createNewElmt_103012300239(infotype X, address P);
void insertFirst_103012300239(List &L, address P);
void insertAfter_103012300239(List &L, address P, address &prec);
void insertLast_103012300239(List &L, address P);
void deleteFirst_103012300239(List &L, address &P);
void deleteAfter_103012300239(List &L, address &P, address &prec);
void deleteLast_103012300239(List &L, address &P);
void concat_103012300239(List L1, List L2, List &L3);
address findLagu_103012300239(string Judul, List L);
void removeLagu_103012300239(string Judul, List &L);
void show_103012300239(List L);

#endif // DLL_H_INCLUDED
