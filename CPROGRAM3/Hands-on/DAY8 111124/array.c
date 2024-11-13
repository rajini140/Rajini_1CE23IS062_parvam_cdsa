/*
DAY8:
Arrays: Intro
    a.Non -primitive.
    b.Multiple values under single name.
    c.Indexing - to access the elements from the array ex. a[0],a[1], etc.,
    d.Array is static memory allocation
    e.Memory efficient and codeoptiisation
    f.No addtion or deletion is possible, only replacing is possible. 
Syntax: type variable[sizeN]={el1,el2,el3, ... , elN} or store and access using loops using index.
*/
#include <stdio.h>
int main(){
    int a[]={10,23,30,45,50};
    int c=0;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=n-1;i>=0;i--){
        c=c+a[i];
    }
    printf("%d\n",c);
    for(int i=n-1;i>=0;i--){
        if(a[i]%2==1){
            printf("%d is odd\n",a[i]);
        }
    }
}