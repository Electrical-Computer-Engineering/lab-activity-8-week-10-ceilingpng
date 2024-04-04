//Celine Chan SBU ID: 115900631

#include <stdio.h>
#include <string.h>
#define MAX 10

int my_len(char str[])
{
    int len = 0;

    while(str[len] != '\0')
    {
        len++;
    }

    return len;
}

int main()
{
    char str[MAX];
    int i, len;

    printf("Enter a string of 10 chars or less: "); scanf("%s", &str); getchar();
    printf("\n");
    
    len = my_len(str);

    for(i = 0; i < len; i++)
    {
        //if(str[i+1] != '\0')
            str[i] = str[i+1];
        //else
            //str[i] = '\0';

        printf("%s\n", str);
    }
}
