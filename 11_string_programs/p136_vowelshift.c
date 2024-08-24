#include<stdio.h>
#include<string.h>
 int main()
{
    int y,i,k=0,k2=0;
    char name[200],ch;
    char name1[200]={" "};
    char name2[200]={" "};

    printf("\n enter name:");
    gets(name);
    y=strlen(name);
    
    for(i=0;i<y;i++)
    {
      ch=name[i];
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
      {
        name1[k]=ch;
        k++;
      }
   else
   {
    name2[k2]=ch;
    k2++;
   }
    
    }
    
    printf("\nNew = %s",name1);
    printf("\n %s",name2);
    return 0;
    
}