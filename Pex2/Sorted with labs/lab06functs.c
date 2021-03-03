/** lab06functs.c
 * ===========================================================
 * Name: First Last
 * Section: xxx
 * Project: Lab 6 - Selection / Insertion Sorts
 * ===========================================================
 */
#include "lab06functs.h"

#include <stdio.h>
#include <stdlib.h>

void fillArray(int array[]) {
    // fill array with random ints from 0 to 29
    for (int i = 0; i < N; i++) {
        array[i] = (int)rand() % 30;
    }
}

void printArray(int nums[]) {
    for (int i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

void insertionSort(int numbers[], int numbersSize) {
    int j = 0;
    int temp = 0;

    for (int i = 1; i < numbersSize; i++)
    {
        j = i;
        
        while (j > 0 && numbers[j] > numbers[j-1])
        {
            temp = numbers[j];
            numbers[j] = numbers[j-1];
            numbers[j-1] = temp;
            j--;
        }
    }
    
}

void selectionSort(int numbers[], int numbersSize) {
    int j = 0;
    int indexLargest = 0;
    int temp = 0;
    for (int i = 0; i < numbersSize - 1; i++)
    {
        indexLargest = i;
        for (j = i + 1; j < numbersSize; j++)
        {
            if (numbers[j] > numbers[indexLargest])
            {
                indexLargest = j;
            }
            
        }
        temp = numbers[i];
        numbers[i] = numbers[indexLargest];
        numbers[indexLargest] = temp;
    }
    
}



void bubbleSort(int numbers[], int numbersSize)
{
    int i;
    int j;
    int temp = 0;

   for (i = 0; i < numbersSize - 1; i++) {
      for (j = 0; j < numbersSize - i - 1; j++) {
         if (numbers[j] < numbers[j+1]) {
            temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
         }
      }
   }
}



void merge(int numbers[], int lBound, int mid, int rBound)
{
    int mergedSize = rBound - lBound + 1;
    int mergePos = 0;
    int leftPos = 0;
    int rightPos = 0;
    int *mergedNumbers = malloc(mergedSize * sizeof(int));

    leftPos = lBound;
    rightPos = mid + 1;

    while (leftPos <= mid && rightPos <= rBound)
    {
        if (numbers[leftPos] >= numbers[rightPos])
        {
            mergedNumbers[mergePos] = numbers[leftPos];
            leftPos++;
        }

        else
        {
            mergedNumbers[mergePos] = numbers[rightPos];
            rightPos++;
        }
        mergePos++;
    }

    while (leftPos <= mid)
    {
        mergedNumbers[mergePos] = numbers[leftPos]++;
        leftPos++;
        mergePos++;
    }

    // If right partition is not empty, add remaining elements to merged numbers
    while (rightPos <= rBound)
    {
        mergedNumbers[mergePos] = numbers[rightPos];
        ++rightPos;
        ++mergePos;
    }

    // Copy merge number back to numbers
    for (mergePos = 0; mergePos < mergedSize; ++mergePos)
    {
        numbers[lBound + mergePos] = mergedNumbers[mergePos];
    }
}

// mergeSort
void mergeSort(int numbers[], int lBound, int rBound)
{
    int j = 0;
   
   if (lBound < rBound) {
      j = (lBound + rBound) / 2;  // Find the midpoint in the partition
      
      // Recursively sort left and right partitions
      mergeSort(numbers, lBound, j);
      mergeSort(numbers, j + 1, rBound);
      
      // Merge left and right partition in sorted order
      merge(numbers, lBound, j, rBound);
   }
}



