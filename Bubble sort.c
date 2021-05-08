#include <stdio.h>
#include<Conio.h>
int main()
{
  int array[100], n, i, d, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  
  for (i = 0 ; i < n - 1; i++)
  {
    for (d = 0 ; d < n - i - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap = array[d];
        array[d] = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  printf("Sorted list:\n");
  for (i = 0; i < n; i++)
     printf("%d\t", array[i]);
  return 0;
}