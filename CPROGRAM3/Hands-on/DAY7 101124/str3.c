/*
DAY7:
String Built-in Function:
1. strlen() - Counts the # of characters in the length;
2. strcmp() - Compares the two strings and returns 0 (True) and 1 (False);
3. upper()
4. lower()
*/
#include<stdio.h>
#include<string.h>
int main(){
    //Declaring Strings
    char vowels[]={'a','e','i','o','u','A','E','I','O','U','\0'};
    char vowels1[]={'a','e','i','o','u','A','E','I','O','U','\0'};
    char college[]="CityEngineeringCollege ";
    char name[]="Amith_H_M  ";
    char usn[]="1CE23IS009 ";
    char *dest = strcat(name,usn);

    //Counts the number of char in String (strlen())
    printf("%d\n",strlen(college));
    printf("%d\n",strlen(name));
    printf("%d\n",strlen(usn));
    printf("%d\n",strlen(vowels));

    //Compares two Strings (strcmp())
    printf("%d\n",strcmp(vowels,vowels1)); //returns 0(True)
    printf("%d\n",strcmp(vowels,usn)); //returns 1(False)

    //Joins Two or more string (strcat())
    printf("%s\n",dest);

    //Code for the count of string (strlen funcn)
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    printf("%d\n",count);
    
}