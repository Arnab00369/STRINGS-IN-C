#include <stdio.h>
void main()
{
    char ch[500];int c1;
    printf("Enter a Sentence or Word ::\n");
    gets(ch);
    c1=strlen(ch);
    printf("\nOUTPUT ::\nThe Reversed String ::\n");
    for(int i=c1;i>=0;i--)
        printf("%c ",ch[i]);
    getch();
}

