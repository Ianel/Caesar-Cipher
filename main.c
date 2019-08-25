#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char CharComp(char a, char b)
{
    char validator = {'x'};

    if (a == b)
    {
        validator = 'T';
    } else {
        validator = 'F';
    }
        return validator;
}

int main()
{
    int i = 0, j = 0;
    char temp[132] = {"abbcfge"};
    char dico[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a'};
    char result = {'y'};

    printf("Texte: ");
    scanf("%s", temp);

    for (i=0; i<strlen(temp); i++)
    {
        for (j=0; j<27; j++)
        {
            result = CharComp(temp[i],dico[j]);
            if (result == 'T')
            {
                temp[i] = dico[j+1];
                printf("%c", temp[i]);
                break;
            }
        }
    }
    return 0;
}

