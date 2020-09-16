#include<stdio.h>
int main(void) {
// sizeof evaluates the size of a variable
printf("Size of char: %ld byte\n", sizeof(charType)); 
printf("Size of int: %ld bytes\n", sizeof(intType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
printf("Size of double: %ld bytes\n", sizeof(doubleType));
printf("Size of longint: %ld bytes\n", sizeof(longintType));
printf("Size of longlongint: %ld bytes\n", sizeof(longlongintType));
return 0;
}
