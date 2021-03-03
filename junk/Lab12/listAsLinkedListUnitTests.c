/** listAsLinkedListUnitTests.c
 * ===========================================================
 * Name: CS220
 * Section: n/a
 * Project: Lesson12 - Implementation of Linked List Library
 * Purpose: List ADT as linked list
 * ===========================================================
 */

#include "listAsLinkedList.h"
int main() {
    LinkedList *list = createLinkedList();

    printLinkedList(list);

    appendElementLinkedList(list, 0);
    appendElementLinkedList(list, 1);
    appendElementLinkedList(list, 2);
    appendElementLinkedList(list, 3);
    appendElementLinkedList(list, 4);
    appendElementLinkedList(list, 5);

    printLinkedList(list);

    insertElementLinkedList(list, 2, 69);
    printLinkedList(list);
    changeElementLinkedList(list, 2, 72.123);
    printLinkedList(list);
    findElementLinkedList(list, 1);
    findElementLinkedList(list, 5);
    findElementLinkedList(list ,72);

    deleteLinkedList(list);
    printLinkedList(list);
    return 0;
}