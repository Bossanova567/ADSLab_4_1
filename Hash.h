#ifndef ADSLAB_4_1_HASH_H
#define ADSLAB_4_1_HASH_H

#include <iostream>
#include "List.h"
#include <list>
#include <cmath>
using namespace std;

void ChainedHashInsert(list<int> *T, int x, int m);
int ChainedHashSearch(list<int> *T, int k, int m);
void ChainedHashDelete(list<int> *T, int x, int m);
int HashFunctionDivision(int k, int m);
int HashFunctionMultiplication(int k, int m);
void ChainedHashShow(list<int>* T, int m);

#endif //ADSLAB_4_1_HASH_H
