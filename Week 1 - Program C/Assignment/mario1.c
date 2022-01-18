# include <cs50.h>
# include <stdio.h>

int main(void)
{
    int height=0;
    do
    {
        height = get_int("What is the height of pyramid?\n");
        printf("Height: %i\n", height);
    }
    while (height <1 || height >8);

    if (height >0 && height <9)
    {
        for (int i=0; i<height; i++)
        {
            printf("%*s", height-i, "");
            for (int j=0; j<(i+1); j++)
            {
                printf("#");
            }
            printf("%*s", 2, "");
            for (int k=0; k<(i+1); k++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
