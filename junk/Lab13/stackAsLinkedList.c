/** stackAsLinkedList.c
 * ===========================================================
 * Name: first last
 * Section: 
 * Project: Lesson13 - Stack ADT implemented using linked list
 * Purpose: Stack ADT library - LIFO
 * ===========================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "stackAsLinkedList.h"

void stackPush(StackAsLinkedList* stack, double element){
    insertElementLinkedList(stack, 0, element);
}

double stackPop(StackAsLinkedList* stack){
    double returning = getElementLinkedList(stack, 0);
    deleteElementLinkedList(stack, 0);
    return returning;
}

bool stackIsEmpty(StackAsLinkedList* stack){
    if ((stack->numberOfElements) > 0)
    {
        return false;
    }
    
    else {
        return true;
    }
}

bool stackIsFull(StackAsLinkedList* stack) {
    return false; //doesn't ever happen lol
}

StackAsLinkedList* stackInit(){
    StackAsLinkedList *stack = createLinkedList();
    return stack;
}

void deleteStack(StackAsLinkedList* stack){
    deleteLinkedList(stack);
}

double stackPeek(StackAsLinkedList* stack){
    return getElementLinkedList(stack ,0);
}

int stackSize(StackAsLinkedList* stack){
    return stack->numberOfElements;
}

void stackPrint(StackAsLinkedList* stack){
    printLinkedList(stack);
}