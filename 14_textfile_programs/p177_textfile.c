#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *f1,*f2,*f3;
    char ch;
    int c=0;
    f1=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile1.c","r");
    f2=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile2.c","r");
    f3=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile3.c","w");
    while(ch!=EOF)
    {   

        ch=getc(f1);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            
            putc(ch,f2);
        }
        else
        {
          putc(ch,f3);
        }
      
    }

    printf("\ncopied");
    
fclose(f2);
return 0;
}