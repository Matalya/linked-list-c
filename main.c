#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int item;
    int* next;
} eent;

eent* createArray(int size) {
    eent* array = malloc(size);
    return array;
}

int setItem(int item) {
    return 0;
}

int main() {
    eent* array = createArray(1);
}