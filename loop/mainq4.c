#include <stdio.h>
#include <stdlib.h>
int main() {
int numbers[10];
int sum = 0;
int i;
for (i = 0; i < 10; i++) {
printf("Number %d: ", i+1);
scanf("%d", &numbers[i]);
sum += numbers[i];
}
printf("Sum is %d\n", sum);
double average = (double)sum / 10;
printf("Average is %f\n", average);
return 0;
}
