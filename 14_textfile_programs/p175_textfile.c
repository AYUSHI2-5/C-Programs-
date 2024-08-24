#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile1.c","r");
    f2=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile2.c","w");
    while(ch!=EOF)
    {   

        ch=getc(f1);
       putc(ch,f2);
    }
    printf("\ncopied");
    

return 0;
}

