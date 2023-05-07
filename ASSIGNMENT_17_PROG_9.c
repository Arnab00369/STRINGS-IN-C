#include <stdio.h>
void main()
{
    char ch[500];int a=0,d=0,sc=0,c;
    printf("Enter a Sentence or Word ::\n");
    gets(ch);
    c=strlen(ch);
    for(int i=c;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(ch[j]>ch[j+1])
            {
                ch[j]=ch[j]+ch[j+1];
                ch[j+1]=ch[j]-ch[j+1];
                ch[j]=ch[j]-ch[j+1];
            }
        }
    }
    printf("\nOUTPUT::\nThe Sorted String is ::\n");
    for(int i=0;i<=c;i++)
    {
        printf("%c",ch[i]);
    }
    getch();
}
