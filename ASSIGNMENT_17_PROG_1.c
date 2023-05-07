#include <stdio.h>
void main()
{
    char c[100];int i;
    printf("Type a Word ::\n");
    scanf("%s",&c);
    for(i=0;c[i]!='\0';i++);
    printf("Length of the String = %d",i);
    getch();
}
