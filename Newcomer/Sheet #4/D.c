#include <stdio.h>
#include <string.h>
int main()
{
    char s[11];
    char s2[11];
    char temp[1];

    scanf("%s", s);
    scanf("%s", s2);
    printf("%d %d\n", strlen(s), strlen(s2));
    char s3[11];
    strcpy(s3, s);
    strcat(s3, s2);
    printf("%s\n", s3);
    temp[0] = s[0];
    s[0] = s2[0];
    s2[0] = temp[0];
    printf("%s %s\n", s, s2);
}
