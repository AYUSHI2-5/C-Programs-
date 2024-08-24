#include<stdio.h>
#include<ctype.h>
int main()
{
    FILE *f1,*f2,*f3;
    char ch;
    int c=0;
    f1=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile1.txt","r");
    f2=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile2.txt","w");
    f3=fopen("C:\\Users\\ayush\\OneDrive\\Desktop\\c\\.vscode\\textfile3.txt","w");
    while(ch!=EOF)
    {   

        ch=getc(f1);
        if(isupper(ch))
        {
            
            putc(ch,f2);
        }
        else if(islower(ch))
        {
          putc(ch,f3);
        }
      
    }

    printf("\ncopied");
    
fclose(f2);
return 0;
}


