#include <stdio.h>
#include <string.h>
union hu {
    
    char name[20];
    int roll;
    float marks;

}un;

int main(void){
    
    printf("Enter name: ");

    fgets(un.name, sizeof(un.name), stdin);
    printf("Name: %s \n", un.name);

    un.roll = 12345;
    printf("Roll: %d\n", un.roll);

    un.marks = 95.5;
    printf("Marks: %.2f\n", un.marks);

    
    
    
    printf("Union size: %zu bytes\n", sizeof(un));
    printf("name %s",un.name);


}
