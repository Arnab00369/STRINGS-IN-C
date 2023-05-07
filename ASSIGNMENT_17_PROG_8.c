#include <stdio.h>
void main()
{
    char ch[500],c[500];int c1=0;
    printf("Enter a Sentence or Word ::\n");
    gets(ch);
    printf("\nOUTPUT::\nThe Copied String is ::\n");
    for(int i=0;i<=strlen(ch);i++)
        c[i]=ch[i];
    puts(c);
    getch();
}

