# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>
# include <stdlib.h>

bool only_alpha(string s);
char substitute(char c, string t);
bool string_length(string s);

int main (int argc, string argv[])
{
    if (argc == 2 && only_alpha(argv[1]) == 1)
    {
        string key_input = argv[1];
        string plaintext = get_string("plaintext: ");
        string new_word = plaintext;
        for (int j=0; j< strlen(plaintext); j++)
        {
            new_word[j] = substitute(plaintext[j], key_input);
        }
        printf("ciphertext: %s\n", new_word);
    }
    else if (argc == 2 && string_length(argv[1]) == 0)
    {
        printf("Key must contain 26 characters.\n");
    }
    else
    {
        printf("Usage: ./substitution key\n");
    }

}

bool only_alpha(string s)
{
    int count = 0;
    for (int i=0; i< strlen(s); i++)
    {
        if (isalpha(s[i]))
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

bool string_length(string s)
{
    if (strlen(s) == 26)
    {
        return true;
    }
    else
    {
        return false;
    }
}

char substitute(char c, string t)
{
    if (isupper(c) != 0)
    {
        return toupper(t[c-65]);
    }
    else if (islower(c) != 0)
    {
        return tolower(t[c-97]);
    }
    else
    {
        return c;
    }
}