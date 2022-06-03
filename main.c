#include <stdio.h>
// #include <conio.h>
int main()
{
    char yrinput;
    float temp1, inr1, mass1;

    printf("Welcome to Unit Converter | Here you can convert:~ Farenhiet to Celsius - Inr to dollar - Metre to Kilometre ");
    printf("\nNow, Pls choose your conversion: \n\n1) For Tempreature - 'T'\n2) For Currency - '$'\n3) For Mass - 'M'");
    printf("\nEnter value: ");
    scanf("%c", &yrinput);

    if (yrinput == 'T' || yrinput == 't')
    {
        printf("You've Choose Tempreature\nNow enter Farenhiet: ");
        scanf("%f", &temp1);
        printf("%f*C", ((temp1 - 32) * 5 / 9));
    }

    else if (yrinput == '$')
    {
        printf("Enter Rupees: ");
        scanf("%f", &inr1);
        printf("$%f", inr1 * 0.013);
    }

    else if (yrinput == 'M' || yrinput == 'm')
    {
        printf("Enter Meter: ");
        scanf("%f", &mass1);
        printf("%3fKM", (mass1 / 1000));
    }

    else {
        printf("Wrong input - Try again");
    }

    return 0;
}