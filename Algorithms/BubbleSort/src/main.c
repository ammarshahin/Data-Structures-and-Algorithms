/* main.c
   Created by : ammar shahin 
   Date :  20/7/2019*/


/***************************includes***************************/
#include <stdio.h>
#include "Typedefs.h"
#include "BubbleSort.h"

/* Define the Macros used */
#define SIZE 13u

uint8 main()  /* the program starts here */
{
	uint8 itertiveIndexI;  

/* declare variables used */
	uint32 arr[SIZE]={ 2 ,2 ,8 ,154, 158, 478, 588 ,798 ,1641, 1654 ,10000 ,64654 ,466546};
	
/* Displaying the results before sorting */
	printf("The array Before sorting: ");
	for(itertiveIndexI = FALSE; itertiveIndexI<SIZE; itertiveIndexI++)
		printf("%d ",arr[itertiveIndexI]);

    printf("\n\n");

	BubbleSort(&arr[0],SIZE);

/* Displaying the results after sorting */
	printf("The array after sorting: ");
	for(itertiveIndexI = FALSE; itertiveIndexI < SIZE; itertiveIndexI++)
		printf("%d ",arr[itertiveIndexI]);

	return 0u;
}
