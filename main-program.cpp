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
  
  cout << endl;
  cout << "                    *****************************************************************************" << endl;
  cout << "                    ***                                                                       ***" << endl;
  cout << "                    ***                            Sorting Program                            ***" << endl;
  cout << "                    ***                                                                       ***" << endl;
  cout << "                    *****************************************************************************" << endl;
  
  cout << "Program Description: \n";
  cout << "This program uses various sorting algorithms to sort a randomly generated array and analyzes the time taken by each" << endl;
  cout << "It allows you to choose what algorithms you wish to compare and then measures the time taken by each to sort the array generate by you." << endl << endl;
  cout << "Do you want to generate an array?(y/n): ";
  cin >> start_prompt;
  start_prompt = toupper(start_prompt);
  
  while (start_prompt != 'Y' && start_prompt != 'N') { //while loop for validation of start_prompt
    cout << "Please enter a valid response (y/n): ";
    cin >> start_prompt;
    start_prompt = toupper(start_prompt);}    
  
  if (start_prompt == 'N') {
    cout << "Thank you for using this program. Have a great day!\n";
    return 0;}

  cout << "What is the size of the array you want to generate?(Note: A bigger size will show a better difference in the comparison): "; //asking for array_size
  cin >> array_size;

  array original(array_size); //declaring the array object for the original unsorted array
  original.generate(); //populating the unsorted array
  const int current_options = 2; //number of algorithms we have
  int* selected_options = new int[current_options]; //array to keep track of desired comparions
  int option; //variable to choose the algorithm
  int index = 0;
  
  cout << endl << "What algorithms do you want to compare? Choose corresponding number." << endl;
  cout << "1) Insertion sort" << endl;
  cout << "2) Merge sort" << endl;
  cout << "3) Bubble sort" << endl;
  cout << "4) Quick sort" << endl;

  cout << endl;
  
  do {  
    cout << "Enter the corresponding number of the algorithm you want to add to the comparison or 0 to start comparison and press return: ";
    cin >> option;

    selected_options[index] = option;
    index++;
  } while (option != 0);
  
  cout << "\nSorting Algorithm\t" << "Input Size\t" << "Time Cost (in secs)\n";
  cout << "***********************************************************\n";

  clock_t t;  //setting up time to calculate time cost
  float elapsed_time;

  for (int i = 0; i <= index; i++) {
    switch(selected_options[i]) {
    case 1: {
      array ins_array = original;

      t = clock();
      ins_array.insertion_sort();
      t = clock() - t;
      elapsed_time = ((float)t)/CLOCKS_PER_SEC;
      
      cout << "Insertion Sort\t\t" << array_size << "\t\t" << elapsed_time << endl;
      break;}
      
    case 2: {
      array merge_array = original;
      int start_merge = 1;
      int end_merge = array_size;

      t = clock();
      merge_array.merge_sort(start_merge, end_merge);
      t = clock() - t;
      elapsed_time = ((float)t)/CLOCKS_PER_SEC;
     
      cout << "Merge Sort\t\t" << array_size << "\t\t" << elapsed_time << endl;
      break;}

    case 3: {
      array bub_array = original;

      t = clock();
      bub_array.bubble_sort();
      t = clock() - t;
      elapsed_time = ((float)t)/CLOCKS_PER_SEC;
     
      cout << "Bubble Sort\t\t" << array_size << "\t\t" << elapsed_time << endl;
      break;}

    case 4: {
      array quick_array = original;
      int start_quick = 1;
      int end_quick = array_size;

      t = clock();
      quick_array.merge_sort(start_quick, end_quick);
      t = clock() - t;
      elapsed_time = ((float)t)/CLOCKS_PER_SEC;
     
      cout << "Quick Sort\t\t" << array_size << "\t\t" << elapsed_time << endl;
      break;}
      
    }
  }
       
  cout << "___________________________________________________________\n\n";

  
  cout << "Thanks for using our program. Please feel free to add to this github repo and also to get in touch with us. Have a great day!\n";
  cout << "Ashutosh Rai and Niraj Parajuli\n\n";

  return 0;
}
