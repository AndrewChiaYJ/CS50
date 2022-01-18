# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int get_cents = -1;
    do
    {
        get_cents = get_int("How much cash you have?\n");
    }
    while (get_cents<0);

    int calculate_quarters = 0;
    int calculate_dimes = 0;
    int calculate_nickels = 0;
    int calculate_pennies = 0;

    if (get_cents / 25 > 1)
    {
        calculate_quarters = get_cents / 25;
        get_cents -= (calculate_quarters*25);
        if (get_cents > 0)
        {
            printf("%i quarters, ", calculate_quarters);
        }
        else
        {
            printf("%i quarters\n", calculate_quarters);
        }
    }
    else if (get_cents / 25 == 1)
    {
        calculate_quarters = get_cents / 25;
        get_cents -= (calculate_quarters*25);
        if (get_cents > 0)
        {
            printf("%i quarter, ", calculate_quarters);
        }
        else
        {
            printf("%i quarter\n", calculate_quarters);
        }
    }

    if (get_cents / 10 > 1)
    {
        calculate_dimes = get_cents / 10;
        get_cents -= (calculate_dimes*10);
        if (get_cents > 0)
        {
            printf("%i dimes, ", calculate_dimes);
        }
        else
        {
            printf("%i dimes\n", calculate_dimes);
        }
    }

    else if (get_cents / 10 == 1)
    {
        calculate_dimes = get_cents / 10;
        get_cents -= (calculate_dimes*10);
        if (get_cents > 0)
        {
            printf("%i dime, ", calculate_dimes);
        }
        else
        {
            printf("%i dime\n", calculate_dimes);
        }
    }

    if (get_cents / 5 > 1)
    {
        calculate_nickels = get_cents / 5;
        get_cents -= (calculate_nickels*5);
        if (get_cents > 0)
        {
            printf("%i nickels, ", calculate_nickels);
        }
        else
        {
            printf("%i nickels\n", calculate_nickels);
        }
    }

    else if (get_cents / 5 == 1)
    {
        calculate_nickels = get_cents / 5;
        get_cents -= (calculate_nickels*5);
        if (get_cents > 0)
        {
            printf("%i nickel, ", calculate_nickels);
        }
        else
        {
            printf("%i nickel\n", calculate_nickels);
        }
    }

    if (get_cents / 1 > 1)
    {
        calculate_pennies = get_cents / 1;
        get_cents -= (calculate_pennies*1);
        if (get_cents > 0)
        {
            printf("%i pennies, ", calculate_pennies);
        }
        else
        {
            printf("%i pennies\n", calculate_pennies);
        }
    }

    else if (get_cents / 1 == 1)
    {
        calculate_pennies = get_cents / 1;
        get_cents -= (calculate_pennies*1);
        if (get_cents > 0)
        {
            printf("%i penny, ", calculate_pennies);
        }
        else
        {
            printf("%i penny\n", calculate_pennies);
        }
    }

    if (get_cents == 0 && calculate_quarters == 0 && calculate_dimes == 0 && calculate_nickels == 0 && calculate_pennies == 0)
    {
        printf("0\n");
    }

    printf("Total coins needed: %i\n", (calculate_quarters + calculate_dimes + calculate_nickels + calculate_pennies));
}
