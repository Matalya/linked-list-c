#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int item;
    int* next;
} eent;

eent* createArray(int size) {
    eent* array = malloc(size * sizeof(eent));
    return array;
}

int setItem(int item) {
    return item;
}

int main() {
    eent* array = createArray('a');
}