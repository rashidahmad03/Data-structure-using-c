#include <stdio.h>
#include <conio.h>
Void main()
{
Int c, n, fact = 1;
Printf("Enter a number to calculate its factorial\n");
Scanf("%d", &n);
For (c = 1; c <= n; c++)
Fact = fact * c;
Printf("Factorial of %d = %d\n", n, fact);
Getch();
}

