/*
DAY7:
Structure is user defined datatype having similar and dissimilar datatype
composite datatype
1. Atomic Datatype -> one datatype built-in datatype (int,float,...,etc)
2. Composite Datatpye -> multi - datatype
*/
#include <stdio.h>
struct Student{
    int rollno;
    char name[50];
    int sem;
    float fee;
    char course[50];
};

struct Student s={9,"Rajatha",3,104800.50,"ISE"};

int main(){
    printf("Roll No. : %d\n",s.rollno);
    printf("Name : %s\n",s.name);
    printf("Semester  : %d\n",s.sem);
    printf("Total Fees : %0.2f\n",s.fee*4);
    printf("Course : %s\n",s.course);
}
