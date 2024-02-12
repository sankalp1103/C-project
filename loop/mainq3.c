#include <stdio.h>
#include <stdlib.h>

int main() {
int i, n, sum = 0;
printf("Enter digits ");
scanf("%d", &n);
printf("\nNumbers are\n", n);
for (i = 1; i <= n; i++) {
printf("%d ", i);
sum += i;
}
printf("\n\nThe Sum is %d \n", n, sum);
return 0;
}
