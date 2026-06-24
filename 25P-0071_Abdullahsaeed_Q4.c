#include<stdio.h>
int main(){
    int selection;;
    char name_letter;
    int id_number;
    printf("\t\t*********************************************\n");
    printf("\t\t==Mini Encoding and Decoding System==\n");

    printf("\n1.Encode\n2.Decode\n3.Exit\n");
    printf("Enter your choice(1,2,3, or 3):");
    scanf("%d", &choice);
    
    if(choice == 1){

        printf("\n*****Encoding*****\n");

        printf("Enter the first letter of your name:");
        scanf("%c", &name_letter);

        printf("Enter your 3-digit Id number:");
        scanf("%d", &id_number);

        if(id_number < 100){
            printf("Error:Id is too small! Must be 3 digits.\n");
        
        }
        else if(id_number > 999){
            printf("Error:Id is too large!Must be 3 digits.\n");
        }
         else{

            int num1 = id_number/100;
            int num2 = (id_number/10)%10;
            int num3 = id_number%10;
         }


             if(nameLetter == 'a'|| nameLetter == 'A' || 
               nameLetter == 'e' || nameLetter == 'E' || 
               nameLetter == 'i' || nameLetter == 'I' || 
               nameLetter == 'o' || nameLetter == 'O' || 
               nameLetter == 'u' || nameLetter == 'U') {


                num1 = num1 + 5;
                num2 = num2 + 5;
                num3 = num3 + 5;
         }
         else{

            num1=num1 - 2;
            num2=num2 - 2;
            num3=num3 - 3;
         }
    }
    }
}