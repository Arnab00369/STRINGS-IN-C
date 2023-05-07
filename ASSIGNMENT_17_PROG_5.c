#include <stdio.h>
void main()
{
    char ch[500];
    printf("Enter a Sentence or Word in Upper Case::\n");
    gets(ch);
    printf("\nOUTPUT:: \nThe given String converted to Lower Case is ::\n");
    for(int i=0;ch[i];i++)
    {
        if(ch[i]>=65&&ch[i]<=90)
            printf("%c",(ch[i]-65)+97);
        else
            printf("%c",ch[i]);

    }
    getch();
}


