/* The program is a C Program to Do the Binary(Order) Search Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <stdlib.h>

/* Define the Macros used */
#define SIZE 13

int main(){ /* the program starts here */

/* declare variables used */
	int arr[SIZE]={ 2 ,2 ,8 ,154, 158, 478, 588 ,798 ,1641, 1654 ,10000 ,64654 ,466546};
	int i,key,found;
	int hi,lo,mid; // the boundary of the search

/* Displaying the array */
	printf("The array: ");
	for(i=0;i<SIZE;i++)
		printf("%d ",arr[i]);

    printf("\n\n");



	while(1){
		hi = SIZE-1;
		lo = 0;
		found = 0;

	/* Get the key from the user */
		printf("Enter the element to search for: ");
		scanf("%d",&key);

	/* Applying the Algorithm */
		while(!found && (lo <= hi)){
			mid = (hi+lo)/2;
			if(arr[mid] > key)
				hi = mid-1;
			else if(arr[mid] < key)
				lo = mid +1;
			else{
				found = 1;
				printf("Found at arr[%d] = %d\n",mid,arr[mid]);
			}
		}
	/* Not found in the array */
		if(!found)
			printf("NOT Found!!!\n");
		printf("\n\n");
	}
	return 0;
}
