#include <stdio.h>
#include <stdlib.h>

int main(){
    int choice,qty,amt=0,paid,dosa=50,samosa=30,tea=10;
        do{
        printf("*****MENU*****\n");
        printf("1. Dosa     %d.00\n",dosa);
        printf("2. samosa   %d.00\n",samosa);
        printf("3. Tea      %d.00\n",tea);
        printf("0. Exit       \n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        printf("ok...\n");
        switch(choice){
            case 1:
        printf("your choice is Dosa...\n");
        printf("How many plates:");
        scanf("%d",&qty);
        printf("ok...\n");
        amt += dosa*qty;
            break;
            case 2:
        printf("your choice is samosa...\n");
        printf("How many plates:");
        scanf("%d",&qty);
        printf("ok...\n");
        amt += samosa*qty;
            break;
            case 3:
        printf("your choice is Tea...\n");
        printf("How many plates:");
        scanf("%d",&qty);
        printf("ok...\n");
        amt += tea*qty;
            break;
            case 0:
        choice = 0;
            break;
            default:
        printf("invalid input\n");

        }
    }while(choice);

        printf("your bill is %d rs.\n",amt);
        printf("Pay amount : ");
        scanf("%d",&paid);
    if(paid == amt){
        }else if(paid>amt){
        amt=paid-amt;
        printf("Return amount : %d\n",amt);
            }else{
                do{
        amt=amt-paid;
        printf("Balance amount : %d\n",amt);
        printf("Pay amount : ");
        scanf("%d",&paid);
            }while(amt != paid);

            }
        printf("Payment Done successfully....\nvisit again....\n");
    return 0;
}







