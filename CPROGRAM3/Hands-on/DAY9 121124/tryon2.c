#include<stdio.h>
/*
DAY9:
1. Greatest of three numbers without && opeator
2. print the following output using only one for loops
...o: 0 2 4 6 8 1 3 5 7 9
*/
int main(){
    int a=10,b=20,c=30;
    if(a>b){
        if(a>c){
            printf("A is greater than b and c");
        }
    }
    else if(b>a){
        if(b>c){
            printf("B is greater than a and c");
        }
    }
    else{
        printf("C is greater than a and b");
    }

    for(int i=0;i<20;i++){
        if(i<10){
            if(i%2==0)
                printf("%d\t",i);
        }
        if(i>10){
            if(i%2==1)
                printf("%d\t",i-10);
        }
    }
}