//switch statement
#include <stdio.h>
#include <math.h>

main() {
    char choice;
    printf("Enter any operation(+/-/*///%/p):");
    scanf("%c", &choice);
    int a,b;
    printf("Enter number1: ");
    scanf("%d", &a);
    printf("Enter number2: ");
    scanf("%d", &b);

    switch(choice){
        case '+' :printf("sum of given numbers is %d",a+b);
               break;
        case '-' : printf("diff of given numbers is %d",a-b);
               break;
        case '*' : printf("product of given numbers is %d",a*b);
               break;
        case '/' : printf("quotient of given numbers is %d",a/b);
               break;
		case '%' : printf("remainder of given numbers is %d",a%b);
               break;
		case 'p' : printf("power of given numbers is %d",pow(a,b));
               break;	   	                  
        default:
               printf("entered invalid option");
    }

}
