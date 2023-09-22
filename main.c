#include <stdio.h>

typedef struct{
    int item;
    int* next;
} eent;

typedef struct {
    eent* head;
    size_t size;
} array;