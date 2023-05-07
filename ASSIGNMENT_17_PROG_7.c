#include <stdio.h>
void main()
{
    char ch[500];int a=0,d=0,sc=0;
    printf("Enter a Sentence or Word(Mixed with Alphanumeric and Digits) ::\n");
    gets(ch);
    for(int i=0;i<strlen(ch);i++)
    {
        if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122))
            a++;
        else if(ch[i]>='0'&&ch[i]<='9')
            d++;
        else if(ch[i]!=' ')
            sc++;
    }
    printf("\nOUTPUT::\nIn the given String,\nNo. of Alphabets = %d,\nNo. of Digits = %d, and\nNo. of Special Characters = %d",a,d,sc);
    getch();
}
