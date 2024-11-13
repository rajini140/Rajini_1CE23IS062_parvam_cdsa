#include <stdio.h>
#include <string.h>
/*
DAY7:
Inputs a string and counts the number of vowels preset in the string
*/
int countString(char str[100]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int printVowels(char str[100]){
    int count=0; 
    char vowels[]={'a','e','i','o','u','A','E','I','O','U','\0'};

    for(int i=0; i<countString(str); i++){

        for(int j=0; vowels[j]!='\0'; j++){

            if(str[i]==vowels[j]){

                count++;
                printf("%c\n",str[i]);

            }
        }
    } printf("\nThe count of the vowels are : %d\n",count);
}

int main(){
    char string[100];

    printf("Enter the string : ");
    scanf("%[^\n]%*c",&string);
    
    printf("The Vowels in the given string is : \n");

    printVowels(string);

    printf("The Length of the Given string is : ");

    countString(string);

}