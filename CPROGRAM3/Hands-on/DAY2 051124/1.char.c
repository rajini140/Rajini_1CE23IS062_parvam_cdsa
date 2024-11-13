#include <stdio.h>
/*
DAY2:
1. ASCII Values(American Standard code for Information Interchange) and Characters.
*/
int main(){
    printf("%c \n",'A'); //character
    printf("%s \n","A"); //string
    char ch='B';
    printf("%c \n",ch); // method 1 of finding ascii
    printf("%d \n",ch); // Ascii of B
    ch++;
    printf("%d \n",ch); // ascii of C
    printf("%c \n",ch);
    int i=ch;
    printf("%d \n",i); // method 2 of finding ascii
     // method 2 of finding ascii
    i+=32;
    printf("%d \n",i); // Upper_char + 32 = Lower_char
    printf("%c \n",i); // Lower case of C
    return 0;
}