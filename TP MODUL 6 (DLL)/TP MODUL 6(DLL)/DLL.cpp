#include "DLL.h"
using namespace std;

bool isEmpty_103012300239(List L){
    if (first(L) == NULL && last(L) == NULL){
        return true;
    } else {
        return false;
    }
}

void createList_103012300239(List &L){
    first(L) = NULL;
    last(L) = NULL;
}

address createNewElmt_103012300239(infotype X, address P){
    P = new elmList;

    if (P == NULL){
        return NULL;
    }

    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst_103012300239(List &L, address P){
    if (isEmpty_103012300239(L)){
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(next(P)) = P;
        first(L) = P;
    }
}

void insertAfter_103012300239(List &L, address P, address &prec){
    next(P) = next(prec);
    prev(P) = prec;
    prev(next(P)) = P;
    next(prec) = P;
}

void insertLast_103012300239(List &L, address P){
    if (isEmpty_103012300239(L)){
        first(L) = P;
        last(L) = P;
    } else {
        prev(P) = last(L);
        next(prev(P)) = P;
        last(L) = P;
    }
}

void deleteFirst_103012300239(List &L, address &P){
    if (first(L) == last(L)){
        P = first(L);
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = first(L);
        first(L) = next(P);
        prev(next(P)) = NULL;
        next(P) = NULL;
    }
}

void deleteAfter_103012300239(List &L, address &P, address &prec){
    if (next(prec) == last(L)) {
        P = next(prec);
        last(L) = prec;
        next(prec) = NULL;
        prev(P) = NULL;
    } else {
        P = next(prec);
        next(prec) = next(P);
        prev(next(P)) = prec;
        next(P) = NULL;
        prev(P) = NULL;
    }
}

void deleteLast_103012300239(List &L, address &P){
    if (first(L) == last(L)){
        P = last(L);
        first(L) = NULL;
        last(L) = NULL;
    } else {
        P = last(L);
        last(L) = prev(P);
        next(prev(P)) = NULL;
        prev(P) = NULL;
    }
}

void concat_103012300239(List L1, List L2, List &L3){
    first(L3) = first(L1);
    next(last(L1)) = first(L2);
    prev(first(L2)) = last(L1);
    last(L3) = last(L2);
}

address findLagu_103012300239(string Judul, List L){
    address p = first(L);
    if (isEmpty_103012300239(L)){
        return NULL;
    } else {
        while (p != NULL && info(p).Judul != Judul){
            p = next(p);
        }
        if (p != NULL && info(p).Judul == Judul){
            return p;
        } else {
            return NULL;
        }
    }
}

void removeLagu_103012300239(string Judul, List &L){
    address p, q;
    if (isEmpty_103012300239(L)){
        cout << "List Kosong";
    } else {
        p = findLagu_103012300239(Judul, L);
        if (p == first(L)){
            deleteFirst_103012300239(L, q);
        } else if (p == last(L)){
            deleteLast_103012300239(L, q);
        } else {
            deleteAfter_103012300239(L, q, prev(p));
        }
    }
}

void show_103012300239(List L){
    address p = first(L);
    if (isEmpty_103012300239(L)){
        cout << "List Kosong" << endl;
    } else {
        while (p != NULL){
            cout << info(p).Penyanyi<< " - " << info(p).Judul << endl;
            p = next(p);
        }
    }
    cout << endl;
}
