#include "Hash.h"

const float A = (sqrt(5) - 1)/2;

void ChainedHashInsert(list<int>* T, int x, int m){
    int index = HashFunctionMultiplication(x, m);
    T[index].push_front(x);
}

int ChainedHashSearch(list<int>* T, int k, int m){
    int index = HashFunctionMultiplication(k, m);
    for(auto ii=T[index].begin(); ii != T[index].end(); ii++)
        if (*ii == k)
            return *ii;
    cout << "No such item in the list" << endl;
    return NULL;
}

void ChainedHashDelete(list<int>* T, int x, int m){
    int index = HashFunctionMultiplication(x, m);
    for(auto ii=T[index].begin(); ii != T[index].end(); ii++)
        if (*ii == x) {
            T[index].erase(ii);
            break;
        }
}

void ChainedHashShow(list<int>* T, int m){
    for (int i = 0; i < m; i++) {
        cout << i;
        for (auto x : T[i])
            cout << " -> " << x;
        cout << endl;
    }
}

int HashFunctionDivision(int k, int m){
    return (k % m);
}

int HashFunctionMultiplication(int k, int m){
    double key = k, intPart;
    return floor(m * modf(key*A, &intPart));
}