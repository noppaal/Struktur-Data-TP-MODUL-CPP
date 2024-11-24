#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

/*103012300239, 0 adalah digit ke-9 NIM. 0 mod 3 adalah 0,
maka data yang disimpan adalah int*/

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList_103012300239(List &L);
address alokasi_103012300239(infotype x);
void insertLast_103012300239(List &L, address p);
void show_103012300239(List &L);
address findMin_103012300239(List L);
void insertMid_103012300239(List &L, int value);
int menu_103012300239();

#endif // HEADER_H_INCLUDED
