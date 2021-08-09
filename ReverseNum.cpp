#include<stdio.h>


int main() {
    int final = 0, flag, target;
    scanf("%d", &target);
    while(target) {
        final *= 10;
        final += target % 10;
        target = target / 10;
    }
    printf("%d", final);
    return 0;
}