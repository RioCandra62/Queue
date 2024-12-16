#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    Queue Q;
    address P;
    createQueue(Q);

    P = newQueue(5);
    enQueue(Q, P);
    P = newQueue(7);
    enQueue(Q, P);
    P = newQueue(3);
    enQueue(Q, P);

    showQueue(Q);
    cout << endl;
    numOfQueue(Q);
    DelAll(Q);
    cout << endl;
    showQueue(Q);
}
