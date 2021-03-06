#ifndef BINARYHEAP_MINHEAP_H
#define BINARYHEAP_MINHEAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
typedef struct MinHeap MinHeap;

struct Node{
    int data;
    Node* lChild;
    Node* rChild;
};

struct MinHeap{
    Node* root;
};

MinHeap* MinHeap_new();
void MinHeap_insert(MinHeap* t, int data);
int MinHeap_get_min(MinHeap *t);
void MinHeap_free(MinHeap* t);

#endif //BINARYHEAP_MINHEAP_H
