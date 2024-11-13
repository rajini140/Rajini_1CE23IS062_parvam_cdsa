#include <stdio.h>
/*
DAY5:
1. Pointer to Array
*/
int main(){
    int num[10]={120,248,765,89,8765};
    *(num+2)=250;
    printf("%d\n",num[0]); //accessing using index
    printf("%d\n",num[2]);
    printf("%d\n",*(num+0)); //acessing using pointers
    printf("%d\n",*(num+1));
    printf("%d\n",*(num+2));
    printf("%d\n",*(num+3));
    printf("%d\n",*(num+4));
}