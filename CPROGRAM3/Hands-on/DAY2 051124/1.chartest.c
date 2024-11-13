#include<stdio.h>
/*
Changing the Case using ASCII operation
*/
int main(){
    char ch;
    printf("Enter a small letter: \n");
    scanf("%c",&ch);
    printf("\nThe ASCII value of %c is : %d\n",ch,ch);
    ch-=32;
    printf("\nThe upper case is : %c \nThe Ascii is : %d\n",ch,ch,ch);
    return 0;
}