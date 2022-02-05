# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include <stdlib.h>

bool only_digits(string s);
char rotate(char c, int n);

int main (int argc, string argv[])
{
    // Make sure every character in argv[1] is a digit

    if (argc == 2 && only_digits(argv[1]) == 1)
    {
        int key_input = atoi(argv[1]);
        string plaintext = get_string("plaintext: ");
        string new_word = plaintext;
        for (int j=0; j< strlen(plaintext); j++)
        {
            new_word[j] = rotate(plaintext[j], key_input);
        }
        printf("ciphertext: %s\n", new_word);
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }

}

bool only_digits(string s)
{
    int count = 0;
    for (int i=0; i< strlen(s); i++)
    {
        if (isdigit(s[i]))
        {
            count +=1;
        }
    }
    if (count == strlen(s))
    {
        return true;
    }
    else
    {
        return false;
    }
}

char rotate(char c, int n)
{
    if (c >= 65 && c<= 90)
    {
        if ((c+n)>90)
        {
            return (c+n-26);
        }
        else
        {
            return c+n;
        }
    }
    else if (c>=97 && c<=122)
    {
        if ((c+n)>122)
        {
            return (c+n-26);
        }
        else
        {
            return c+n;
        }
    }
    else
    {
        return c;
    }
}