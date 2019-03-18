/*
 *        File: arrays.cc
 *      Author: Nasseef Abukamail
 *        Date: March 18, 2019
 * Description: Array example 
 *               **Added function to count the total of even numbers in the array
 *               **Added function that adds the numbers in the array together
 */  

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

void printArray(const int numbers[], int size);
int countEven(const int numbers[], int size);    
int arrayTotal(const int numbers[], int size);

int main(int argc, char const *argv[]) {

    int numbers[10] = {3, 5, 19, 6, 7, 6, 55, 12, 18, 43};
    int size = 10;

    int evenNum = 0;                        //sets the evenNum variable to 0
    int totalNum = 0;                       //sets the totalNum variable to 0

    printArray(numbers, size);
    evenNum = countEven(numbers, size);     //calls the countEven function and sets its return value to variable evenNum
    totalNum = arrayTotal(numbers, size);   //calls the arrayTotal function and sets its return value to variable totalNum

    cout << "Total even numbers in array: " << evenNum << endl;  //displays the total amount of even numbers 
    cout << "Total of array numbers added: "<< totalNum << endl; //displays the total of array numbers added together

    return 0;
}// main

void printArray(const int numbers[], int size) {
    for(int i = 0; i < size; i++)     //start count at 0, repeat loop aslong as count is less than size, add 1 to count every iteration
    {
        cout << numbers[i] << endl;
    }
}

int countEven(const int numbers[], int size){
    int evenTotal = 0;  
        for(int i = 0; i < size; i++) //same loop used for printArray function
    {
        if(numbers[i] % 2 == 0){   //when the remainder of the number in the array divided by two equals 0
            evenTotal ++;          //add 1 to the total count 
        }
    }
    return evenTotal;                 //returns the total amount of even numbers
}

int arrayTotal(const int numbers[], int size){
    int arrTotal = 0;                 //initializes local variables to 0
    int num = 0;
    int w = 0;
     for(int i = 0; i < size; i++)    //same for loop used for printArray function
    {
        num = numbers[i];       //to avoid changing the array if "const int" isn't present, numbers[i] is set to variable num
        arrTotal = num + w;     //adds the number in the array to temporary variable "w"
        w = arrTotal;           //sets the array's total to "w"
    }
    return arrTotal;                  //returns the total
}
/*
 * Extra Credit:
 *     Add the following two functions:
 *     1. A function called countEven that counts and returns the number
 *        of evan values in the array numbers.
 *     2. A function to find and return the total of all the values in the array numbers.
 *
 *     Test your functions by calling them in the main function. These functions should work for
 *     any array size.
 *
 * To submit the extra credit, you must create a public repository on GitHub and tag me (@nasseef) when
 * you are done.  This extra credit is due at 11:59 PM Monday 3/18/2019.
 *
 */