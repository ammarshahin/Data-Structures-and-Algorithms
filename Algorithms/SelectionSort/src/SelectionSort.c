/* The program is a C Impelemntation of the Selection Sort Algorithm
   Created by : ammar shahin 
   Date :  20/7/2019
*/

/********************** INCLUDES ***********************/
#include "Typedefs.h"


/******************* APIs Impelmention ************************/
/*  
     Selection Sort
    Desc: This function is used for Impelemntation the Bubble Sort Algorithm
    parm arr : pointer to the array to be sorted
    parm size : the size of the array to be sorted
    return void
*/
void SelectionSort(uint32* arr,uint32 size)
{
   uint8 itertiveIndexI, itertiveIndexJ = size-1;
	uint32 tempVar,maxValue,maxIndex;

    /* flag is to indicate whether the array is already sorted or not to save some loops */
    uint8 alreadySortedFlag = FALSE; 

   
/* Applying the Algorithm */
	do{
/* set the maximum value to the first element */
		maxValue = arr[0]; 
		maxIndex = 0;

		alreadySortedFlag = TRUE;

	/* loop through the elements to cheek if there was a bigger value than max */
		for(itertiveIndexI = FALSE; itertiveIndexI <= itertiveIndexJ; itertiveIndexI++)
		{ 
			if(arr[itertiveIndexI] > maxValue)
			{
				maxValue = arr[itertiveIndexI]; // change the the max value to the new max
				maxIndex = itertiveIndexI;      // change the the max index to the new max index
				alreadySortedFlag = FALSE;
			}
			else
			{
				/* Do Nothing */
			}
		}

/* Swap the maximum element with the top element in this iteration */
		tempVar = arr[maxIndex];
		arr[maxIndex] = arr[itertiveIndexJ];
		arr[itertiveIndexJ] = tempVar;

		itertiveIndexJ--; // update the j

	}while( (itertiveIndexJ > 0) && (alreadySortedFlag = FALSE) );
} 