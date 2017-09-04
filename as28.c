#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100 
void main()
{
    char str[str_size];
    int alp, digit, splch, i;
    alp = digit = splch = i = 0;


       printf("\n\nCount total number of alphabets, digits and special characters :\n");
       printf("----------------------\n"); 	
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);	
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alp++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of Alphabets  : %d\n", alp);
    printf("Number of Digits  : %d\n", digit);
    printf("Number of Special characters  : %d\n\n", splch);
}
