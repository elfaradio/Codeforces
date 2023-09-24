#include <stdio.h>
#include <string.h>
int main()
{
    char S[1000];
    char T[1000];
    gets(S);
    gets(T);
    int len1,len2;
    len1=strlen(S);
    len2=strlen(T);
    
    strcat(S," ");
    strcat(S,T);


    printf("%d %d\n",len1,len2);
    printf("%s\n",S);

}
