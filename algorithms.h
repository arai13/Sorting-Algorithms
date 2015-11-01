/****************************************
 File: algorithms.h
 Authors: Ashutosh Rai and Niraj Parajuli

 Description: Header file for algorithms
***************************************/

#ifndef SORTING_ALGORITHMS
#define SORTING_ALGORITHMS

namespace sorting_program {
  class array {
  public:
    //Constructor
    array();
    array(int array_size);
    ~array();

    //Modification Member Functions
    void set_size(int array_size);
    void generate();
    void insertion_sort();
    void merge_sort(int p, int r);
    void merge(int p, int q, int r);

    //Constant Member Functions
    void display_array();

  private:
    float* array_ptr;
    int size;
  };

}

#endif
