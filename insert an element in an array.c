#include  <stdio.h>
#include <conio.h>
Void main()
{
Int array[100], position, c, n, value;
Printf("Enter number of elements in array\n");
scanf("%d", &n);
Printf("Enter %d elements\n", n);
for (c = 0; c < n; c++)
scanf("%d", &array[c]);
Printf("Enter the location where you wish to insert an element\n");
scanf("%d", &position);
Printf("Enter the value to insert\n");
scanf("%d", &value);
For (c = n - 1; c >= position - 1; c--)
array[c+1] = array[c];
array[position-1] = value;
Printf("Resultant array is\n");
For (c = 0; c <= n; c++)
Printf("%d\n", array[c]);
Getch();
}
