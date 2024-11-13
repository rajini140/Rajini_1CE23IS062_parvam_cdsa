/*
DAY9:
Data Structures:
    1. It is the way of organizing, storing and managing data efficiently to perform various operations on that data.
    2. It facilitates the wayof efficiency, modification, and retrivel.
    3. Algorithms are instructions for solving specific problem or performing specific tasks.
Searching in DS: 
    1. Types of Searching
    +------------------------------------------+----------------------------------------+
    | a. Linear Search                         | b. Binary Search                       |
    |     *Simple to implement                 |    *Hard to implement                  |
    |     *Time complexity O(n)                |     *Time Complexity O(log n)          |
    |     *May or may not be sorted            |     *Need to be sorted                 |
    |     *More Time with More iteration       |     *Less Time with Less iteration     |
    |     *Each and every elements are checked |     *Only Half of the arry is searched |
    +------------------------------------------+----------------------------------------+
*/  
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,s_ele;
    int arr[100];
    int flag=0;

    printf("Enter the number of terms N = ");
    scanf("%d",&n);

    printf("\nEnter the array elements: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the Search element : ");
    scanf("%d",&s_ele);
    
    for(int i=0;i<n;i++){
        if(arr[i]==s_ele){
            printf("The Search element %d is in : a[%d] position\n",s_ele,i);
            flag=1;
        }
    }

    if(flag==1){
        printf("The element is found");
    }
    else{
        printf("The Search element %d is not in any position\n",s_ele);
    }
}
