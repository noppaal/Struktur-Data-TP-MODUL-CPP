#include "header.h"
#include <iostream>

using namespace std;

int main(){
    // NIM saya 103012300239 digit terakhir 9 mod 4 = 1
    stack S, S2;
    infotype pop;
    createStack_103012300239(S);
    createStack_103012300239(S2);

    // input HALOBANDUNG
    push_103012300239(S, 'H');
    push_103012300239(S, 'A');
    push_103012300239(S, 'L');
    push_103012300239(S, 'O');
    push_103012300239(S, 'B');
    push_103012300239(S, 'A');
    push_103012300239(S, 'N');
    push_103012300239(S, 'D');
    push_103012300239(S, 'U');
    push_103012300239(S, 'N');
    push_103012300239(S, 'G'); //top

    while (!isEmpty_103012300239(S)){
        pop = pop_103012300239(S);
        push_103012300239(S2, pop);
    }
    printInfo_103012300239(S2);
    cout << endl;

    // pop HALO
    pop = pop_103012300239(S2); //H
    pop = pop_103012300239(S2); //A
    pop = pop_103012300239(S2); //L
    pop = pop_103012300239(S2); //O

    printInfo_103012300239(S2);


    return 0;
}
