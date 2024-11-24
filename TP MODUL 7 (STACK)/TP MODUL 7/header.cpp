#include "header.h"
#include <iostream>

void createStack_103012300239(stack &S){
    top(S) = 0;
}

bool isEmpty_103012300239(stack S){
    if (top(S) == 0){
        return true;
    } else {
        return false;
    }
}

bool isFull_103012300239(stack S){
    if (top(S) == 15){
        return true;
    } else {
        return false;
    }
}

void push_103012300239(stack &S, infotype x){
    if (isFull_103012300239(S) == false){
        top(S) = top(S) + 1;
        info(S)[top(S)] = x;
    }
}

int pop_103012300239(stack &S){
    infotype x;

    x = info(S)[top(S)];
    top(S) = top(S) - 1;
    return x;
}

void printInfo_103012300239(stack S){
    int i;

    for(i = top(S); i >= 1; i--){
        cout << info(S)[i];
    }
}
