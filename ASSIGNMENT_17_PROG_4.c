#include <stdio.h>
void main()
{
    char ch[500];
    printf("Enter a Sentence or Word in Lower Case::\n");
    gets(ch);
    printf("\nOUTPUT::\nThe given String converted to Upper Case is ::\n");
    for(int i=0;ch[i];i++)
    {
        if(ch[i]>=97&&ch[i]<=122)
            printf("%c",(ch[i]-97)+65);
        else
            printf("%c",ch[i]);

    }
    getch();
}

