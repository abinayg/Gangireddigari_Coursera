/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h
 * Function declarations
 *
 * All the function declarations are mentioned in this
 	header file
 *
 * @author Abinay Gangireddigari	
 * @date 7/30/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char *a,int size);
unsigned char find_median(unsigned char a[],int size);
unsigned char find_mean(unsigned char a[],int size);
unsigned char find_maximum(unsigned char a[],int size);
unsigned char find_minimum(unsigned char a[],int size);
void sort_array(unsigned char *a, int n);

/* print_array function

This function takes the address of the array and prints out
the elements in it
*/

/* find_median

Finds out the median when the sorted array(either ascending
or descending) is given as an input argument*/


/*find_mean

Calculates the mean */

/* find_maximum,find_minimum

Finds out the largest and the smallest values in the array
respectively. */

/*	sort_array

This function sorts the array in the descending order.
I have used Insertion sort technique as no guidelines were
given to use which algorithm for sorting.
*/


#endif /* __STATS_H__ */
