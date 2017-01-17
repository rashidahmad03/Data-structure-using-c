#include <stdio.h>
#include<conio.h>
Int main()
{
Int array[100], n, c, d, swap;
Printf("Enter number of elements\n");
Scanf("%d", &n);
Printf("Enter %d integers\n", n);
For (c = 0; c < n; c++)
Scanf("%d", &array[c]);
For (c = 0 ; c < ( n - 1 ); c++)
{
For (d = 0 ; d < n - c - 1; d++)
{
If (array[d] > array[d+1])
{
Swap       = array[d];
Array[d]   = array[d+1];
Array[d+1] = swap;
}
}
}
Printf("Sorted list in ascending order:\n");
For ( c = 0 ; c < n ; c++ )
Printf("%d\n", array[c]);
Return 0;
}
