#include <stdio.h>
#include <string.h>

void strCat(char *a, char *b)
{
    int m = strlen(a);
    int n = strlen(b);
    int i;

    for (int i = 0; i <= n; i++)
    {
        a[m + i] = b[i];
    }
}
int main()
{
    char *str1 = "PRO";
    char *str2 = "CODER";
printf("helo");
    strCat(str1, str2);
    printf("%s ", str1);
}