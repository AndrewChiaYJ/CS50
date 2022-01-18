# include <cs50.h>
# include <stdio.h>
# include <math.h>

int main(void)
{
    long int number = get_long("Card Number?");

    //Number of digit in number
    long int digit = 1;
    long int number_one = number;
    long int number_two = 0;
    for (int i=0; i <20; i++)
    {
        if (number_one/10 > 0)
        {
            digit +=1 ;
            number_one /= 10;
        }
        if ((number_one/10) <100 && (number_one/10) > 10)
        {
            number_two += ((number_one/10)%10);
        }
    }

    // Check sum
    long int summation = 0;
    long int multiplied_num = 0;
    long int number_for_check_sum = number;
    long int power = 0;
    long int power_one_less = 0;
    for (int j=2; j <=digit; j+=2)
    {
        power = pow(10,j);
        power_one_less = pow(10, j-1);
        multiplied_num = (number_for_check_sum % power) / power_one_less;
        multiplied_num *= 2;
        if (multiplied_num <10)
        {
            summation += multiplied_num;
        }
        else if (multiplied_num >=10)
        {
            summation += (multiplied_num % 10);
            summation += (multiplied_num /10);
        }
    }
    for (int k=1; k <=digit; k+=2)
    {
        power = pow(10,k);
        power_one_less = pow(10, k-1);
        summation += ((number_for_check_sum % power) / power_one_less);
    }
    if (summation %10 == 0)
    {
        if (digit == 15 && number_one == 3 && (number_two == 4 || number_two == 7))
        {
            printf("AMEX\n");
        }

        else if (digit == 16 && number_one == 5 && (number_two == 1 || number_two == 2 || number_two == 3 || number_two == 4 || number_two == 5))
        {
            printf("MASTERCARD\n");
        }

        else if (number_one == 4 && (digit == 13 || digit == 16))
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }

    }
    else
    {
        printf("INVALID\n");
    }
}
