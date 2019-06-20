/* The program is a C Program to Do the Linear Search Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <stdlib.h>

/* Define the Macros used */
#define SIZE 13

int main(){ /* the program starts here */

/* declare variables used */
	int  arr[SIZE]={ 2 ,798 ,8 ,154, 158, 478, 588 , 2,1641, 1654 ,2 ,64654 ,466546};
	int i,key,c=0;

/* Get the key from the user */
	printf("Enter the element to search for: ");
	scanf("%d",&key);


/* Displaying the array */
	printf("The array: ");
	for(i=0;i<SIZE;i++)
		printf("%d ",arr[i]);

    printf("\n\n");

/* Applying the Algorithm */
		for(i=0;i<SIZE;i++)
			if(key == arr[i]){
				printf("Found at arr[%d] = %d\n",i,arr[i]);
				c++;
			}

	printf("Found %d times",c);

	return 0;
}
