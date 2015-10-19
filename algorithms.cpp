/********************************************
File: algorithms.cpp
Authors: Ashutosh Rai and Niraj Parajuli

Description: algrorithms implementation file.
********************************************/

#include <iostream>
#include <new>
#include <ctime>
#include <cstdlib>
#include "algorithms.h"

using namespace std;

namespace sorting_program {
  
  array::array() {    
  }

  array::array(int array_size) {
    float* array_ptr = new float[array_size];}

  array::~array() {
    delete[] array_ptr;}
  
  void array::generate(float array_ptr[], int array_size) {
    float temp1, temp2; //random numbers to conduct
    srand(time(NULL));

    for(int n = 0; n < array_size; n++){ //generating floats and writing to list.txt
      temp1 = (rand() % 1000 + 1);
      temp2 = (rand() % 10) + 1;
      array_ptr[n] = temp1/temp2;}}
}
