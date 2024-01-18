#ifndef search_algos_h
#define search_algos_h

#include <stdio.h>

int linear_search(int *arr, size_t size, int val);
int binary_search(int *arr, size_t size, int val);
void print_array(int *arr, size_t left, size_t right);

#endif