/** bstAsLinkedDT.c
 * ================================================================
 * Name: first last
 * Section: xxx
 * Project: Header for BST library
 * =================================================================
 */
#include "bstAsLinkedDS.h"

#include <stdio.h>
#include <stdlib.h>

BSTnode* insertBST(BSTnode* node, int item) {
    if (node == NULL)
    {
        BSTnode* newNode = malloc(sizeof(BSTnode));
        newNode->data = item;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if (item < node->data)
    {
        node->left = insertBST(node->left,item);
    }
    else {
        node->right = insertBST(node->right, item);
    }
    return node;
}

void printInorderBST(BSTnode* node) {
    if (node == NULL)
    {
        return;
    }
    
    printInorderBST(node->left);
    printf("Data is: %d\n", node->data);
    printInorderBST(node->right);
}

void printPreorderBST(BSTnode* node) {
    if (node == NULL)
    {
        return;
    }
    printf("Data is: %d\n", node->data);
    printPreorderBST(node->left);
    printPreorderBST(node->right);
}

void printPostorderBST(BSTnode* node) {
    if (node == NULL)
    {
        return;
    }
    printPostorderBST(node->left);
    printPostorderBST(node->left);
    printf("Data is: %d\n", node->data);
}