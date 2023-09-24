#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int* prev;
    int item;
    int* next;
} eent;

typedef struct {
    eent* head;
    size_t size;
} eentArray;

int index_inbound(eentArray array, size_t index) {
    return index >= array.size || index < 0;
}

eentArray createArray(int size) {
    eentArray array = {
        .head = malloc(size * sizeof(eent)),
        .size = size,
    } ;
    return array;
}

int appendItem(eentArray array, int item) {
    eent* ptr;
    while (ptr != NULL) {
        
    }
    return 1;
}

int main() {
    eentArray array = createArray('a');
}