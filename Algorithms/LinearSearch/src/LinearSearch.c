/* The program is a C Impelemntation of the Linear Search Algorithm
   Created by : ammar shahin 
   Date :  20/7/2019
*/

/********************** INCLUDES *********************************************/
#include "Typedefs.h"
#include "LinearSearch.h"

/******************* APIs Impelmention **************************************/
/*  
     LinearSearch 
    Desc: This function is used for Impelemntation the Linear Search Algorithm.
    parm arr : pointer to the array to be Searched.
    parm size : the size of the array.
    return void
*/
uint32 LinearSearch(uint32* arr,uint32 size,uint32 key)
{
    uint32 itertiveIndexI,indexFound = NOT_FOUND;
	
    if(arr != NULL)
    {
        /* Applying the Algorithm */
        for(itertiveIndexI = FALSE; itertiveIndexI < size; itertiveIndexI++)
        {
            if( key == arr[itertiveIndexI] )
            {
                indexFound = itertiveIndexI;
                break;
            }
        }
    }
    else
    {
        /* ERROR HANDLING */
    }
    return indexFound;
} 