#include<stdio.h>
int main(){
    float num1;
    float num2;
    float result;
    char operator,choice;

     // INPUT NUMBERS
     do {
    printf("Enter the First Number: \n " , num1);
    scanf("%f", &num1);

     printf("Enter operator(*,/,+,-,%%): ");
    scanf(" %c", &operator);

    printf("Enter the Second Number: \n", num2);
    scanf("%f", &num2);

    //PERFORM CALCULATIONS
    if (operator == '+')
        result = num1 + num2;
    else if(operator == '-')
        result = num1 - num2;

    else if (operator == '*')
        result = num1*num2;
    
    else if (operator == '/'){
        if (num2 !=0)
              result = num1/num2;
        else{
            printf("Error! Division by zero not allowed. \n");
            continue;
            }
        }

            else if (operator == '%')
                result = (int)num1 % (int)num2;
                
            else{
                printf("Invalid operator!\n");
                continue;
            }
                
                printf("Result:%.2f\n", result);

                printf("Do you want to perform another calculation? (Y/N): ");
                scanf(" %c", &choice);
            }
            while(choice == 'Y' || choice == 'Y');
                printf("Calculator exited.\n");
            return 0; 
}