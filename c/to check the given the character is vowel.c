#include <stdio.h>
int main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        printf("vowel");
    /*else if (ch=='e')
        printf("vowel");
    else if (ch=='i')
        printf("vowel");
    else if (ch=='o')
        printf("vowel");
    else if (ch=='u')c
        printf("vowel");
    */
    else
        printf("the  given character is not vowel");
    return 0;
}