#include <stdio.h>
void main()
{
    char ch[500],c;
    printf("Enter a Sentence or Word ::\n");
    gets(ch);
    printf("Enter a Character ::\n");
    scanf("%c",&c);
    int c1=0;
    for(int i=0;i<=strlen(ch);i++)
    {
        if(ch[i]==c)
            c1++;
    }
    printf("Frequency of %c is = %d",c,c1);
    getch();
}

