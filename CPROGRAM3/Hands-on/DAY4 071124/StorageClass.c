#include<stdio.h>
/*
DAY4:
Adding using multiple-function cals uing Storage class
a. static
b. auto
c. register
d. extend
*/
int sum(){ //Non-Parameterized Function
    static int n1=100, n2=200; //static variables (will intialize once and updates overtime)
    int c=n1+n2;
    printf("C = %d\n",c);
    n1++;
    n2++;
}
int n;
int main(){
    register int i = 0; //register variables (will be registered in CPU)
    int t; //automatic variables (will assign the value automatically or tke some garbage value)
    printf("%d\n",t);
    printf("%d\n",n);
    sum();
    sum();
    sum();
    sum();
    sum();
}