#include <stdio.h>
void main()
{
    char ch[500];int c1=0;
    printf("Enter a Sentence or Word ::\n");
    gets(ch);
    for(int i=0;ch[i];i++)
    {
    ch[i]=tolower(ch[i]);
    }
    for(int i=0;ch[i];i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
            c1++;
    }
    printf("The Number of Vowels in the given String = %d",c1);
    getch();
}
