#include<stdio.h>
/*
Day2:
1. Type Casting
    a. Implicit or automatic
    b. explicit
        i. Narrowing
        ii. Widening

*/
int main(){
    //Introduction----------------------------------------------
    int i=100, j=2, c=i/j;
    // fractions are considered as double by default 
    float f=3.4; // automatically converted into float
    float o=100.00F;
    printf("%d\n%d\n%d\n%0.2f\n%0.2f\n",i,j,c,f,(o/j));

    //Narrowing Conversion (Higer Type to Lower Type) & (loss of data)
    int a=o;
    printf("\n\n%d\n",a);
    if(i==(int) o){
        printf("True\n");
    }

    //Widening Conversion (addition of data)
    int n1=100;
    float f1=n1;
    printf("\n%0.2f\n",f1);
    return 0;

    //Casting (Syntax: type variable = (cast_type)variable) (casting is optional)
}