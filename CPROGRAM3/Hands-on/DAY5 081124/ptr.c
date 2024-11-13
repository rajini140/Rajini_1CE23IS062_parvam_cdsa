#include<stdio.h>
/*
DAY5:
Pointers
    a. Single-linked pointers
    b. Multi-linked pointers
    c. Dangling pointers (is a pointer whose link is removed from the another variable) || Bad programming ↓
    d. Memory Leak (pointer is removed but memory is present and cannot be accessed)
    e. NULL pointer OR Wild Pointer
    f. Constant Pointers
..& refers to address and 8 refers to the value
..depends varies on the Operating System(Win,macOS,Linux)
..The Following only runs on Windows
*/
int main(){
    int t=2004;
    int *p=&t; //&t if not null
    int **pptr=&p; //pointer which keeps the address of another pointer with **

    
    //When *p is null, **pptr is called Dangling Pointer(Wastage of memory)
    //When **pptr is NULL, is delinked with *p
    

    printf("%d\n",t);
    printf("%d\n",*p);//refers to the value of t

    t++;

    printf("%d\n",t);
    printf("%d\n",*p); //refers to the value of t++
    printf("%X\n",&t); //refers to the adress of t
    printf("%X\n",&p); // refers to address of p

    (**pptr)++;

    printf("%d\n",**pptr);//refers to the value of t
    printf("%X\n",*pptr);//refers to the address of t
    printf("%X\n",pptr);//refers to the address of p
    printf("%X\n",&pptr);//refers to the address of pptr

}