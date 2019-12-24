/* The program is a C Program to Do the Selection Sort Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include "Typedefs.h"
#include "SelectionSort.h"

/* Define the Macros used */
#define SIZE 13u

uint8 main(){ /* the program starts here */

/* The arrays(Only Use one) */
//  uint32  arr[SIZE]={ 24654 ,2211 ,283 ,1154, 18, 18, 58 ,78 ,283, 156654 ,19500 ,645656654 ,4666546};
//  uint32  arr[SIZE]={18  ,18 ,58, 78 ,283, 283 ,1154 ,2211 ,19500, 24654 ,156654 ,4666546,645656654};
    uint32  arr[SIZE]={  645656654,18 ,24654, 79 ,283, 283 ,1154 ,59 ,19500, 24655 ,156654 ,4666546,18};

/* declare variables used */
	uint8 itertiveIndexI;

/* Displaying the results before sorting */
	printf("The array before sorting: ");
	for(itertiveIndexI = FALSE; itertiveIndexI < SIZE; itertiveIndexI++)
		printf("%d ",arr[itertiveIndexI]);

    printf("\n\n");

	SelectionSort(&arr[0],SIZE);

/* Displaying the results after sorting */
	printf("The array after sorting: ");
	for(itertiveIndexI = FALSE; itertiveIndexI < SIZE; itertiveIndexI++)
		printf("%d ",arr[itertiveIndexI]);

	return 0u;
}
