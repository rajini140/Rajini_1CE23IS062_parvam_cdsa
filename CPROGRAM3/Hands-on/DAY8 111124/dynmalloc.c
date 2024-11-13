/*
DAY8:
Dynamic Memory Allocation: INTRO
    a. include stdlib.h
    b. malloc, free ,calloc are used to allocate release and initialize in runtime
    c. malloc - Memory Allocation - is used to allocate the specified number of bytes of memory 
        Syntax: type *arr=(int *)malloc(val*sizeof(int))
    d. calloc - Contiguous Memory Allocation - is used to allocate the specified number of blocksof memory
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=5;
    int *arr=(int *)malloc(a*sizeof(int));
    arr[0]=3;
    arr[1]=4;
    arr[2]=5;
    arr[3]=6;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    free(arr);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);

    int *arr1=(int *)calloc(a,sizeof(int));
    arr[0]=2;
    arr[1]=4;
    arr[2]=6;
    arr[3]=8;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    free(arr1);
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    
}