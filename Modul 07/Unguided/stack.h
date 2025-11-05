// stack.h
#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef int infotype;
typedef struct
{
    infotype info[20];
    int top;
} Stack;

void createStack(Stack &S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);

#endif
