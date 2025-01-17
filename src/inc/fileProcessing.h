#ifndef FILE_PROCESSING_H
#define FILE_PROCESSING_H

#include "functionMapping.h"
#include <stdio.h>
#include <stdlib.h>

// Structure to hold file data
typedef struct
{
  int value1;
  float value2;
  int numValues;
  float values[]; // Flexible array member
} FileData;

// Function prototype for file processing
void processFile(int algorithm, FileData **data, int *fileOpenStatus);

#endif /* FILE_PROCESSING_H */
