#include <conio.h>
#include <stdio.h>
Void main()
{
Int n, array[1000], c, d, t;
Printf("Enter number of elements\n");
Scanf("%d", &n);
Printf("Enter %d integers\n", n);
For (c = 0; c < n; c++)
{
scanf("%d", &array[c]);
}
for (c = 1 ; c <= n - 1; c++)
{
d = c;
While ( d > 0 && array[d] < array[d-1])
{
t          = array[d];
array[d]   = array[d-1];
array[d-1] = t;
d--;
}
}
Printf("Sorted list in ascending order:\n");
For (c = 0; c <= n - 1; c++)
{
Printf("%d\n", array[c]);
}
Getch()

