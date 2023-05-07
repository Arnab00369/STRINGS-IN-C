#include <stdio.h>
#include <string.h>
void main()
{
    char ch[500],c;int c1=0;
    printf("Enter a Sentence or Word ::\n");
    gets(ch);
    printf("Enter a character whose occurrence you want to find ::\nCharacter = ");
    c=getchar();
    for(int i=0;ch[i];i++)
    {
        if(ch[i]==c)
            c1++;
        else
            continue;
    }
    printf("The Character %c has occurred %d times in the given String",c,c1);
    getch();
}
