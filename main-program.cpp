/*************************************
Documentation:
Program: Sorting-Functions
Date: October, 2015
Authors: Ashutosh Rai and Niraj Parajuli

Contents:

*************************************/
#include <iostream>
#include <string>
#include <new>

using namespace std;

int main(){
  char start_prompt; 
  int array_size; //size of the array
  double *array_ptr; //pointer for array
  //int nullptr = NULL;

  cout << "Sorting Program" << endl;
  cout << "Do you want to start an array?(y/n): ";
  cin >> start_prompt;
  start_prompt = toupper(start_prompt);
  
  while (start_prompt != 'Y' && start_prompt != 'N') { //while loop for validation of start_prompt
    cout << "Please enter a valid response (y/n): ";
    cin >> start_prompt;
    start_prompt = toupper(start_prompt);}    

  if (start_prompt == 'N') {
    cout << "Thank you for using this program. Have a great day!";
    return 0;}
  else {
    cout << "How many numbers do you want to add to the array?" << endl;
    cin >> array_size;
    array_ptr = new (nothrow) double[array_size]; 
    
    if (array_ptr == NULL) {
      cout << "Error: memory could not be allocated" << endl; }
    else {
      for (int n = 0; n < array_size; n++) {
	cout << "Enter a number to add to the array: ";
	cin >> array_ptr[n];}}

    cout << "You have entered: ";
    for (int n=0; n < array_size; n++) {
      cout << array_ptr[n] << ", ";}
    delete[] array_ptr;}
  
  return 0;
}
