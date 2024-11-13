#include<stdio.h>
/*
Day2:
1. Conditional statements
    a.simple if
    b.if-else
    c.nested if
    d.switch case

*/
int main(){
    //Example1: *nested if*
    puts("\n\n------Exmaple-1------:\n");
    int g;
    puts("Enter a number: ");
    scanf("%d",&g);
    if (g<10){
        printf("%d is lesser than 10\n",g);
    }
    else if(g>10){
        printf("%d is greater than 10\n",g);
    }
    else if(g==10){
        printf("%d is equal to 10\n",g);
    }
    else{
        printf("%d is not equal to 10\n",g);
    }


    //Example2: *if-else*
    puts("\n\n------Exmaple-2------:\n");
    int n;
    puts("Enter a Number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is Even\n",n);
    }
    else{
        printf("%d is odd\n",n);
    }


    //Example3: *simple if* and **nested-if*
    puts("\n\n------Exmaple-3------:\n");
     int n1,n2,n3,n4;
    puts("\nEnter 4 numbers: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    if(n1>n2 && n1>n3 && n1>n4){ //simple if
        printf("%d is greater than %d , %d ,%d\n",n1,n2,n3,n4);
    }
    else if(n2>n1 && n2>n3 && n2>n4){
        printf("%d is greater than %d , %d ,%d\n",n2,n1,n3,n4);
    }
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("%d is greater than %d , %d ,%d\n",n3,n1,n2,n4);
    }
    else if(n4>n1 && n4>n2 && n4>n3){
        printf("%d is greater than %d , %d ,%d\n",n4,n1,n2,n3);
    }
    else{
        puts("All are equal\n");
    }


    //Example4: *switch-case*(odd or even)
    puts("\n\n------Exmaple-4------:\n");
    int a;
    puts("Enter a number : ");
    scanf("%d",&a);
    switch(a%2){
        case 0:
            printf("%d is an even number\n",a);
            break;
        case 1:
            printf("%d is an odd number\n",a);
            break;
    }


    //Example5: *switch-case*(calendar)
    puts("\n\n------Exmaple-5------:\n");
    int d;
    puts("Enter the day number (for day1 Monday) : ");
    scanf("%d",&d);
    if(d<=7){
        switch(d){
            case 1:
                printf("Monday\n");
                break;
            case 2:
                printf("Tuesday\n");
                break;
            case 3:
                printf("Wednesday\n");
                break;
            case 4:
                printf("Thursday\n");
                break;
            case 5:
                printf("Friday\n");
                break;
            case 6:
                printf("Saturday\n");
                break;
            case 7:
                printf("Sunday\n");
                break;
            default:
                printf("Invalid\n");
                break;
        }
    }


    //Example6: *switch-case*(array range)
    puts("\n\n------Exmaple-6------:\n");
    int arr[10],n;
    puts("Enter the number of elments : ");
    scanf("%d",&n);
    puts("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        switch(arr[i]){
            case 1 ... 10:
                printf("%d is in the range 1 to 10\n",arr[i]);
                break;
            case 11 ... 20:
                printf("%d is in the range 11 to 20\n",arr[i]);
                break;
            case 21 ... 30:
                printf("%d is in the range 21 to 30\n",arr[i]);
                break;
            default:
                printf("%d is out of range..!\n",arr[i]);
                break;
        }
    }
    return 0;
}