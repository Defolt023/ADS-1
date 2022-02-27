// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
bool checkPrime(uint64_t value) {
  uint64_t ch = 2;
  for (ch = 2; ch < value; ch++ ) {
  if ((value % ch) == 0 ) {
  return false;
  }
  }
  return true;
}     
uint64_t nPrime(uint64_t n) {
  int k = 1;
  int num = 0;
  while ( num != n ) {
  k++;
  if (checkPrime(k)) {
  num++;
  }
  }
          
}     
uint64_t nextPrime(uint64_t value) {
  value++;
  while ((checkPrime(value)) != true) {
  value++;
  }
  return value; 
}     
uint64_t sumPrime(uint64_t hbound) {
  int i = 2;
  int summ = 0;
  for (i = 2; i < hbound; i++
}     
