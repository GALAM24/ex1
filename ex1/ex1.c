/******************
Name:Gal Amit
ID:214436842
Assignment:1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  int x = 0;//number to be scanned
  int y = 0;//position of bit
  // What bit
  printf("What bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &x);
  printf("Please enter a position:\n");
  scanf("%d", &y);
  printf("the bit in position %d of number %d is: %d",y,x,(x >> y) & 1);
  //shifts the bits a number of times equal to the position provided.
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */

  // Set bit

  printf("\nSet bit:\n");
  x =0;//original number
  y=0;//position
  int z =0;// new number
  printf("Please enter a number:\n");
  scanf("%d", &x);
  printf("Please enter a position:\n");
  scanf("%d", &y);
  z = (x >> y) | 1;//sets the bit in position y to 1
  z = (z << y) | x;//restores the original values of the bits in the number
  printf("Number with bit %d set to 1: %d\n",y,z);
  z = (1 << y)^z;//xor operation on the number in position y to set it to 0
  printf("Number with bit %d set to 0: %d\n",y,z);

  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  x =0;//original number
  y =0;//position
  printf("Please enter a number:\n");
  scanf("%d",&x);
  printf("Please enter a position:\n");
  scanf("%d",&y);
  x = (1 << y)^x;//xor operation on the number in position y to flip its value
  printf("Number with bit %d toggled: %d\n",y,x);

  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  // Even - Odd
  printf("\nEven - Odd:\n");
  x =0;//input number
  printf("Please enter a number:\n");
  scanf("%d", &x);
  printf("%d\n",(x&1)^1);
  /*The value of the bit in position 0 determines if the number is odd or even.
   *if its value is 0 then the number is even and if its 1 then the number is odd.
   *we take the value of the bit by comparing it to '1'
   *either way you must flip the value you get so that even numbers return 1 and odds return 0
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  x = 0;//first number in base 8
  y = 0;//second number in base 8
  z = 0;//sum
  printf("Please enter the first number (octal):\n");
  scanf("%o", &x);
  printf("Please enter the second number (octal):\n");
  scanf("%o", &y);
  z = x+y;
  printf("The sum in hexadecimal: %X\n",z);
  printf("The 3,5,7,11 bit are: %d%d%d%d\n",z>>3&1,z>>5&1,z>>7&1,z>>11&1);
    /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */

  printf("Bye!\n");
  
  return 0;
}
