#include<stdio.h>
/*
DAY8:
1. add two variables without using +
2. multiply without using *
3. Swap without temp
4. Ternary operator: Syntax(type var=(condition)?TrueVal:FalseVal)
.. ?: uses three operads to operate and follows the above syntax
*/
void main(){
    int a=10;
    int b=20;
    int temp;
    
    b=b-a;
    a=a+b; 

    printf("a=%d\nb=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("a=%d\nb=%d\n",a,b);

}