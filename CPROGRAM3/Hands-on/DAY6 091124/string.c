#include <stdio.h>
/*
DAY6:
String Implementation:
    a. Array implementation
    b. Pointer Implementation
..256 chracyters in ASCII
*/
int main(){
    char name[]={'c','i','t','y','\0'}; //4bytes each char 1byte
    printf("%c\n",name[0]);
    printf("%c\n",name[1]);
    printf("%c\n",name[2]);
    printf("%c\n",name[3]);
    
    for(int i=0;i<4;i++){
        printf("%c\t",name[i]);
    }
    printf("\n");
    for(int i=3;i>=0;i--){
        printf("%c\t",name[i]);
    }
    printf("\n");
    for(int i=0;name[i]!='\0';i++){
        printf("%c\t",name[i]);
    }
}