// Serena Chan
// Systems Level Programming
// 10/16/2020
// Work 07: Arrays and Pointers and Strings, Oh My!

#include <stdio.h>
#include <string.h>

// #1- takes an array of int values as a parameter and returns the average of those values
double arr_avg(int *arr, int len){
    int i;
    int total = 0;
    for (i = 0; i < len; i++){
        total += *(arr + i);
    }
    return (double) total / len;
}

// #2- takes 2 arrays of equal size as parameters, copy the values of the first array into the second
void arr_copy(int *arr, int *ray, int len){
    int i;
    for (i = 0; i < len; i++){
        *(ray + i) = *(arr + i);
    }
}

// #3- takes a string as a parameter and returns its length
int str_len(char *str){
    int len = 0;
    while (*str){
        len++;
        str++;
    }
    return len;
}

int main(){
    // tests #1-3
    // #1
    int len = 10;
    int arr[len];
    int i;
    for (i = 0; i < len; i++){
        arr[i] = i;
        printf("%d\n", arr[i]);
    }
    printf("Array Average: %f\n", arr_avg(arr, len));
    
    // #2
    int ray[len];
    arr_copy(arr, ray, len);
    for(i = 0; i < len; i++){
        printf("%d\n", ray[i]);
    }
    
    // #3
    char str[] = "Eat";
    printf("String Length: %d\n", str_len(str));
    
    // exercises: tests string library functions
    // strcpy: copies second string to first string, includes terminating '\0' char
    char str1[10];
    char str2[] = "Sleep";
    strcpy(str1, str2);
    printf("%s\n", str1);
    
    // strcat: appends copy of null-terminated second string to end of the first (prereq: first string must have enough space)
    char str3[] = "Repeat ";
    char str4[] = "Again";
    printf("%s\n", strcat(str3, str4));
    
    // strcmp: compares two strings, returns int greater than, less than, or equal to 0 depending on whether the first string is greater, less than or equal to the second
    char str5[] = "Shorter";
    char str6[] = "Looooonger";
    printf("<, >, or = ?: %d\n", strcmp(str5, str6));
    
    // strchr: locates first occurrence of a character, returns pointer to that character
    char *find = strchr("Tired", 'e');
    printf("find: %p, %c\n", find, *find);
    
}
