# include <cs50.h>
# include <stdio.h>

int main(void)
{
    const int mine = 2;
    int points = get_int("How many points did you lose? ");

    if (points < mine)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > mine)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lose same points as me.\n");
    }
}