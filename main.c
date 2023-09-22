#include <ctype.h>
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

int index_overflows(eentArray array, size_t index) {
    return index >= array.size || index < 0;
}

/*eentArray**/ void createArray(int size) {

    /*eentArray* array = {
        .head = malloc(size * sizeof(eent)),
        .size = size,
    } ;
    return array;*/
}

int setItem(int item) {
    return item;
}

int main() {
    //eentArray* array = createArray('a');
    printf("%d\n", isdigit('1'));
}