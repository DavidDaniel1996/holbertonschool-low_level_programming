#include <stdio.h>
int main()
{
  // variable
  int numbers[] = {98, 402, -198, 298, -1024, 12};

  // calculate size in bytes
  int arraySize = sizeof(numbers);
  int intSize = sizeof(numbers[0]);

  // length
  int length = arraySize / intSize;

  printf("ArraySize = %d bytes.\n", arraySize);
  printf("IntSize = %d bytes.\n", intSize);
  printf("Length of array = %d \n", length);
  return 0;
}
