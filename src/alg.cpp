// Copyright 2025 NNTU-CS
#include <cstdint>
#include "alg.h"

uint64_t collatzMaxValue(uint64_t num) {
  uint64_t maxi = 0;
  while (num != 1) {
      if (num % 2 == 0) {
        num = num / 2;
      } else {
        num = num * 3 + 1;
      }
      if (maxi < num) {
        maxi = num;
      }
    }
  return maxi;
}

unsigned int collatzLen(uint64_t num) {
  uint64_t lenght = 1;
  while (num != 1) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      num = num * 3 + 1;
    }
    lenght += 1;
  }
  return lenght;
}

unsigned int seqCollatz(unsigned int *maxlen,
                        uint64_t lbound,
                        uint64_t rbound) {
  unsigned int maximum = 0;
  unsigned int startNum = 0;
  for (uint64_t i = lbound; i < rbound; i++) {
    if (collatzLen(i) > maxi) {
        maxi = collatzLen(i);
        startNum = i;
      }
    }
    *maxlen = maxi;
    return startNum;
}
