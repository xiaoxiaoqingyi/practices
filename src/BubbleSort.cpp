
#include <iostream>
#include "BubbleSort.h"

 int* BubbleSort::sort(int arr[], int length){
    int temp;
    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j < length-i; j++)
        {
           if(arr[j-1] > arr[j]){
               temp = arr[j-1];
               arr[j-1] = arr[j];
               arr[j] = temp;
           }
        }
        
    }
    
    return arr;
 }