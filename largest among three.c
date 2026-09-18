#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("1st Number = %d\n",a);
    printf("2nd Number = %d\n",b);
    printf("3rd Number = %d\n",c);
    if(a==b && b==c){
        printf("Entered numbers are equal");
    }else if(a==b){
                printf("1st and 2nd numbers are equal")

        if(a>c){
            printf("Both of them are greatest.")
        }else{
            printf("3rd Number is the greatest among three")
        }
    }else if(a==c){
                printf("1st and 3nd numbers are equal")

        if(a>b){
            printf("Both of them are greatest.")
        }else{
            printf("2nd Number is the greatest among three")
        }
    }else if(b==c){
                printf("3rd and 2nd numbers are equal")

        if(a>c){
            printf("Both of them are greatest.")
        }else{
            printf("1st Number is the greatest among three")
        }
    }else if(a>b && a>c){
        printf("The 1st Number is the greatest among three");
    }else if(b>a && b>c){
        printf("The 2nd Number is the greatest among three");
    }else{
        printf("The 3rd Number is the greatest among three");
    }
return 0;
}

