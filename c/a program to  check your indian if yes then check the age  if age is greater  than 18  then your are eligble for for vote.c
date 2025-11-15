#include <stdio.h>
int main() {
    char nation;
    printf("enter I if you are an indian:");

    scanf("%c",&nation);
    if (nation=='I ' || nation=='i') {
        int age;
        printf("great, now give your age:");
        scanf("%d",&age);
        if (age>=18) {
            printf("you are eligble for voting");
        }
        else
            printf("you are not eligble for voting");

    }
    else
        printf("you are not indian");
    return 0;
}




