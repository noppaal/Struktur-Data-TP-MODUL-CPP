#include <iostream>
#include "list.h"

using namespace std;

int main(){
    List L;
    createList(L);
    int n;
    address p;

    /*
    cout << "Masukkan angka pertama: ";
    cin >> n;

    p = allocate(n);
    insertFirst(L, p);
    printInfo(L);

    cout << "Masukkan angka kedua: ";
    cin >> n;

    p = allocate(n);
    insertFirst(L, p);
    printInfo(L);

    cout << "Masukkan angka ketiga: ";
    cin >> n;

    p = allocate(n);
    insertFirst(L, p);
    printInfo(L);*/

    int i;
    for (i = 1; i <= 12; i++){
        cout << "Digit " << i << " : ";
        cin >> n;
        p = allocate(n);
        insertLast(L, p);
    }
    printInfo(L);




    return 0;
}
