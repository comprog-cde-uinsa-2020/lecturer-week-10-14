#include <iostream>
#include <math.h>
#include "lib/function.h"

using namespace std;

// this function is recreate for tipe primitive of float is point of  4
void change_value(float array[], int arsize) {

  // for loop (looping) is point of 3
  for (int index = 0; index < arsize; index++) {

    // if else (branching) is point of 2
    if (fmod(array[index], 2) == 0) {
        array[index] = array[index] * 2;
    } else {
       cout<<"no number array of even";
       cout<<"\n";
    }
  }

  printf("the result are>>");
  print_array(array, arsize);
}

// this function is recreate for tipe primitive of float is point of 4
void print_array(float array[], int arsize) {

  // for loop (looping) is point of 3
  for (int index = 0; index < arsize; index++) {
    printf("index[%i]: %3f ", index, array[index]);
    printf("\n");
  }

}


int main(void) {

 // variable with integer tipe data primitive is point of 1
 float nuray[] = {3.1, 4.2, 5.3, 6.4, 7.5, 8.6, 9.7, 10.8, 11.9, 12.10, 13.11};

 // variable is point of 1
 int arsize = sizeof(nuray)/sizeof(nuray[0]);

 cout<<"before the result"<<endl;

 // calling function is point of 5, it is procedurall programming
 print_array(nuray, arsize);

 cout<<"after the result"<<endl;

 // calling function is point of 5, it is procedurall programming
 change_value(nuray, arsize);

 return 0;

}
