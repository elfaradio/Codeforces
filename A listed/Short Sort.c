#include <stdio.h>
#include <string.h>
int main()
{
   int t;
   scanf("%d",&t);
   while(t--)
   {
       char ch[4];
       scanf("%s",ch);
       if(strcmp(ch,"abc")==0|| strcmp(ch,"acb")==0||strcmp(ch,"bac")==0||strcmp(ch,"cba")==0)
       {

           printf("YES\n");
       }
       else if (strcmp(ch,"bca")==0|| strcmp(ch,"cab")==0)
       {
           printf("NO\n");
       }
   }
}
