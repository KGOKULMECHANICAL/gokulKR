#include <stdio.h>
 
void main()
{
  int array[100], n, G, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (G = 0; G < n; G++)
    scanf("%d", &array[G]);
 
  for (G = 0 ; G < ( n - 1 ); G++)
  {
    for (d = 0 ; d < n - G - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( G = 0 ; G < n ; G++ )
     printf("%d\n", array[G]);
 
  return 0;
}
