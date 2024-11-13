#include <stdio.h>
/*
Day1:
1. conditional operators,
>,<,<=,>=,!=,==

2. && operator:
0 && 0 - 0
0 && 1 - 0
1 && 0 - 0
1 && 1 - 1

3. || operator:
0 || 0 - 0
0 || 1 - 1
1 || 0 - 1
1 || 1 - 1

4. shift operators
    a. left shift
    b. right shift
5. Logical && and ||
6. Bitwise operators
7. Unary Operators
*/
int main(){
    

    // 1 .simple conditions----------------------------------------------
    int i,id;
    printf("\n\nEnter the id = \n");
    scanf("%d",&id);
    if(id>100){
        printf("ID is greater than 100\n");
    }
    else if(id==100){
        printf("ID is equal to 100\n");
    }
    else if(id<100){
        printf("ID is not greater than 100\n");
    }
    else{
        printf("ID id invalid\n");
    }
    puts("Condition checked...!");
    
    
    // 3. OR operator ---------------------------------------------------
    char ch;
    printf("Enter a character = \n");
    scanf("%c ",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        puts("It is an vowel...");
    }
    else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        puts("It is an vowel...");
    }
    else{
        puts("Not an vowel");
    }
    

    //4. shifting operators----------------------------------------------
    int a=20; //10100
    int b;
    b=a>>2; // right shift - 10100 >> 00101
    /*
    a>>2
    20 / 2 pow 2
    20 / 4
    5
    */
    printf("%d\n",b);
    b=a<<2; // left shift - 10100 << 1010000
    /*
    a<<2
    20 * 2 pow 2
    20 * 4
    80
    */
    printf("%d\n",b);
    

    //5. Logical operator --------------------------------------------------
    if(100>20 && 200>201) 
        /*
        can be used only inside if, while, 
        for, do-while, switch-case statements only
        */
    {
        printf("Greater..\n");
    }
    else{
        printf("Lesser..\n");
    }


    //6. Bitwise Operator----------------------------------------------------
    int p=5 & 3;
    printf("\n%d\n",p);
    int q=5|3;
    printf("\n%d\n",q);


    //7. Unary operator------------------------------------------------------
    int r=15, s=20;
    int t=r+s;
    int u=r++ + s; //r=11
    int v=++r +s; //r=12
    printf("\n%d\n",t);
    printf("\n%d\n",u);
    printf("\n%d\n",v);
    printf("\nResult = %d",(r+s-- + ++r+r*++s/5));
    printf("%X", 255);
    
    return 0;
}