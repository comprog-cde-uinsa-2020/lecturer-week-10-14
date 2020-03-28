#include <stdio.h>
#include "lib/function.h"

// function is point of 4
void print_array_int(int array[], int arsize) {

  // for loop (looping) is point of 3
  for (int index = 0; index < arsize; index++) {
    printf("index[%i]: %d ", index, array[index]);
    printf("\n");
  }

}

// function is point of 4
void change_value_int(int array[], int arsize) {

  // for loop (looping) is point of 3
  for (int index = 0; index < arsize; index++) {

    // if else (branching) is point of 2
    if (array[index] % 2 == 0) {
        array[index] = array[index] * 2;
    } else {
       printf("no number array of even \n");
    }
  }

  printf("the result are>>");
  print_array_int(array, arsize);
}

int main(void) {

 // variable with integer tipe data primitive is point of 1
 int nuray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

 // variable is point of 1
 int arsize = sizeof(nuray)/sizeof(nuray[0]);

 printf("before the result \n");

 // calling function is point of 5, it is procedurall programming
 print_array_int(nuray, arsize);

 printf("after the result \n");

 // calling function is point of 5, it is procedurall programming
 change_value_int(nuray, arsize);


 return 0;

}
