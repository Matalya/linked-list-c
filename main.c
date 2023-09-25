#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* head;
    size_t size;
} Array;

int index_inbound(Array array, size_t index) {
    return index >= array.size || index < 0;
}

Array createArray(int size) {
    Array array = {
        .head = malloc(size * sizeof(int)),
        .size = size,
    } ;
    return array;
}

int appendItem(Array array, int item) {
    
    return 1;
}

int main() {
    Array array = createArray('a');
}