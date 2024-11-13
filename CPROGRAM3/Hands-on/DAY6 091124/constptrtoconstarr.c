#include <stdio.h>
/*
DAY6:
int * const arr[]={4,5,6,200,13,7};
The array is constant not *arr 
*/
int main(){
    int arr[]={100,250,112,56,209,11};
    int *const ptr=&arr[0]; //constant pointer to constant array
    arr[1]=56;
    *(ptr+2)=256;
}