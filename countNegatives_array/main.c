// This 'C' program counts the negative elements in the array.
/*
 Example :
        Welcome, this program counts the negative elements in your array.
        Enter the array size : 10
        Input the elements : -10, -2, 5, -20, 1, 50, 60, -50, -12, -9
        ---------------------------------------------
        Total number of negative elements: 5
        ! ! !  THE PROGRAM ENDS ! ! !
 
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10000


int countNegatives(int arr[], int); //function prototype.

int main(){ //beginning of the main function. 
    
    // variable decleration(s)
    
    int usersArray[MAX_SIZE];
    int usersSize, count;
    
    // executable statement(s).
    
    printf("Welcome this program counts the negative elements in your array : \n");
    
    printf("Enter the array size : \n");
        scanf("%d", &usersSize); //getting array size from the user.
    
    printf("Input the elemets : \n");
    for(count=0; count<usersSize; count++) // putting users elements into an array.
        scanf("%d", &usersArray[count]);
        
    printf("--------------------------------------\n");
    
    //funciton call
    
    countNegatives(usersArray, usersSize);
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    

    return 0;
    
} // end of the main function.


// function definition

int countNegatives(int arr[], int arraySize){
    
    //variable decleration(s)
    int negativeOnes = 0; //this variable will count the negative elements of the array.
    
    int count;
    
    //executable statement(s).
    
    
    for(count=0; count<arraySize; count++)
    {
        if(arr[count] < 0)
            negativeOnes++;
    }
    
        printf("Total number of negative elements : %d\n", negativeOnes); //printing the result
    
    
    return negativeOnes;
} //end of the function definition.
