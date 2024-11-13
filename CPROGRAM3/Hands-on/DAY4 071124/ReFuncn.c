#include<stdio.h>
/*
DAY4:
Adding using Recursive Functions
*/
void sum(int p,int q)//Parameterized Function
{
    int s=p+q;
    if(p>=100 || q>=100){
        p++;
        q++;
        printf("The sum is %d\n",s);
        sum(p,q);
    }
    printf("The sum is %d\n",s);
    
}
int main(){
    register int a=68,b=100;
    sum(a,b);
}