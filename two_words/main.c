#include <stdio.h>
#include <string.h>

int main() {
    int len1;
    int len2;
    int len_out;
    char a[31];
    char b[31];
    char out[100];
    printf("Please enter first text:\n");
    scanf("%[^\n]%*c", &a);
    printf("Please enter second text:\n");
    scanf("%[^\n]%*c", &b);
    strcpy(out, a);
    strcat(out, b);
    len1 = strlen(a);
    len2 = strlen(b);
    len_out = strlen(out);
    printf("You provided firstly: %s, with length of: %d,\n "
           "then: %s, with length of: %d\n "
           "Combined string looks like that: %s, with length of: %d\n " ,a ,len1,b,len2 , out, len_out);
    return 0;
}