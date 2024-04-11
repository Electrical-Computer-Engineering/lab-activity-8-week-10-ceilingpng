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

char* shift_right(char str[])
{
    int i, j;
    int len = my_len(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%s\n", str);
        for(j = 0; j < len - 1; j++)
        {
            str[j] = str[j+1];
        }
        str[len - 1] = ' ';
    }
    return str;
}


int main()
{
    char str[MAX];
    int i;

    printf("Enter a string of 10 chars or less: "); scanf("%s", &str); getchar();
    printf("\n");
    
    printf("%s\n", shift_right(str));

    // for(i = 0; i < 2; i++)
    // {
    //     char str[MAX];
    //     printf("Enter string: "); scanf(" %s", str);
    //     printf("Output: %s\n", shift_right(str));
    // }


//      printf("Enter a string: ");
//     scanf("%s", str);

//     int len = strlen(str);
//     for (int i = 0; i < len; i++) {
//         printf("Output: %s\n", str);
//         char temp = str[0]; // Store the first character temporarily
//         for (int j = 0; j < len - 1; j++) {
//             str[j] = str[j + 1]; // Shift each character to the left
//         }
//         str[len - 1] = ' '; // Place a space at the end instead of the first character
//     }

//     return 0;
}
