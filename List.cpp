#include "List.h"
Item *head = NULL;
Item *front = NULL;
Item *rear = NULL;
Item *first = NULL;
Item *last = NULL;
void push(datatype data){
    Item *temp = new Item;
    temp->data = data;
    temp->next = head;
    head = temp;
}
void pop(){
    if (head == NULL){
        cout << "Stack is empty" << endl;
    }
    else {
        Item *temp = head;
        head = temp->next;
        delete temp;
    }
}
void showStack(){
    Item *temp = head;
    while (temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void showQueue(){
    Item *temp = front;
    while (temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void showList(){
    Item *temp = first;
    while (temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void enqueue(datatype data){
    Item *temp = new Item;
    temp->data = data;
    temp->next = NULL;
    if (front == NULL && rear == NULL) {
        front = temp;
    }
    else {
        rear->next = temp;
    }
    rear = temp;
}
void dequeue(){
    if (front == NULL){
        cout << "Queue is empty" << endl;
    }
    else {
        Item *temp = front;
        front = temp->next;
        delete temp;
    }
}
void add_begin(datatype data) {
    Item *temp = new Item;
    temp->data = data;
    temp->next = first;
    temp->previous = NULL;
    if (first != NULL && last != NULL){
        first->previous = temp;
    }
    else {
        last = temp;
    }
    first = temp;
}
void add_end(datatype data){
    Item *temp = new Item;
    temp->data = data;
    temp->next = NULL;
    temp->previous = last;
    if (first != NULL && last != NULL){
        last->next = temp;
    }
    else {
        first = temp;
    }
    last = temp;
}
void del_begin(){
    if (first == NULL){
        cout << "List is empty" << endl;
    }
    else {
        Item *temp = first;
        first = temp->next;
        if (first != NULL){
            first->previous = NULL;
        }
        else {
            last = NULL;
        }
        delete temp;
    }
}
void del_end(){
    if (last == NULL){
        cout << "List is empty" << endl;
    }
    else {
        Item *temp = last;
        last = temp->previous;
        if (last != NULL){
            last->next = NULL;
        }
        else {
            first = NULL;
        }
        delete temp;
    }
}
Item* search(datatype data){
    Item *temp = first;
    while (temp != NULL){
        if (temp->data == data)
            return temp;
        else {
            temp = temp->next;
        }
    }
    cout << "No such element found" << endl;
    return NULL;
}
void add_mid(datatype data, datatype element){
    if (search(data) != NULL){
        if (search(data) == last){
            add_end(element);
        }
        else {
            Item *pkey = search(data);
            Item *temp = new Item;
            temp->data = element;
            temp->next = pkey->next;
            temp->previous = pkey;
            pkey->next = temp;
            (temp->next)->previous = temp;
        }
    }
}
void del_mid(datatype data){
    if (search(data) != NULL){
        if (search(data) == first){
            del_begin();
        }
        else if (search(data) == last){
            del_end();
        }
        else {
            Item *pkey = search(data);
            (pkey->previous)->next = pkey->next;
            (pkey->next)->previous = pkey->previous;
            delete pkey;
        }
    }
}