#include <stdio.h>

float orderdrinks();
void orderfoods();
void ordergoods();
void closeapp();


int main()
{
    int option;
    char ch;
    float total = 0;

    printf("Welcome to my Café!\n\n");
    do
    {
        printf("What would you like to order?\n");
        printf("1. Drinks\n2. Food\n3. Goods\n4. Pay\n0. Close\n");

        // Reset value before prompting again. In case we had a previous mistake
        option = -1;

        if (scanf("%d", &option) != 1)
        {
            // Clean buffer if input is not int to avoid infinite loop
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("Please choose an integer from 0 to 4\n");
        }
        else
        {
            switch (option)
            {
            case 1:
                orderdrinks(total);
                break;
            case 2:
                orderfoods();
                break;
            case 3:
                ordergoods();
                break;
            case 4:
                printf("Your total bill is: %f.2", total);
                break;
            case 0:
                closeapp();
                break;
            default:
                printf("That option is not available. Try again\n");
            }
        }
    } while (option != 0);

    return 0;
}

// Functions are defined outside main block

float orderdrinks(total)
{
    int drink;
    float amount;

    printf("Here is a list of available drinks\n");
    printf("1. Milk coffee 1.20€\n2. Tea 1.30€\n3. Black coffee 1.00€");

    switch (drink)
    {
    case 1:
        printf("How many would you like?");
        return 1.2 * amount;
        break;
    
    case 2:
        printf("How many would you like?");
        return 1.3 * amount; 
        break;
    
    case 3:
        printf("How many would you like?");
        return 1.0 * amount;
        break;
    
    default:
        break;
    }
    return total;

};
void orderfoods()
{
    printf("Here is a list of available foods\n");
};
void ordergoods()
{
    printf("Here is a list of available goods\n");
};
void closeapp()
{
    printf("Goodbye\n");
};