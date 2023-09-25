#include <stdio.h>
#include <stdlib.h>
#include "numtypes.h"

typedef struct _Eent eent;
struct _Eent {
    int item;
    eent* prev;
    eent* next;
};

eent* createElement(int item) {
    eent* element = malloc(sizeof(eent));
    element->item = item;
    element->next = NULL;
    element->prev = NULL; //for now
    return element;
}

eent* createArray(int item) {
    printf("Initializing array\n");
    eent* array = createElement(item);
    printf("Array initialized\n");
    return array;
}

eent* getToArrayTail(eent* array) {
    eent* nextElement = array->next;
    
    printf("nextElement is %p\n", nextElement);
    if (nextElement == NULL) {
        return array;
    }
    
    while (nextElement->next != NULL) {
        nextElement = nextElement->next;
        printf("nextElement is %p\n", nextElement);
    }
    
    printf("Reached null. Returning nextElement.\n");
    return nextElement;
}

void addElement(eent* array, int item) {
    printf("Calling getToArrayTail\n");
    eent* tail = getToArrayTail(array);
    eent element = {
        .item = item,
        .prev = tail,
        .next = NULL,
    };
    array->next = &element;
    printf("Element successfully created preceded by %p, with item %d\n", element.prev, element.item);
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
        printf("Head of len assigned as %p\n", head);
        counter++;
        printf("Counter is currently at %ld\n", counter);
    }
    return counter;
}

int main() {
    printf("Calling createArray\n");
    eent* array = createArray(5);
    printf("Calling addElement 1\n");
    addElement(array, 1);
    printf("Second item created successfully. Calling addElement 2\n");
    addElement(array, 2);
    printf("Third item created successfully. Calling addElement 3\n");
    addElement(array, 3);
    printf("Calling len\n");
    printf("%ld\n", len(NULL));
}