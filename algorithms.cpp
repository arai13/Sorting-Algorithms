/********************************************
File: algorithms.cpp
Authors: Ashutosh Rai and Niraj Parajuli

Description: algrorithms implementation file.
********************************************/

#include <iostream>
#include <new>
#include <ctime>
#include <cstdlib>
#include <string>
#include "algorithms.h"

using namespace std;

namespace sorting_program {
  
  array::array() {    
  }

  array::array(int array_size) {
    array_ptr = new float[array_size];
    size = array_size; 
  }

  array::~array() {
    //delete[] array_ptr;
}
  
  void array::set_size(int array_size) {
    size = array_size;}
  
  void array::generate() {
    float temp1, temp2; //random numbers to conduct
    srand(time(NULL));
    if (array_ptr == NULL) {
      cout << "Error: memory could not be allocated" << endl;
      return;}
    else{
      for(int n = 1; n <= size; n++){ 
	temp1 = (rand() % 1000 + 1);
	temp2 = (rand() % 10) + 1;
	array_ptr[n] = temp1/temp2;}}} //division to generate floats

  void array::display_array() {
    cout << "[";
    for (int i = 1; i <= size; i++) {
      if (i == (size)) 
	cout << array_ptr[i];
      else
	cout << array_ptr[i] << ", ";}
    
    cout << "]" << endl;}

  void array::insertion_sort() {
    float key;
    int i;
    for (int j = 2; j <= size; j++) {
      key = array_ptr[j];
      //Insert array_ptr[j] into the sorted sequence array_ptr[1...j-1]
      i = j - 1;
      while ((i > 0) && (array_ptr[i] > key)) {
	array_ptr[i + 1] = array_ptr[i];
	i--;
      }
      array_ptr[i+1] = key;
    }
    return;
  }
}
