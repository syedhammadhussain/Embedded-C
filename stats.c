/******************************************************************************
 * Copyright (C) 2020 by Syed Hammad Hussain
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software.
 *
 *****************************************************************************/
/**
 * @file Stats.c
 * @brief This program calculates 
 *
 * <Add Extended Description Here>
 *
 * @author Syed Hammad Hussain
 * @date 14 April 2020
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
	
  /* Statistics and Printing Functions Go Here */
  sort_array(test, SIZE);	
  print_array(test, SIZE);
  print_statistics(test, SIZE);
}

/* Add other Implementation File Code Here */

/*******************************************************************/
void print_statistics(unsigned char * ptr, int count) {
  float mean, median;
  unsigned char max,min;


  mean = find_mean(ptr, count);
  printf("mean is %.2f\n",mean);
  median = find_median(ptr, count);
  printf("median is %.2f\n",median);	
  max = find_maximum(ptr, count);
  printf("maximum is %d\n",max);
  min = find_minimum(ptr, count);
  printf("minimum is %d\n",min);
}
/******************************************************************/


void print_array(unsigned char *ptr, int count) {
  for(unsigned char i = 0; i < count; ++i) {
      	printf("%d",*ptr);
	if((int)*ptr < 10) {
	  printf("   ");	
	} else if((int)*ptr < 100) {
	  printf("  ");	
	} else if((int)*ptr < 1000) {
	  printf(" ");	
	}
	if((i+1) % 8 == 0) {
	  printf("\n");	
	}
	ptr++;
  }
}


float find_median(unsigned char * ptr, int count) {
  unsigned int median, med1, med2; 
  sort_array(ptr, count);
  
  if((count+1) % 2 == 0) {
    median = (count+1) / 2;
    return (float) ptr[median];
} else {
      med1 = (count / 2);
      med2 = ((count/ 2) + 1);
	return (float)((ptr[med1] + ptr[med2]) / 2.0);
  }
}


float find_mean(unsigned char * ptr, int count) {
  unsigned long int sum = 0;
  for(unsigned char i = 0; i < count; ++i) {
	sum += (int)*ptr;
	ptr++;
  }
  return ((float)sum/(float)count);
}


unsigned char find_maximum(unsigned char * ptr, int count) {
  unsigned char val = 0;  

  for(int i = 0; i < count; ++i) {
    	
    if(ptr[i] > val) {
	  val = ptr[i];	
    }  
    
  }
  return val;
}


unsigned char find_minimum(unsigned char * ptr, int count) {
  unsigned char val = ptr[0];  

  for(int i = 0; i < count; ++i) {
    	
    if(ptr[i] < val) {
	  val = ptr[i];	
    }  
    
  }
  return val;    		
}


void sort_array(unsigned char * ptr, int count) {
  
  int val1,val2;
  val1 = 0;
  for(int i = 0; i < count; ++i) {
    for(int j = i+1; j < count; ++j) {
    	if(ptr[i] < ptr[j]) {
	  
	  val2 = ptr[i];
	  ptr[i] = ptr[j];	
	  ptr[j] = val2;
	}  
    
    }
      		
  }

}
