#include <stdio.h>
#include <stdlib.h>
#include "numtypes.h"

typedef struct {
    int* prev;
    int item;
    int* next;
} eent;

typedef struct {
    int* head;
    size_t size;
} Array;

int index_inbound(Array array, size_t index) {
    return index >= array.size || index < 0;
}

Array createArray(size_t size) {
    Array array = {
        .head = malloc(sizeof(int) * size * 3),
        .size = size,
    };
    array.head = 0;
    array.head[-1] = 0;
    array.head[1] = 0;
    return array;
}

int appendItem(Array array, int item) {
    
    return 1;
}

int main() {
    createArray(5);
}