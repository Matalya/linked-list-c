#include <stdio.h>
#include <stdlib.h>
#include "numtypes.h"

typedef struct _Eent eent;
struct _Eent {
    int item;
    eent* prev;
    eent* next;
};

typedef struct {
    eent* head;
    size_t size;
} eentList;

eent* createElement(int item) {
    eent* element = malloc(sizeof(eent));
    element->item = item;
    element->next = NULL;
    element->prev = NULL;
    return element;
}

eentList* createArray(int item) {
    eent* array = createElement(item);
    eentList* header = malloc(sizeof(eentList));
    header->head = array;
    header->size = 1;
    return header;
}

eent* getToArrayTail(eentList* array) {
    eent* nextElement = array->head;
    if (nextElement == NULL) {
        return NULL;
    }
    while (nextElement->next != NULL) {
        nextElement = nextElement->next;
    }
    
    return nextElement;
}

void addElement(eentList* array, int item) {
    eent* tail = getToArrayTail(array);
    eent* element = createElement(item);
    element->prev = tail;
    tail->next = element;
}

size_t len(eent* array) {
    if (array == NULL) {
        return 0;
    }
    eent* head = array->next;
    size_t counter = 1;

    if (head == NULL) {
        return counter;
    }
    while (head->next != NULL) {
        head = head->next;
        counter++;
    }
    return counter;
}

void printArray(eent* tail) {
    if (tail == NULL) {
        return;
    }
    printArray(tail->prev);
    printf("%d, ", tail->item);
}

int main() {
    eentList* array = createArray(5);
    addElement(array, 1);
    addElement(array, 2);
    addElement(array, 3);
    printArray(getToArrayTail(array));
    printf("\n");
}