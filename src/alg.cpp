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
  int pr = 0, ct = 0;
  while (true) {
  pr++;
  if (checkPrime(pr))
  ct++;
  if (ct == n)
  return pr;
  }
  return ct;
}
uint64_t nextPrime(uint64_t value) {
  value++;
  while ((checkPrime(value)) != true) {
  value++;
  }
  return value;
}
uint64_t sumPrime(uint64_t hbound) {
  int j = 2;
  int summ = 0;
  for (j = 2; j < hbound; j++) {
  if (checkPrime(j)) {
  summ += j;
  }
  }
  return summ;
}
