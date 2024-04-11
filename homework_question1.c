//Celine Chan SBU ID: 115900631
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 39

char my_tolower(char c)
{
    if(c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    else
        return c;
}

char* my_strcat(char str1[], char str2[])
{
    int len = 0;
    while(str1[len] != '\0')
    {
        len++;
    }

    int i = 0;
    while(str2[i] != '\0')
    {
        str1[len++] = str2[i++];
    }

    str1[len] = '\0';
    return str1;
}

char* my_strcpy(char str1[], char str2[])
{
    int i;
    for(i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    return str1;
}

int is_vowel(char c)
{
    c = my_tolower(c); 
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

char* ToPigLatin(char* word)
{
    char* pigLatin = (char*)malloc((strlen(word) + 4) * sizeof(char)); //went to office hours for malloc

    if(is_vowel(word[0]) && !is_vowel(word[1])) 
    { 
        return word = my_strcat(word, "way");
    }
      
    else
    { 
    int i;

    for(i = 1; word[i] != '\0'; ++i) 
    {
        if(is_vowel(word[i]))
            break;
    }

    my_strcpy(pigLatin, word + i);
    strncat(pigLatin, word, i); 
    my_strcat(pigLatin, "ay"); 

    }
    
    if(isupper(word[0])) 
    {
        pigLatin[0] = toupper(pigLatin[0]);
    }

    return pigLatin;
}

int main() 
{
    char word[MAX];

    printf("Please enter 5 words:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("Word %d: ", i + 1); scanf("%s", word);
        printf("Output: %s\n", ToPigLatin(word));
    }

    return 0;
}


