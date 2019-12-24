/* The program is a C Impelemntation of the Linear Search Algorithm
   Created by : ammar shahin 
   Date :  20/7/2019
*/
#ifndef __LINEAR_SEARCK_H__
#define __LINEAR_SEARCK_H__

/********************** INCLUDES *********************************************/
#include "Typedefs.h"


#define NOT_FOUND 100000
/******************* APIs Prototypes ************************/
/*  
     LinearSearch 
    Desc: This function is used for Impelemntation the Linear Search Algorithm.
    parm arr : pointer to the array to be Searched.
    parm size : the size of the array.
    return void
*/
uint32 LinearSearch(uint32* arr,uint32 size,uint32 key);

#endif /* __LINEAR_SEARCK_H__ */
