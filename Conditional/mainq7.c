#include <stdio.h>
#include <stdlib.h>

int main() {
float height;
printf("Enter your height ");
scanf("%f", &height);
if (height < 120) {
printf("Dwarf.\n");
} else if (height >= 120 && height < 150) {
printf("The person is of average height.\n");
} else if (height >= 150 && height < 180) {
printf("Tall.\n");
} else if (height >= 180) {
printf("Super tall.\n");
}
return 0;}
