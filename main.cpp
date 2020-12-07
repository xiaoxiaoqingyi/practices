#include <iostream>
#include "src/BubbleSort.h"

int main(int, char**) {
 
    int tempArr[] = {6,2,4,5,3,3,4,8,9};
    int length = sizeof(tempArr) / sizeof(tempArr[0]);

    BubbleSort bs;
    int *arr = bs.sort(tempArr, length);

    for ( int i = 0; i < length; i++ )
   {
       std::cout << *(arr + i) << "," << std::endl;
   }

}
