#include<stdio.h>
int main()
{
    FILE *f1;
    char ch;
    f1=fopen("c:\\Apps\\abc.txt","r");
    while(ch!=EOF)
    {   

        ch=getc(f1);
        printf("%c",ch);
    }
    fclose(f1); 

return 0;
}