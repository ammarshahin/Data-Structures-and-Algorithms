/* The program is a C Impelemntation of the Bubble Sort Algorithm
   Created by : ammar shahin 
   Date :  20/7/2019
*/

/********************** INCLUDES ***********************/
#include "Typedefs.h"


/******************* APIs Impelmention ************************/
/*  
     BubbleSort
    Desc: This function is used for Impelemntation the Bubble Sort Algorithm
    parm arr : pointer to the array to be sorted
    parm size : the size of the array to be sorted
    return void
*/
void BubbleSort(uint32* arr,uint32 size)
{
    uint8 itertiveIndexI, itertiveIndexJ = size-1;
    uint32 tempVar;
	
    /* flag is to indicate whether the array is already sorted or not to save some loops */
    uint8 alreadySortedFlag = FALSE; 

    /* Applying the Algorithm */
	do{
        alreadySortedFlag = TRUE;
		for(itertiveIndexI = FALSE; itertiveIndexI < itertiveIndexJ; itertiveIndexI++)
        {
			if(arr[itertiveIndexI] > arr[itertiveIndexI+1])
            {
				tempVar = arr[itertiveIndexI];
				arr[itertiveIndexI]   = arr[itertiveIndexI+1];
				arr[itertiveIndexI+1] = tempVar;
				alreadySortedFlag  = FALSE;
			}
            else
            {
                /* Do Nothing */
            }
		}
		itertiveIndexJ--;
	}while(itertiveIndexJ > 0 && alreadySortedFlag == FALSE);
} 