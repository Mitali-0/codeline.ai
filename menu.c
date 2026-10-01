#include <stdio.h>
#include <stdlib.h>

void menu(){
    int dosa=50,samosa=30,tea=10;
    printf("*****MENU*****\n");
        printf("1. Dosa     %d.00\n",dosa);
        printf("2. samosa   %d.00\n",samosa);
        printf("3. Tea      %d.00\n",tea);
        printf("0. Exit       \n");
}
int choose(int choice,int amt){
    int qty,dosa=50,samosa=30,tea=10;
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

            break;
            default:
        printf("invalid input\n");

        }
        return amt;
}


void billing(int amt){
    int paid;
    printf("your bill is %d rs.\n",amt);
        printf("Pay amount : ");
        scanf("%d",&paid);
        if(paid==amt)
            return;
        else if(paid>amt){
        amt=paid-amt;
        printf("Return amount : %d\n",amt);
            }else{
                do{
        amt=amt-paid;
        printf("Balance amount : %d\n",amt);
        printf("Pay amount : ");
        scanf("%d",&paid);
            }while(amt != paid);
        return;

            }
}
int main(){
    int choice,amt=0;
    do{
        menu();
        printf("Enter your choice:");
        scanf("%d",&choice);
        printf("ok...\n");
        amt = choose(choice,amt);

    }while(choice != 0);
    billing(amt);
    printf("Payment Done successfully....\nvisit again....\n");
    return 0;
}











