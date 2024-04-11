//Celine Chan SBU ID: 115900631

#include <stdio.h>
#include <string.h>

#define MAX 64

char* remove_match(char str1[], const char str2[])
{
    int i, j, k;
    for(i = k = 0; str1[i] != '\0'; ++i)
    {
        int match = 0;
        for(j = 0; str2[j] != '\0'; ++j)
        {
            if(str1[i] == str2[j])
            {
                match = 1;
                break;
            }
        }
        if(!match)
        {
            str1[k++] = str1[i];
        }
    }
    str1[k] = '\0';
    return str1;
}

// int my_len(char str[])
// {
//     int len = 0;
//     while(str[len] != '\0')
//     {
//         len++;
//     }
//     return len;
// }

// char* match_remove(char str1[], char str2[])
// {
//     char result[MAX];
//     char curr;
//     int i, j, pos = 0;

//     for(i = 0; i < my_len(str1); i++)
//     {
//         curr = str1[i];
//         for(j = 0; j < my_len(str2); j++)
//         {
//             if(curr != str2[j])
//             {
//                 result[pos] = curr;
//             }
//             pos++;
//         }
//     }
//     for(i = 0; i < pos; i++)
//     {
//         str1[i] = result[i];
//     }
//     str1[pos] = '\0';
//     return str1;
// }

int main()
{
    char str1[MAX], str2[MAX];

    printf("Enter first string: "); 
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    printf("Output: %s\n", remove_match(str1, str2));
    
}
