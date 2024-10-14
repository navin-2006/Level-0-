#include <stdio.h>
int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b) {
        printf("%d\n");
    } else if(b>a) {
        printf("%d\n");
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
