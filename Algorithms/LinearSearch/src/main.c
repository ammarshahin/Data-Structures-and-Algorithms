/* The program is a C Program to Test the Linear Search Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include "Typedefs.h"
#include "LinearSearch.h"

/* Define the Macros used */
#define SIZE 13u

uint8 main(){ /* the program starts here */

/* declare variables used */
	uint32 arr[SIZE]={ 2 ,798 ,8 ,154, 158, 478, 588 , 2,1641, 1654 ,2 ,64654 ,466546};
	uint32 itertiveIndexI,key,foundIndex;

/* Get the key from the user */
	printf("Enter the element to search for: ");
	scanf("%d",&key);

/* Displaying the array */
	printf("The array: ");
	for(itertiveIndexI = FALSE; itertiveIndexI < SIZE; itertiveIndexI++)
		printf("%d ",arr[itertiveIndexI]);

    printf("\n\n");

/* calling the algorithm */
	foundIndex = LinearSearch(&arr[0],SIZE,key);

/* checking for the returned value */
	if (foundIndex != NOT_FOUND)
	{
		printf("the element %d Found at index %d ",key,foundIndex);
	}
	else
	{
		printf("the element %d Wasn't Found!!!",key);
	}
	return 0u;
}
