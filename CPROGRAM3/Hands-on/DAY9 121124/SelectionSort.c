#include <stdio.h>
int main(){
    int a[]={6,4,9,1,4,6,0};
    
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
        int c_ele=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[c_ele]){
                c_ele=j;
            }
        }
        int t=a[i];
        a[i]=a[c_ele];
        a[c_ele]=t;
    }
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}