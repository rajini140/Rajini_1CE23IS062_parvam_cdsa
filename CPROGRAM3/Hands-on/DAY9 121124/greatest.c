#include<stdio.h>
int main(){
    int a[]={-1,-2,-3,-4,-5,-6,-7,-8};
    int c_ele=a[0];
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
       if(a[i]>c_ele){
        c_ele=a[i];
       } 
    }
    printf("The greatest Integer in the array is :  %sl",c_ele);
}