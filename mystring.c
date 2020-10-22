// Serena Chan
// Systems Level Programming
// 10/22/2020
// Work 08: If you like it then you should've put a string on it

#include <stdio.h>
#include <string.h>

// strlen: returns length of string s
int mystrlen(char *s){
    int len = 0;
    while (*s){
        len++; // adds to len until terminating char
        s++;
    }
    return len;
}

// strcpy: copies second string to first string, includes terminating '\0' char
char *mystrcpy(char *dest, char *source){
    int len = mystrlen(source);
    int i;
    for (i = 0; i < len; i++){
        dest[i] = *source;
        source++;
    }
    dest[i] = '\0';
    return dest;
}

// strncat: appends not more than n characters from source, adds a terminating `\0', and returns dest
char * mystrncat(char *dest, char *source, int n){
    int len = mystrlen(dest);
    int i;
    for (i = 0; i < n; i++){
        dest[i] = source[i];
    }
    dest[len + i] = '\0';
    return dest;
}

// strcmp: compares two strings, returns int greater than, less than, or equal to 0 depending on whether the first string is greater, less than or equal to the second
int mystrcmp(char *s1, char *s2){
    while (*s1 && *s2){
        if (*s1 < *s2) return -1;
        else if (*s1 > *s2) return 1;
        s1++;
        s2++;
    }
    return 0;
}

// strchr: locates first occurrence of a character, returns pointer to that character
char *mystrchr(char *s, char c){
    int len = mystrlen(s);
    int i;
    for (i = 0; i <= len; i++){
        if (*s == c) return s;
        s++;
    }
    return 0;
}
        
        
        

