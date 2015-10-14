/*************************************
Documentation:
Program: Sorting-Functions
Date: October, 2015
Authors: Ashutosh Rai and Niraj Parajuli

Contents:

*************************************/
#include <iostream>
#include <string>

using namespace std;

int main(){
  char start_prompt; 
  int temp; //variable to add number to array
  cout << "Sorting Program" << endl;
  cout << "Do you want to start an array?(y/n): ";
  cin >> start_prompt;
  start_prompt = toupper(start_prompt);
  
  while (start_prompt != 'Y' && start_prompt != 'N') {
    cout << "Please enter a valid response (y/n): " << endl;
    cin >> start_prompt;
    start_prompt = toupper(start_prompt);
  }    

  cout << start_prompt << endl;
  return 0;
}
