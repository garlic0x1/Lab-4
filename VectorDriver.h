/* File: VectorDriver.h
 * Athr: Owen Radcliffe
 * Date: October 15, 2018
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *
 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
  }
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

// prints only the evenly indexed items in the vector

void print_even(const vector<short> &data) {
    if (data.empty()) {
        cout << "empty";
    } else {
        cout << "<" << data.at(0);
        for (ulong i=2; i<data.size(); i += 2) {
            cout << ", " << data.at(i);
        }
        cout << ">";
    }
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
  std::vector<short>::const_iterator iter = data.begin();

  short sum = 0;
  while (iter != data.end()) {
    sum += *iter;
    iter++;
  }

  return sum;
}

// returns true if the value passed is contained in the vector passed, else false

bool is_present(const vector<short> &data, short value) {
    std::vector<short>::const_iterator iter = data.begin();

    while (iter != data.end()) {
        if (value == *iter) {
            return true;
        }
        iter++;
    } return false;
}

// appends ten random numbers to the end of the vector

void add_numbers(vector<short> &data) {
    for (int i = 0; i < 10; i++) {
        // I decided to dived by 1k so the numbers were easier to read
        data.push_back((short)rand()/1000);
    }
}

// Sort function uses STL method to sort the items between the pointers begin and end

void sort(vector<short> &data) {
    std::vector<short>::iterator begin = data.begin();
    std::vector<short>::iterator end = data.end();
    std::sort(begin, end);
}

