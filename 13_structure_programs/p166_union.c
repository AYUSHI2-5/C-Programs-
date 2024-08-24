#include <stdio.h>
union student
{
    int no,eng;

};
main()
{
    union student  s1,s2,s3;
    
        printf("\nEnter no=");
        scanf("%d",&s1.no);
        printf("\nEnter marks of english=");
        scanf("%d",&s1.eng);
    
    
         printf("\nEnter no=");
        scanf("%d",&s2.no);
         printf("\nEnter marks of english=");
        scanf("%d",&s2.eng);
    
     
        printf("\nEnter no=");
        scanf("%d",&s3.no);
         printf("\nEnter marks of english=");
        scanf("%d",&s3.eng);
     
    printf("\nno=%d eng=%d",s1.no,s1.eng);
    printf("\nno=%d eng=%d",s2.no,s2.eng);
    printf("\nno=%d eng=%d",s3.no,s3.eng);
}


