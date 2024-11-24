#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

#define top(S) S.top
#define info(S) S.info

typedef char infotype;
struct stack{
    infotype info[15];
    int top;
};

void createStack_103012300239(stack &S);
bool isEmpty_103012300239(stack S);
bool isFull_103012300239(stack S);
void push_103012300239(stack &S, infotype x);
int pop_103012300239(stack &S);
void printInfo_103012300239(stack S);

#endif // HEADER_H_INCLUDED
