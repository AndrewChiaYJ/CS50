# include <cs50.h>
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <math.h>

int count_letters(string text)
{
    int countletters = 0;
    int stringlength = strlen(text);
    for (int i = 0; i < stringlength; i++)
    {
        countletters++;
    }
    return countletters;
}

int count_words(string text)
{
    int countwords = 0;
    int stringlength = strlen(text);
    for (int i = 0; i < stringlength; i++)
    {
        if (text[i] == ' ')
        {
            countwords+= 1;
        }
    }
    countwords += 1;
    return countwords;
}

int count_sentences(string text)
{
    int countsentences = 0;
    int stringlength = strlen(text);
    for (int i = 0; i < stringlength; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            countsentences+= 1;
        }
    }
    return countsentences;
}

int main (void)
{
    string usertext = get_string("String: ");
     float countletters = count_letters(usertext);
     float countwords = count_words(usertext);
     float countsentences = count_sentences(usertext);
     float index = ((0.0588 * (countletters/countwords * 100.00)) - (0.296 * (countsentences/countwords * 100.00)) - 15.8);
     long int final_index = lrintf(index);
     if (final_index < 1)
     {
         printf("Before Grade 1\n");
     }
     else if (final_index > 16)
     {
         printf("Grade 16+\n");
     }
     else
     {
         printf("Grade %li\n", final_index);
     }
}