//Binary search
#include<stdio.h>
int main()
{
 int i, first, last, middle, m, search, array[100];
 printf("Enter number of elements in ascending order:\n");
 scanf("%d",&m); 
 printf("Enter %d integers:\n", m);
 for (i = 0; i < m; i++)
 scanf("%d",&array[i]); 
 printf("Enter the value to find:\n");
 scanf("%d", &search);
 first = 0;
 last = m - 1;
 middle = (first+last)/2;
 while (first <= last) 
 {
 if (array[middle] < search)
 first = middle + 1; 
 else if (array[middle] == search)
 {
 printf("%d is present at index %d.\n", search, middle+1);
 break;
 }
 else
 last = middle - 1;
 middle = (first + last)/2;
 }
 if (first > last)
 printf("Not found! %d is not present in the list.\n", search);
 return 0; 
}

