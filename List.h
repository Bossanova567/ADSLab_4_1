#ifndef DMLAB_4_LIST_H
#define DMLAB_4_LIST_H
#include <iostream>
using namespace std;

typedef int datatype;
struct Item{
    datatype data;
    Item* next;
    Item* previous;
    Item *head, *temp,  *front, *rear, *first, *last;
};
void push(datatype data);
void pop();
void showStack();
void showQueue();
void showList();
void enqueue(datatype data);
void dequeue();
void add_begin(datatype data);
void add_end(datatype data);
void del_begin();
void del_end();
Item* search(datatype data);
void add_mid(datatype data, datatype element);
void del_mid(datatype data);

#endif //DMLAB_4_LIST_H