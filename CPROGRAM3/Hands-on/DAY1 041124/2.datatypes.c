#include <stdio.h>
/*
Day1:
1. Varianbles and constants
2. Datatypes
3. 32 keywords (in blue)
*/
int main(){
    int i=4; //2 bytes %d
    char status='Y'; //1 byte %c
    float fee=104000.00f; //4 bytes %f
    double total_fee=fee*i; //4 bytes %lf
    printf("\nHow many years = %d years\n", i);
    printf("Fee of each year = Rs. %0.2f\n",fee);
    printf("Total Fee for %d years = Rs. %0.2lf\n",i,total_fee);
    printf("Are you admitted to the college = %c",status);
    printf("\n\nThank you....!");
    printf("%d",sizeof(total_fee));
    return 0;
}