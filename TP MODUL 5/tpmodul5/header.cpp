#include <iostream>
#include "header.h"

using namespace std;

void createList_103012300239(List &L){
    first(L) = NULL;
}

address alokasi_103012300239(infotype x){
    address P = new elmList;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLast_103012300239(List &L, address p){
    address q;
    if (first(L) == NULL){
        first(L) = p;
    } else {
        q = first(L);
        while (next(q) != NULL) {
            q = next(q);
        }
        next(q) = p;
    }
}

void show_103012300239(List &L){
    address p = first(L);
    while (p != NULL){
        cout << info(p);
        if (next(p) != NULL)cout << ", ";
        p = next(p);
    }
    cout << endl;
}

address findMin_103012300239(List L){
    address minim, q;
    minim = first(L);
    q = first(L);
    while (next(q) != NULL){
        q = next(q);
        if (info(q) < info(minim)){
            minim = q;
        }
    }
    return minim;
}

void insertMid_103012300239(List &L, int value){
    int n, i;
    address q = alokasi_103012300239(value);
    address p = first(L);
    n = 1;
    while (next(p) != NULL){
        p = next(p);
        n++;
    }
    n = (n+1) / 2;
    p = first(L);
    for (i = 1; i < n; i++){
        p = next(p);
    }
    next(q) = next(p);
    next(p) = q;
}

int menu_103012300239(){
    cout << "==============MENU==============" << endl;
    cout << "1. Menambahkan N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan data terkecil" << endl;
    cout << "4. Menyisipkan data di tengah" << endl;
    cout << "0. EXIT" << endl;
    cout << "Masukkan menu: ";

    int input;
    cin >> input;
    return input;
}
