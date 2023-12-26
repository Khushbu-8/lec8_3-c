#include<stdio.h>

void main(){

/*

Q.1 Write a Program to find the average of a given 2D array.
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:/
Average of an Array: 3.88

*/	
	
	int n1,n2,i,j;

	
	printf("Enter Array A's size :");
	scanf("%d",&n1);
	
		int a[n1],b[n2];
	
		printf("Enter value of A eliment\n");	
	for(i=0; i<n1; i++){
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		
	}
	
	printf("Enter Array B's size :");
	scanf("%d",&n2);
	
	
	
	printf("Enter value of B eliment\n");	
	for(i=0; i<n2; i++){
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);
		
	}
	
	int c[n1+n2];
	for(i=0;i<n1; i++){
		c[i]=a[i];
	}
	for(i=0;i<n2; i++){
		c[n1+i]=b[i];
	}
	printf("array c :");
	
	for(i=0;i<n1+n2;i++){
		printf("%d ",c[i]);
	}

	
}
