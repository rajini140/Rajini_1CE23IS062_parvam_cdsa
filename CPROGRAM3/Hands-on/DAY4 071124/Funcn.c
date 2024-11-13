#include<stdio.h>
/*
DAY4:
Introduction to:
a. Stack segment
b. Heap segment
c. Data segment
d. Cod esegment
Adding using Functions
*/
int sum(int p,int q){
    int s=p+q;
    return s;
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("The Sum = %d",sum(a,b));
}
