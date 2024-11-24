#include <iostream>
#include "header.h"

using namespace std;

int main(){
    List L;
    address p;
    int input, x, n, i;

    createList_103012300239(L);

    input = menu_103012300239();
    while (input != 0){
        switch(input){
        case 1:
            cout << "Jumlah data yang akan ditambahkan: ";
            cin >> n;
            i = 1;
            while (i <= n){
                cout << "Masukkan data baru: ";
                cin >> x;
                p = alokasi_103012300239(x);
                insertLast_103012300239(L, p);
                i++;
            }
            cout << endl;
            break;

        case 2:
            show_103012300239(L);
            cout << endl;
            break;

        case 3:
            p = findMin_103012300239(L);
            cout << "Data terkecil: " << info(p) << endl;
            cout << endl;
            break;

        case 4:
            cout << "Masukkan data yang ingin disisipkan: ";
            cin >> x;
            insertMid_103012300239(L, x);
            cout << endl;
            break;
        }
        input = menu_103012300239();
    }
    cout << endl;
    cout << "ANDA TELAH KELUAR DARI PROGRAM";
    cout << endl;

    return 0;
}
