#include <stdio.h>
/*
DAY5:
1. Constant Pointers
*/
int main(){
    int t=1000;
    const int * const p=&t;
    //(*p)++;
    int d=200;
    //p=&d;
    t++;
    printf("%d\n",t);
}