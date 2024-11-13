#include<stdio.h>
/*
DAY8:
1. Implmentation of loops fo rprinting table
2. Reverse the the digits of the given integer and check if palindrome
3. Factorial of the given number using for loop
4. Factorial of the given number using while loop
5. find if the given number is prime or not a prime
*/
int fact(int n){

}
int main(){

    //1
    for(int i=10;i>=1;i--){
        printf("%d x 5 = %d\n",i,i*5);
    }
    printf("\n\n\n");

    //2
    int a=12321,x=0,y=0;
    int d=a;
    while(a>0){
        x=a%10;
        y=y*10+x;
        a=a/10;
    }
    printf("%d\n",y);
    if(y==d){
        printf("It is palidrome\n\n\n");
    }
    else{
        printf("Not a palindrome\n\n\n");
    }
    

    //3
    int b=5,fact=1;
    for(int i=5;i>=1;i--)
    {
        fact*=i;
    }
    printf("The Factorial of %d = %d\n\n\n",b,fact);
    

    //4 factorial using while()
    int c=5,fact2=1;
    while(c>=1){
        fact2*=c;
        c--;
    }
    printf("The Factorial = %d\n\n\n",fact2);

    //5 prime or not prime
    int p,count=0,i;
    puts("Enter a number : ");
    scanf("%d",&p);
    if(p==1){
            puts("It is a co-prime");
    }
    else{
        for(i=2;i<p;i++){
            if(p%i==0){
                count++;
            }
        }
        if(count==0){
            printf("%d is a prime\n",p);
        }
        else{
            printf("%d is not a prime\n",p);
        }
    } 
}

