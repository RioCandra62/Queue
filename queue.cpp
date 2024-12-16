#include <iostream>
using namespace std;
#include "queue.h"

void createQueue(Queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

address newQueue(infotype x){
    address P = new elemQueue;
    info(P) = x;
    next(P) = NULL;
    return P;
}

bool isEmpty(Queue Q){
    if(head(Q) != NULL){
        return false;
    }else {
        return true;
    }
}

void enQueue(Queue &Q, address P){
    if(!isEmpty(Q)){
        next(tail(Q)) = P;
        tail(Q) = P;
    }else {
        head(Q) = P;
        tail(Q) = P;
    }
}

void deQueue(Queue &Q, address P){
    if(!isEmpty(Q)){
        P = head(Q);
        head(Q) = next(P);
        next(P) = NULL;
    }else {
        head(Q) = NULL;
        tail(Q) = NULL;
    }
}

void showQueue(Queue Q){
    if (!isEmpty(Q)){
        address P = head(Q);
        while (P != NULL){
            cout << info(P) << " ";
            P = next(P);
        }
    }else {
        cout << "No Queue !" << endl;
    }
}

void numOfQueue(Queue Q){
    if (!isEmpty(Q)){
        int i = 0;
        address P = head(Q);
        while (P != NULL){
            i++;
            P = next(P);
        }
        cout << i;
    }else {
        cout << "No Queue !" << endl;
    }
}

void DelAll(Queue &Q){
    if (!isEmpty(Q)){
        address P = head(Q);
        while (P != NULL){
            deQueue(Q, P);
            P = next(P);
        }
    }else {
        cout << "No Queue !" << endl;
    }
}
