#include <iostream>
#include "DLL.h"

using namespace std;

int main(){
    List POP, ROCK, GABUNG;
    address p;
    int n, i;
    string judul;
    infotype x;

    createList_103012300239(POP);
    createList_103012300239(ROCK);
    createList_103012300239(GABUNG);

    //Inisiasi list ROCK 1
    x.Judul = "WelcomeToJungle";
    x.Penyanyi = "GunNRoses";
    p = createNewElmt_103012300239(x,p);
    insertFirst_103012300239(ROCK,p); //Insert First

    //Inisiasi list ROCK 2
    x.Judul = "HighwayToHell";
    x.Penyanyi = "ACDC";
    p = createNewElmt_103012300239(x,p);
    insertLast_103012300239(ROCK,p); //Insert Last

    //Inisiasi list ROCK 3
    x.Judul = "BohemianRhapsody";
    x.Penyanyi = "Queen";
    p = createNewElmt_103012300239(x,p);
    insertLast_103012300239(ROCK,p); //Insert Last

    cout << "List lagu ROCK: " << endl;
    show_103012300239(ROCK);

    cout << "Masukkan banyaknya Lagu POP yang ingin dimasukkan: ";
    cin >> n;

    for (i = 1; i <= n; i++){
        cout << "Masukkan lagu POP(Penyanyi Judul): ";
        cin >> x.Penyanyi >> x.Judul;

        p = createNewElmt_103012300239(x,p);
        insertLast_103012300239(POP,p); //Insert Last
    }
    cout << endl;

    cout << "List lagu POP: " << endl;
    show_103012300239(POP);

    cout << "Tambahkan lagu ROCK setelah elemen pertama(Penyanyi Judul): ";
    cin >> x.Penyanyi >> x.Judul;
    p = createNewElmt_103012300239(x,p);
    insertAfter_103012300239(ROCK, p, first(ROCK)); //insert After
    cout << endl;

    cout << "List lagu ROCK: " << endl;
    show_103012300239(ROCK);

    //Menggabungkan 2 List
    cout << "Hasil penggabungan 2 List" << endl << endl;
    concat_103012300239(ROCK, POP, GABUNG);
    cout << "List semua lagu: " << endl;
    show_103012300239(GABUNG);


    cout << "Masukkan judul lagu yang dicari: ";
    cin >> judul;
    p = findLagu_103012300239(judul, GABUNG);
    if (p != NULL){
        cout << info(p).Penyanyi<< " - " << info(p).Judul << endl;
    } else {
        cout << "Lagu " << judul << " tidak ditemukan" << endl;
    }
    cout << endl;

     cout << "Masukkan judul lagu yang dicari: ";
    cin >> judul;
    p = findLagu_103012300239(judul, GABUNG);
    if (p != NULL){
        cout << info(p).Penyanyi<< " - " << info(p).Judul << endl;
    } else {
        cout << "Lagu " << judul << " tidak ditemukan" << endl;
    }
    cout << endl;

    cout << "Masukkan lagu yang ingin di hapus: ";
    cin >> judul;
    removeLagu_103012300239(judul, GABUNG);
    cout << "List semua lagu: " << endl;
    show_103012300239(GABUNG);

    cout << "Masukkan lagu yang ingin di hapus: ";
    cin >> judul;
    removeLagu_103012300239(judul, GABUNG);
    cout << "List semua lagu: " << endl;
    show_103012300239(GABUNG);

    cout << "Masukkan lagu yang ingin di hapus: ";
    cin >> judul;
    removeLagu_103012300239(judul, GABUNG);
    cout << "List semua lagu: " << endl;
    show_103012300239(GABUNG);

    return 0;
}
