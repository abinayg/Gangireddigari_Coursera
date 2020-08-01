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
 * @file stats.c 
 * @brief
 This file contains the programs for manipulating and
 printing the stats of the given array
 *
  This file contains the following functions:

  Printing the stastics of an array
  Finding the maximum and minimum values of the array
  Finding the mean
  Calculating the median

 *
 * @author Abinay Gangireddigari  
 * @date 7/30/2020
 *
 */



#include <stdio.h>
#include <string.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)


void print_statistics(unsigned char mean,unsigned char median,unsigned char maximum,unsigned char minimum){
  printf("\n\nStats of the array are: \n\n");


  printf("\n\tMean is: %d",mean);

  printf("\n\tMedian is: %d",median);

  printf("\n\tMaximum is: %d",maximum);

  printf("\n\tMinimum is: %d",minimum);


}



void print_array(unsigned char *a,int size){
  for(int i=0;i<size;i++){
    printf("\t  %d",*(a+i));
  }
}

unsigned char find_median(unsigned char a[],int size){

  unsigned char median=0;
  int mid_point=0;
  int upper_point=0,lower_point=0;
  if(!(size%2)){
    upper_point=size/2;
    lower_point=upper_point-1;
    median=(a[upper_point]+a[lower_point])/2;

  }
  else{
    mid_point=(size/2);
    median=a[mid_point];
}


  return median;
}

unsigned char find_mean(unsigned char a[],int size){
  int total_sum=0;
  for(int i=0;i<size;i++){
    total_sum+=a[i];
  }
  total_sum/=size;
  return total_sum;
}
unsigned char find_maximum(unsigned char a[],int size){
  int maximum=a[0];

  for(int i=0;i<size;i++){
    if(a[i]>maximum) maximum=a[i];
  }
  return maximum;
}

unsigned char find_minimum(unsigned char a[],int size){
  int minimum=a[0];

  for(int i=0;i<size;i++){
    if(a[i]<minimum) minimum=a[i];
  }
  return minimum;
}


void sort_array(unsigned char *a, int n) 
{ 
    int i,j; 
    unsigned char key=0;
    for (i = 1; i < n; i++) { 
        key = *(a+i); 
        j = i - 1; 
  
        /* Move elements of arr[0..i-1], that are 
          greater than key, to one position ahead 
          of their current position */
        while (j >= 0 && *(a+j) < key) { 
            *(a+j + 1) = *(a+j); 
            j = j - 1; 
        } 
        *(a+j + 1) = key; 
    }
}
     

int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  // printf("%lu",strlen(test));

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  unsigned char mean,maximum,minimum,median;                         

 

      // Finding out the mean
      mean=find_mean(test,SIZE);

      



      //Maximum value in the array
      maximum=find_maximum(test,SIZE);
      

      //Minimum value in the array
      minimum=find_minimum(test,SIZE);


      sort_array(test,SIZE);

      printf("Printing sorted array \n\n");

      print_array(test,SIZE);

      //Sorting is done before calculating the median because the sorted values can be used to compute the median. //
      //Whether we arrange the array in ascending or descending order, the median value is still gonna be the same. //
      median=find_median(test,SIZE);


      //printing out the stats
      print_statistics(mean,median,maximum,minimum);

      return 0;
    
}

/* Add other Implementation File Code Here */
