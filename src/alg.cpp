// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
  int w = 0;
    for (int i = (value / 2); i > 1; i--) {
      if (value % i == 0) {
      ++w;
      break;
      }
    }
  if (w == 0) {
  return true;
  }
  else {
  return false;
  }
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  int w = 0, v = 2, i = 2;
  while (w != n) {
    bool f = false;
    while ((!f) && (i <= v / 2)) {
      if (v % i == 0) 
          f = true;
      else
          ++i;
    }
    if ((!f) && (i >= v / 2)) {
       w += 1;
       if (w == n) 
            return v;
    }
    v += 1;
    i = 2;
  } 
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
   int min = 0;
   for (int i = value * 2 - 1; i > value; i--) {
      bool f = true;
      for (int j = 2; j <= i / 2; j++) {
          if (i % j == 0) {
             f = false;
             break;
          }
       }
       if (f) {
           min = i;
       }
  }
  return min;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  int sum=0;
  for (int i = 2; i < hbound; i++) {
      bool f = true;
      for (int j = 2; j < (i / 2) + 1; j++) {
          if (i % j == 0) {
             f=false;
             break; 
          }
      }
      if (f) {
          sum += i;
      }
  }
  return sum;
}
