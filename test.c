#include <stdio.h>

int main(){

    char fname[24];
    char lname[24];

    printf("Input user's first name: ");
    scanf("%23s", fname);

    printf("Input user's last name: ");
    scanf("%23s", lname);

    printf("\nHello, %s %s!", fname, lname);
    
    return 0;
}
