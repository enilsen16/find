#include <cs50.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{

  //While length of list > 0
    //Look at the middle
    //If number found, return true
    //Else if number is higher, search left
    //Else if number is lower, search right
  //Recursively repeat

}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    for (int i = 1; i < n; i++) {
      int j = i;
      while (j > 0 && values[j] < values[j-1]) {
        values[j] = values[j] + values[j-1];
        values[j-1] = values[j] - values[j-1];
        values[j] = values[j] - values[j-1];
      j = j - 1;
    }
  }
}
