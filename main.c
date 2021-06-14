#include <stdio.h>
int main(void)
{
 char letter;
 printf("Please enter a letter from English alphabet:");
 scanf("%c", &letter);
 int ascii = letter;
 if(ascii >= 65 && ascii <=90)
 {
 printf("Capital letter!");
 }
 else if(ascii >= 97 && ascii <= 122)
 {
 printf("Small letter!");
 }
 else
 {
 printf("Invalid input!");
 }
 return 0;
}