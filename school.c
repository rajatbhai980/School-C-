#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int simple_intrest(void){
    int principle;
    int rate;
    int time;
    printf("Enter principle: ");
    scanf("%d", &principle);

    printf("Enter rate: ");
    scanf("%d", &rate);

    printf("Enter time: ");
    scanf("%d", &time);

    int simple_intrest = (principle * time * rate) / 100;
    return simple_intrest;
}

int multiplication(void){
    int first_int;
    int second_int;

    printf("Enter a number: ");
    scanf("%d", &first_int);

    printf("Enter the multiplier: ");
    scanf("%d", &second_int);

    int multiplication = first_int * second_int;
    return multiplication;

}

int division(void){
    int first_number;
    int divider;

    printf("Enter a number: ");
    scanf("%d", &first_number);

    printf("Enter the divider: ");
    scanf("%d", &divider);

    int division = first_number / divider;
    return division;
}

int main(void){
 

    while (true){
        char query;
        printf("Choose a type of operation you want to perform simple intrest or muliplication or division(s, m, d) press q to quit: ");
        scanf("%c", &query);
        char lquery = tolower(query);
        if (lquery == 's'){

            int SI = simple_intrest();
            printf("The result: %d", SI);
            break;

        }
        else if (lquery == 'm'){

            int M = multiplication();
            printf("The result: %d", M);
            break;

        }
        else if (lquery == 'd'){

            int D = division();
            printf("The result: %d", D);
            break;

        }
        else if (lquery == 'q')
        {
            break;
        }
        else{
            printf("Please select a valid option");
        }    

    }
    
    
    


}