# include <stdio.h>
# include <cs50.h>

int main(void)
{
    int n = 50;
    printf("%i\n",n);


    string s = "HI!";
    char c = s[0];
    char *p = &c;
    printf("%p\n",s);
    printf("%p\n",p);

    string t = "HI!";
    char *q = &t[0];
    printf("%p\n",q);
    printf("%p\n",t);
}