#include <cs50.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
        int min = 0;
        int max = n - 1;
        while ( max > min ) {
                int mid = (max + min) / 2;
                if (values[mid] == value)
                        return true;
                if (values[mid] > value)
                        max = mid - 1;
                if (values[mid] < value)
                        min = mid + 1;
        }
        return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
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
