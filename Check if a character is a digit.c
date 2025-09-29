#include <stdio.h>
int main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch >= '0' && ch <= '9') {
        printf("Character is a digit\n");
    } else {
        printf("Character is not a digit\n");
    }
    return 0;
}