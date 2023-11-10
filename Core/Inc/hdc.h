/*
 * hdc.h
 *
 *  Created on: Nov 7, 2023
 *      Author: cylee
 */

#ifndef INC_HDC_H_
#define INC_HDC_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "main.h"

#define IMAGE_H 28
#define IMAGE_W 28
#define N_CLASS 10
#define N_DIM 10000
#define LOAD 1
#define STORE 0

void bind(uint8_t* x1, uint8_t* x2, uint8_t* result);
void bundle(uint8_t** xs, uint8_t* result, int length);
void permute(uint8_t* x);
double distance(uint8_t* x1, uint8_t* x2);
uint8_t* encode(int image[IMAGE_H][IMAGE_W]);
int predict(int image[IMAGE_H][IMAGE_W]);

/*
uint8_t** allocate_table(int x, int y);
void free_table(uint8_t** table, int rows);
uint8_t** load_table(char* name, int row, int column);
void store_table(uint8_t** table, char* name, int row, int column);
*/

#endif /* INC_HDC_H_ */
