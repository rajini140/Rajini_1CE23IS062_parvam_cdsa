#include<stdio.h>
/*
Day3:
1. Iterative Statements
    a. while - unknown number of iteration
    b.do-while
    c.for - known number of iteration
    d.for each
*/
int main(){

    //1.While loop:-----------------------
    int i=5, j=10;
    while (i<j--) //ex1
    {
        printf("I = %d\n",i);
    }

    printf("=============\n\n");

    while (i<--j)//ex2
    {
        printf("I = %d\n",i);
    }

    printf("=============\n\n");

    while (i<j++)//ex3
    {
        printf("I = %d\n",i);
        if(j>=100){
            break;
        }
    }

    printf("=============\n\n");

    while (0)//ex4
    {
        printf("****\n",i);
    }

    printf("=============\n");
    printf("=============\n\n");


    //2. Do-while loops:--------------------
    do//ex1
    {
        printf("****\n",i);
    }while(0);

    printf("=============\n\n");

    int i=5, j=15;
    do //ex2 : *nested do-while-while*
    {
        while(j>=5)
        {
            j--;
            printf("j1 = %d\n",j);
        }
        i++;
        printf("j = %d\n",j);
        printf("i = %d\n",i);
    } while (i<=j);
    printf("Result = %d\n",i*j);

    printf("=============\n");
    printf("=============\n\n");


    //3. For loops:--------------------------
    for(;;){ //ex1:
        printf("**");
    }

    printf("=============\n\n");
    int i, j; //ex2:
    for(i=0,j=25;i<j--;j-=3,i++){
        printf("**\n");
    }
    printf("%d\n",i*j);

    printf("=============\n\n");

    for(j=0;j<=7;j++){ //ex3:
        printf("J = %d",j);
        getchar();
    }

    printf("=============\n\n");

    for(printf("Incrementation\t");printf("Condition check\t");printf("Updation\t")){//ex4:
        printf("hello");//ex4
        getchar();
        break;
    }
}