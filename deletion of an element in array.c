#include  <stdio.h>
#include <conio.h>
Void main()
{
Int array[100], position, c, n;
Printf("Enter number of elements in array\n");
Scanf("%d", &n);
Printf("Enter %d elements\n", n);
For ( c = 0 ; c < n ; c++ )
Scanf("%d", &array[c]);
Printf("Enter the location where you wish to delete element\n");
Scanf("%d", &position);
If ( position >= n+1 )
Printf("Deletion not possible.\n");
Else
{
For ( c = position - 1 ; c < n - 1 ; c++ )
Array[c] = array[c+1];
Printf("Resultant array is\n");
For( c = 0 ; c < n - 1 ; c++ )
Printf("%d\n", array[c]);
}
Getch();
}
