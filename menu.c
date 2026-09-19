#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,qty,amt,paid,ret;
printf("*****MENU*****\n");
printf("1. Dosa     50\n");
printf("2. samosa   30\n");
printf("3. Tea      10\n");
printf("0. Exit       \n");
printf("Enter your choice:");
scanf("%d",&choice);
printf("your choice is ");
switch(choice){
case 1:
    printf("Dosa...\n");
    printf("How many plates:");
scanf("%d",&qty);
printf("ok...\n");
printf("your bill is ");
printf("%d rs.\n",50*qty);
    amt = 50*qty;
    break;
case 2:
    printf("samosa...\n");
    printf("How many plates:");
scanf("%d",&qty);
printf("ok...\n");
printf("your bill is ");
printf("%d rs.\n",30*qty);
    amt = 30*qty;
    break;
case 3:
    printf("Tea...\n");
    printf("How many plates:");
scanf("%d",&qty);
printf("ok...\n");
printf("your bill is ");
printf("%d rs.\n",10*qty);
    amt = 10*qty;
    break;
case 0:
    printf("exiting...\n");
    break;
default:
    printf("invalid input\n");

}
printf("Enter amount : ");
scanf("%d",&paid);
ret=paid-amt;
if(amt==paid){
    printf("Thankyou visit again....\n");

}else{

    printf("Return amount : %d\n",ret);
    printf("Thankyou visit again....\n");

}

return 0;
}

