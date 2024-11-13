#include <stdio.h>
/*
DAY6:
int * const arr[]={4,5,6,200,13,7};
The array is constant not *arr 
*/
int main(){
    int arr[]={4,5,6,200,13,7};
    arr[1]=30;
    int *p=&arr[0]; //constant pointer to constant array
    printf("%d\n",arr[0]); 
    printf("%d\n",arr[1]); 
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]); 
    printf("%d\n",arr[4]);
    printf("%d\n",arr[5]);
    printf("%d\n",*p);
    printf("%d\n",*(p+1)); 
    printf("%d\n",*(p+2)); 
    printf("%d\n",*(p+3)); 
    printf("%d\n",*(p+4)); 
    printf("%d\n",*(p+5)); 
    printf("%X\n",p);
    p+=5;
    p-=2;
    printf("%d\n",*p);
    printf("%X\n",p);
    printf("%X\n",arr);
}