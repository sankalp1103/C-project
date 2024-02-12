#include <stdio.h>
#include <stdlib.h>

int main() {
int m;
int n;
printf("Enter m ");
scanf("%d", &m);
if (m > 0) {
n = 1;
} else if (m == 0) {
n = 0;
} else {
n = -1;
}
printf("n is %d\n", n);
return 0;}
