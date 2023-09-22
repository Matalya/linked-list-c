#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int item;
    int* next;
} eent;

typedef struct {
    eent* head;
    size_t size;
} eentArray;

eentArray* createArray(int size) {

    eentArray* array = malloc(size * sizeof(eent));
    return array;
}

int setItem(int item) {
    return item;
}

int main() {
    eentArray* array = createArray('a');
}