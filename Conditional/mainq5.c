#include <stdio.h>
#include <stdlib.h>

int main() {
int age;
printf("Enter age: ");
scanf("%d", &age);
if (age >= 18) {
printf("Congratulations! You are eligible to cast your vote.\n");
} else {
printf("Not eligible to cast vote.\n");
}
return 0;}
