/*Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2
*/
#include<stdio.h>

int taksh(){
int a[10];
int n,i,sum=0;

  printf("enter count array size :");
  scanf("%d",&n);
 
  	for(i=0; i<n; i++){
  	printf("enter count  :");
  	scanf("%d",&a[i]);
  }
       for(i=0; i<n; i++){
        printf(" %d",a[i]);
         sum +=a[i];
  }
          printf("\nsum = %d",sum);
}
void main(){
	taksh();
}
