#include <iostream>
#include "list.h"
using namespace std;

void createList(List &L){
    first(L) = NULL;
}

address allocate(infotype x){
    address p = new elmlist;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List L){
    address p = first(L);
    cout << "Isi list: ";
    while (p != NULL){
        //cout << info(p) << ", ";
        cout << info(p);
        p = next(p);
    }
    cout << endl;
}

void insertLast(List &L, address P){
    address Q;

    if (first(L) == NULL) {
        next(P) = first(L);
        first(L) = P;
    } else {
        Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertAfter(List &L, address prec, address P){
    if (next(prec) == NULL) {
        next(prec) = P;
    } else {
        next(P) = next(prec);
        next(prec) = P;
    }
}

void deleteLast(List &L, address &P){
    address Q;

    if (next(first(L)) == NULL) {
        P = first(L);
        first(L) = NULL;
    } else if (first(L) == NULL) {
        cout << "List kosong" << endl;
    } else {
        Q = first(L);
        while (next(next(Q)) != NULL) {
            Q = next(Q);
        }
        P = next(Q);
        next(Q) = NULL;
    }
}

void deleteAfter(List &L, address prec, address P){
    if (first(L) == NULL){
        cout << "List kosong" << endl;
    } else {
        P = next(prec);
        next(prec) = next(P);
        next(P) = NULL;
    }
}
