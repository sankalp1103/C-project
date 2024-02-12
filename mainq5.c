#include <stdio.h>
#include <stdlib.h>

int main() {
int n,i;
printf("Enter the last number ");
scanf("%d", &n);
for (i = 1; i <= n; i++) {
printf("Number = %d and cube of the %d is : %d\n", i, i, i*i*i);
}
return 0;}
