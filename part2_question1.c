//Celine Chan SBU ID: 115900631

#include <stdio.h>
#include <string.h>
#define MAX 50

int my_strcmp(char str1[], char str2[])
{
    int i;
	for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
	{
		if(str1[i] > str2[i] || str1[i] < str2[i])
			return 1;
	}
    if(str1[i] == '\0' && str2[i] == '\0') 
		return 0;
	else if(str1[i] == '\0') 
		return 1; 
    else
        return 1;
}

int my_strncmp(char str1[], char str2[], int n)
{
    int i;
    for(i = 0; str1[i] != '\0' && str2[i] != '\0' && i < n-1; i++)
    {
        if(str1[i] > str2[i] || str1[i] < str2[i])
			return 1;
    }
    if(str1[i] == str2[i]) 
		return 0;
	else if(str1[i] == '\0') 
		return 1; 
    else
        return 1;
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

char* my_reverse(char str1[], char str2[])
{
    int len = 0;
    while(str2[len] != '\0')
    {
        len++;
    }

    int start = 0, end = len-1;
    char temp;

    while (start < end) 
    {
        temp = str2[start];
        str2[start] = str2[end];
        str2[end] = temp;
        start++;
        end--;
    }

    return my_strcpy(str1, str2);
}

int main()
{
    char str1[MAX], str2[MAX];
    int n;

    //testing my_strcmp
    printf("Testing my_strcmp the first time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %d\n", my_strcmp(str1, str2));
    printf("Testing my_strcmp the second time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %d", my_strcmp(str1, str2));

    printf("\n------------------------\n");

    //testing my_strncmp
    printf("Testing my_strncmp the first time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Amount of characters to compare: "); scanf("%d", &n); getchar();
    printf("Output: %d\n", my_strncmp(str1, str2, n));
    printf("Testing my_strncmp the second time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Amount of characters to compare: "); scanf("%d", &n); getchar();
    printf("Output: %d", my_strncmp(str1, str2, n));

    printf("\n------------------------\n");

    //testing my_strcpy
    printf("Testing my_strcpy the first time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %s\n", my_strcpy(str1, str2));
    printf("Testing my_strcpy the second time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %s", my_strcpy(str1, str2));

    printf("\n------------------------\n");

    //testing my_strcat
    printf("Testing my_strcat the first time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %s\n", my_strcat(str1, str2));
    printf("Testing my_strcat the second time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %s", my_strcat(str1, str2));

    printf("\n------------------------\n");

    //testing my_reverse
    printf("Testing my_reverse the first time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %s\n", my_reverse(str1, str2));
    printf("Testing my_reverse the second time:\n");
    printf("First string: "); scanf("%s", &str1); getchar();
    printf("Second string: "); scanf("%s", &str2); getchar();
    printf("Output: %s", my_reverse(str1, str2));

    printf("\n------------------------\n");

    return 0;
}
