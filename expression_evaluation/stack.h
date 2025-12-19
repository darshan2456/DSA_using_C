#ifndef STACK_H
#define STACK_H

typedef struct stack stack;

stack* createStack(void);
int push(stack* s,int value);
int pop(stack* s);
int isEmpty(stack* s);
void destroyStack(stack* s);
int peek(stack* s);

#endif