// Owen Radcliffe, October 16, 2018
// main file

#include "VectorDriver.h"

int main() {
  cout << "\n  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::..\n" << endl;

  add_numbers(sample_vector);
  cout << "new vector: ";
  print(sample_vector);
  cout << endl << "evens vector: ";
  print_even(sample_vector);
    cout << endl << is_present(sample_vector, 4);
  cout << endl << is_present(sample_vector, 5);
  sort(sample_vector);
  cout << endl;
  print(sample_vector);

  return 0;
}
