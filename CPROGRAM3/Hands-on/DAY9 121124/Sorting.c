/*
Day9:
Sorting:
    1. Bubble
    2. Selection
    3. Inserstion
    4. Merge
    5. Quick
    6. Heap
*/
#include <stdio.h>
int main(){
    int a[]={9,7,6,5,4,3,2,1};
    int n=sizeof(a)/sizeof(a);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        printf("%d\n",a[i]);
    }
}