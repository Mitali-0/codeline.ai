#include <stdio.h>
int main(){


int roll,phy,chem,com,total;
    float percent;
    char a,b,c,d,e;
printf("Enter the Roll no. of the student: ");
scanf("%d",&roll);
printf("Enter the Name of the student: ");
scanf(" %c%c%c%c%c",&a,&b,&c,&d,&e);
printf("Enter the marks of Physics,Chemistry and Computer Application: ");
scanf("%d%d%d",&phy,&chem,&com);
printf("Roll no:%d\n",roll);
printf("Name of student:%c%c%c%c%c\n",a,b,c,d,e);
printf("Mark of Physics: %d\n",phy);
printf("Mark of Chemistry: %d\n",chem);
printf("Mark of Computer Application: %d\n",chem);
total = phy + chem +com;
percent = total/3;
printf("Total Marks= %d\n",total);
printf("Percentag= %.2f\n",percent);

if(percent>=80){
printf("Division= first\n");
}else if(percent>=70){
printf("Division= second\n");
}else if(percent>=60){
printf("Division= third\n");
}else{
printf("Division= fail\n");
}
return 0;
}
