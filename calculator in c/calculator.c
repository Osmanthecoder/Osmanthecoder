#include<stdio.h>

int main ()

{
   // Storing the values in variables or datatype in C//
  float num1, num2;
  float result;
  char symbole;
  // Asking the user to enter first number// 
  printf ("Enter first number = ");
  scanf ("%f", &num1);
  // Asking the user to enter second number//
  printf ("Enter second number = ");
  scanf ("%f", &num2);
  // Asking the user to enter mathematics symbole to perform calculation//
  printf ("Choose symbole to perform calculation ( +, - , /, * )= ");
  scanf (" %c", &symbole);

  result = 0;
  switch (symbole)
    {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf ("Invalid operation\n");
    }
  printf ("Result: %.2f %c %.2f = %.26f\n", num1, symbole, num2, result);
  return 0;
}