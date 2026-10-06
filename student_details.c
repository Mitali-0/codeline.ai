#include <stdio.h>

struct student{
    int roll;
    char name[20];
    int p1;
    int p2;
    int p3;
    float res;
};
int main(){
    int i,n;
    printf("Enter no. of student: ");
    scanf("%d",&n);
    printf("\n\n");
    struct student detail[n];
    for(i=0;i<n;i++){
        printf("STUDENT %d\n\n",i+1);
        printf("Enter student name: ");
        scanf("%s",&detail[i].name);
        printf("Enter student roll no.: ");
        scanf("%d",&detail[i].roll);
        printf("Enter student paper1 marks: ");
        scanf("%d",&detail[i].p1);
        printf("Enter student paper2 marks: ");
        scanf("%d",&detail[i].p2);
        printf("Enter student paper3 marks: ");
        scanf("%d",&detail[i].p3);
        detail[i].res = (detail[i].p1+detail[i].p2+detail[i].p3)/3.00;
        printf("\n\n");
    }
    printf("\n");
    printf("\t\t\t*****ALL STUDENT DETAILS*****\n\n");
    for(i=0;i<n;i++){
        printf("\t*****Student %d*****\n\n",i+1);
        printf("\tStudent %d name: %s\n",i+1,detail[i].name);
        printf("\tStudent %d roll no.: %d\n",i+1,detail[i].roll);
        printf("\tPaper 1 marks: %d\n",detail[i].p1);
        printf("\tPaper 2 marks: %d\n",detail[i].p2);
        printf("\tPaper 3 marks: %d\n",detail[i].p3);
        printf("\tRESULT = %.2f\n",detail[i].res);
        printf("\n\n");
    }
}
