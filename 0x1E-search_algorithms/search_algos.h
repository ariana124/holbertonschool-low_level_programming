#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int linear_search(int *array, size_t size, int value);
int binarySearch(int *arr, int left, int right, int value);
void print_array(int *arr, int left, int right);
int binary_search(int *array, size_t size, int value);


#endif /* SEARCH_ALGOS_H */
