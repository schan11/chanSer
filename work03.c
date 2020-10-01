// Serena Chan
// Systems Level Programming
// 10/01/2020
// Work 03: Eul Up Your C Engine

#include <stdio.h>

// multiples of 3 and 5

int problem1(){
    
    int i;
    int sum = 0;
    int exclude = 0;
    
    for (int i = 0; i < 1000; i++){
        if (i % 3 == 0){
            sum += i;
        }
        if (i % 5 == 0){
            sum += i;
        }
        if (i % 15 == 0){ // if a number is a multiple of 15, then it has already been counted as a multiple of 3 and 5
            exclude += i;
        }
    }
    return sum - exclude;
}

// smallest multiple

int problem5(){
    
    int init = 1; // starting with the first positive number
    int j = 0;
    
    while (j == 0){
        
        int i;
        for (int i = 1; i <= 20; i++){
            if (init % i == 0){
                j = 1;
            }
            
            else{
                j = 0;
                init++;
                break;
            }
        }
    }
    return init;
}

int main(){
    printf("The sum of all the multiples of 3 or 5 below 1000 is %d\n", problem1()); // solution: 233168
    printf("The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is %d\n", problem5()); // solution: 232792560
    return 0;
}

