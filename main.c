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
    char dico[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    printf("Texte: ");
    scanf("%s", temp);
    char result[strlen(temp)];
    for (i=0; i<strlen(temp); i++)
    {

        for (j=0; j<27; j++) {

          	if (temp[i] == dico[j]) {
          		result[i]=  dico[(j+1)%26];
	           }
        }
    }
    printf("%s", result);

   return 0;
 }
