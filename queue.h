#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
using namespace std;
#include <iostream>
#define next(P) P->next
#define tail(Q) Q.tail
#define head(Q) Q.head
#define info(P) P->info

typedef int infotype;
typedef struct elemQueue *address;

struct elemQueue{
    infotype info;
    address next;
};

struct Queue{
    address head;
    address tail;
};

void createQueue(Queue &Q);
address newQueue(infotype x);

bool isEmpty(Queue Q);

void enQueue(Queue &Q, address P);
void deQueue(Queue &Q, address P);
void numOfQueue(Queue Q);


void DelAll(Queue &Q);
void showQueue(Queue Q);

#endif // QUEUE_H_INCLUDED
