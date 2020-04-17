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
 * @file  Stats.h 
 * @brief This is a header file for Stats.c and it contains decelarations of 
 *	  functions used in Stats.c
 *	  
 * This file include decelarations of following functions:
 *  print_statistics()
 *  print_array()
 *  find_median()
 *  find_maximum()
 *  find_minimum()
 *  sort_array()
 *
 * @author Syed Hammad Hussain
 * @date 14 April 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/******************************************************************************
 * print_statistics prints statistics of input array.
 * 
 * @brief  This function prints the statistics of an array including minimum
 *         maximum, mean and median of the set..
 * 
 * @param  int * ptr: Pointer to array 
 * @param  int count: Number of items in data set
 * 
 * @return  None.
 * 
 *****************************************************************************/
void print_statistics(unsigned char * ptr, int count);

/******************************************************************************
 * print_array prints elements of input array.
 * 
 * @brief  Given an array of data and a length, prints the array to the screen.
 * 
 * @param  unsigned char * ptr: Pointer to a data set.
 * @param  int count: Number of items in data set
 *  
 * @return  None. 
 *     
 *****************************************************************************/
void print_array(unsigned char * ptr, int count);


/**
 * find_median calculates median of input array.
 * 
 * @brief  Given an array of data and a length, calaculates the median and 
 * 	   returns.
 * 
 * @param  unsigned char * ptr: Pointer to a data set.
 * @param  int count: Number of items in data set.
 *  
 * @return  float Calculated median. 
 *     
 */
float find_median(unsigned char * ptr, int count);


/**
 * find_mean calculates mean of input array.
 * 
 * @brief  Given an array of data and a length, calaculates the mean and  
 * 	   returns.
 * 
 * @param  unsigned char * ptr Pointer to a data set.
 * @param  int count: Number of items in data set.
 *  
 * @return  float Calculated mean. 
 *  
 */
float find_mean(unsigned char * ptr, int count);


/**
 * find_maximum finds maximum element of input array.
 * 
 * @brief  Given an array of data and a length, find maximum element and  
 * 	   returns.
 * 
 * 
 * @param  unsigned char * ptr: Pointer to a data set.
 * @param  int count Number of items in data set.
 *  
 * @return  unsigned char The calculated maximum element. 
 *     
 */
unsigned char find_maximum(unsigned char * ptr, int count);

/**
 * find_minimum finds minimum element of input array.
 * 
 * @brief  Given an array of data and a length, finds minimum element and 
 * 	   returns.
 * 
 * @param  unsigned char * ptr: Pointer to a data set.
 * @param  int count: Number of items in data set.
 *  
 * @return  unsigned char The calculated minimum element. 
 *     
 */
unsigned char find_minimum(unsigned char * ptr, int count);



/**
 * sort_array sort input array in decending order.
 * 
 * @brief  Given an array of data and a length, sorts the array from 
 *	   largest to smallest(The zeroth element will have largest value, and 	
 *	   the last element(n-1) will be smallest value.
 * 
 * @param  unsigned char * ptr Pointer to a data set.
 * @param  int count Number of items in data set.
 *  
 * @return  none
 *     
 */
void sort_array(unsigned char * ptr, int count);


#endif /* __STATS_H__ */
