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
#include "algorithms.h"

using namespace std;
using namespace sorting_program;

int main(){
  char start_prompt; 
  int array_size; //size of the array

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
    cout << "What is the size of the array you want to generate?" << endl; //asking for array_size
    cin >> array_size;}

  array original(array_size);
  original.generate();
  original.display_array();
  
  return 0;
}
