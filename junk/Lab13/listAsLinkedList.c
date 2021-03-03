/** listAsLinkedList.c
 * ===========================================================
 * Name: CS220
 * Section: n/a
 * Project: Lesson12 - Implementation of Linked List Library
 * Purpose: List ADT as linked list
 * ===========================================================
 */
#include "listAsLinkedList.h"
#ifndef LINKEDLIST

LinkedList* createLinkedList(){
    LinkedList *list = (LinkedList*)malloc(sizeof(LinkedList));
    list->numberOfElements = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void deleteLinkedList(LinkedList* list){
    while (list->numberOfElements!=0)
    {
        deleteElementLinkedList(list, 0);
    }
    free(list);   
}

void appendElementLinkedList(LinkedList* list, double element){
    insertElementLinkedList(list, list->numberOfElements, element);
}

int lengthOfLinkedList(LinkedList* list){
    return list->numberOfElements;
}

void printLinkedList(LinkedList* list){
    Node * node = list->head;
    while (node!= NULL)
    {
        printf("%f\n", node->data);
        node = node->next;
    }
}

double getElementLinkedList(LinkedList* list, int position){
    Node * node = list->head;
    double temp = -1;
    if ((position>=0) && (position <list->numberOfElements))
    {
        for (int i = 0; i < position; i++)
        {
            node = node->next;
        }
        temp = node->data;
    }
    return temp;
}

void deleteElementLinkedList(LinkedList* list, int position){
    Node *current = list->head;   //tmp 1 
    Node *temp = NULL;      //temp 2
    int count= 0 ;

    if (list->numberOfElements < 1)
    {
        printf("Empty list\n");
    }
    
    else if (position == 0)    //For the head deletion
    {
        current = list->head;
        list->head = current->next;
        list->numberOfElements--;
    }
    
    else if (position < (list->numberOfElements -1))
    {
        current = list->head;
        temp = list->head;
        temp = temp->next;

        for (int i = 0; i < position; i++)
        {
            current = current->next;
            temp = temp->next;
        }
        current->next = temp->next;
        free(temp);
        list->numberOfElements--;
    }

    else {
        printf("Not gonna work sorry!");
    }
}

void insertElementLinkedList(LinkedList* list, int position, double element){
    Node *temp = list->head;
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = element;

    if (position == 0)
    {
        newNode->next = list->head;
        list->head =newNode;
        list->numberOfElements++;
    }

    else if (position == list->numberOfElements)
    {
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        list->tail = newNode;
        newNode->next = NULL;
        list->numberOfElements++;
    }

    else if ((position > 0) && (position < list->numberOfElements))
    {
        for (int i = 0; i < position - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        list->numberOfElements++;
    }
    else {
        printf("Error\n");
    }    
}

void changeElementLinkedList(LinkedList* list, int position, double newElement){
    Node* node = list->head;
    for (int i = 0; i < position; i++)
    {
        node = node->next;
    }
    node->data = newElement;
}

int findElementLinkedList(LinkedList* list, double element){
    Node * node = list->head;
    int index = 0;

    for (int i = 0; i < list->numberOfElements; i++)
    {
        if (node->data == element)
        {
            index = i;
            break;
        }
        node = node->next;
    }
    return index;
}


void selSortLinkedList(LinkedList* list);
void insertSortLinkedList(LinkedList* list);
#endif  //LINKEDLIST 