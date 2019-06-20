/* The program is a C Program to Do the Bubble Sort Algorithm
   Created by : ammar shahin */

/* include the header file containing function used */
#include <stdio.h>
#include <stdlib.h>

/* Define the Macros used */
#define SIZE 13

int main(){ /* the program starts here */

/* declare variables used */
	int  arr[SIZE]={ 2 ,2 ,8 ,154, 158, 478, 588 ,798 ,1641, 1654 ,10000 ,64654 ,466546};
	int i,j=SIZE-1,temp;
	int flag = 1; // flag is to indicate whether the array is already sorted or not to save some loops
	int c1=0,c2=0; // C1 and C2 are debugging counters

/* Displaying the results before sorting */
	printf("The array Before sorting: ");
	for(i=0;i<SIZE;i++)
		printf("%d ",arr[i]);

    printf("\n\n");

/* Applying the Algorithm */
	do{
		flag = 0;
		for(i=0;i<j;i++){
			if(arr[i] > arr[i+1]){
				temp     = arr[i];
				arr[i]   = arr[i+1];
				arr[i+1] = temp;
				flag     = 1;
			}
			c1++;
		}
		c2++;
		j--;
	}while(j > 0 && flag == 1);

/* Displaying the results after sorting */
	printf("The array after sorting: ");
	for(i=0;i<SIZE;i++)
		printf("%d ",arr[i]);

/* Displaying the debugging Variables */
        printf("\n\n");
        printf("flag= %d   C1= %d    C2= %d\n",flag,c1,c2);


	return 0;
}
