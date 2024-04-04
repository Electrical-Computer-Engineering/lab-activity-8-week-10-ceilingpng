//Celine Chan SBU ID: 115900631

#include <stdio.h>

int my_isalpha(char c)
{
    return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}

int my_isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

int my_isupper(char c)
{
    return c >= 'A' && c <= 'Z';
}

char my_toupper(char c)
{
    if(c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

char my_tolower(char c)
{
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

int main()
{
    char c;

    //testing my_isalpha
    printf("Testing my_isalpha once: "); scanf("%c", &c); getchar();
    printf("%d", my_isalpha(c));
    printf("\n");
    printf("Testing my_isalpha the second time: "); scanf("%c", &c); getchar();
    printf("%d", my_isalpha(c));

    printf("\n------------------------\n");

    //testing my_isdigit
    printf("Testing my_isdigit once: "); scanf("%c", &c); getchar();
    printf("%d", my_isdigit(c));
    printf("\n");
    printf("Testing my_isdigit the second time: "); scanf("%c", &c); getchar();
    printf("%d", my_isdigit(c));

    printf("\n------------------------\n");

    //testing my_isupper
    printf("Testing my_isupper once: "); scanf("%c", &c); getchar();
    printf("%d", my_isupper(c));
    printf("\n");
    printf("Testing my_isupper the second time: "); scanf("%c", &c); getchar();
    printf("%d", my_isupper(c));

    printf("\n------------------------\n");

    //testing my_toupper
    printf("Testing my_toupper once: "); scanf("%c", &c); getchar();
    printf("%c", my_toupper(c));
    printf("\n");
    printf("Testing my_toupper the second time: "); scanf("%c", &c); getchar();
    printf("%c", my_toupper(c));

    printf("\n------------------------\n");

    //testing my_tolower
    printf("Testing my_tolower once: "); scanf("%c", &c); getchar();
    printf("%c", my_tolower(c));
    printf("\n");
    printf("Testing my_tolower the second time: "); scanf("%c", &c); getchar();
    printf("%c", my_tolower(c));

    printf("\n------------------------\n");

    return 0;
}
