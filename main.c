#include <stdio.h>
#include <stdlib.h>

struct profile{
    char name[10];
    int roll;
    char branch[15];
    int sem;
    char goal[50];
};

struct profile inputProfile(void){
    struct profile profile;
    printf("welcome to StudentOS!\n\n\n\t\tLOG IN/SIGN UP to StudentOS\n\n");
    printf("\t\tEnter your name: ");
    scanf("%9s",profile.name);
    printf("\t\tEnter your roll number: ");
    scanf("%d",&profile.roll);
    printf("\t\tEnter your branch: ");
    scanf("%14s",profile.branch);
    do{
        printf("\t\tEnter your semester: ");
        scanf("%d",&profile.sem);
        if(profile.sem<=0 || profile.sem>8){
            printf("Invalid user credential....");
        }
    }while(profile.sem<=0 || profile.sem>8);

    printf("\n\t\t%s, what is your study goal: ",profile.name);
    getchar();
    fgets(profile.goal,sizeof(profile.goal),stdin);
    return profile;

}
void displayProfile(struct profile profile){
    printf("\t\tName\t\t\t:%s\n",profile.name);
    printf("\t\tRoll Number\t\t:%d\n",profile.roll);
    printf("\t\tBranch\t\t\t:%s\n",profile.branch);
    printf("\t\tSemester\t\t  :%d\n",profile.sem);
    printf("\t\tCurrent Study goal:%s\n",profile.goal);
}
struct profile updateProfile(struct profile profile){
    int choice;
    do{
    printf("\t\t1.Name\n");
    printf("\t\t2.Roll Number\n");
    printf("\t\t3.Branch\n");
    printf("\t\t4.Semester\n");
    printf("\t\t5.Current Study goal\n");
    printf("\t\t0.Exit\n");

    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("\t\tEnter your name: ");
    scanf("%9s",profile.name);
        break;
        case 2:
            printf("\t\tEnter your roll number: ");
    scanf("%d",&profile.roll);
        break;
        case 3:
            printf("\t\tEnter your branch: ");
    scanf("%14s",profile.branch);
        break;
        case 4:
            do{
        printf("\t\tEnter your semester: ");
        scanf("%d",&profile.sem);
        if(profile.sem<=0 || profile.sem>8){
            printf("Invalid user credential....");
        }
    }while(profile.sem<=0 || profile.sem>8);

        break;
        case 5:
            printf("\n\t\t%s, what is your study goal: ",profile.name);
    getchar();
    fgets(profile.goal,sizeof(profile.goal),stdin);
        break;
        case 0:
            printf("Exiting.....");
        break;
        default:
            printf("Invalid user input");
    }
    }while(choice!=0);
    return profile;
}
int assignment(){}
int tracker(){}
int expenses(){}
int reports(){}


struct profile options(struct profile profile){
    int choice;
    do{
    printf("\n\t\t*****MENU*****\n");
    printf("\t\t1.Profile\n");
    printf("\t\t2.Assignments\n");
    printf("\t\t3.Study Tracker\n");
    printf("\t\t4.Expenses\n");
    printf("\t\t5.Academic Reports\n");
    printf("\t\t0.Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: displayProfile(profile);
        char enter;
        printf("do you want to update your profile [y/n]?");
        scanf(" %c",&enter);
        if(enter=='y'|| enter=='Y'){
           profile= updateProfile(profile);
        }
        break;
        case 2: assignment();
        break;
        case 3: tracker();
        break;
        case 4: expenses();
        break;
        case 5: reports();
        break;
        case 0:
            printf("Exiting.....");
        break;
        default:
            printf("Invalid user input");
    }
    }while(choice!=0);
    return profile;
}

int main()
{
    struct profile profile;
    profile=inputProfile();
    printf("\t\tuser verified.....\n");
    printf("\n\nDASHBOARD");
    printf("\n\n\n\t HI %s!\n",profile.name);
    printf("**Today,s goal is to %s",profile.goal);
    profile = options(profile);


    return 0;
}
