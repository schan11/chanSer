// Serena Chan
// Systems Level Programming
// 10/14/2020
// Work 06: The Old Switcheroo

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int arr[10]; // array that stores 10 ints
    
    srand(time(NULL));
    
    int i;
    for (i = 0; i < 9; i++){
      arr[i] = rand(); // populates array with random values
    }
    
    arr[9] = 0; // sets the last value in the array to 0
    
    printf("values of arr:\n");
    for (i = 0; i < 10; i++){
        printf("%d\n", arr[i]); // prints out the values in the array
    }
    
    int arr2[10]; // separate array that stores 10 ints
    
    for (i = 0; i < 10; i++){
        *(arr2 + 9 - i) = *(arr + i); // populates arr2 with the values in arr, but in reverse order
    }
    
    printf("reversed values of arr:\n");
    for (i = 0; i < 10; i++){
        printf("%d\n", arr2[i]); // prints out the values in the reversed array
    }
    
}


