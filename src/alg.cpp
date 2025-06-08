// Copyright 2025 NNTU-CS
#include <cstdint>
#include "alg.h"

uint64_t collatzMaxValue(uint64_t num) {
   uint64_t max = num;
    while (num != 1) {
        num = (num % 2 == 0) ? (num / 2) : (num * 3 + 1);
        max = std::max(max, num);
    }
    return maximum;
}

unsigned int collatzLen(uint64_t num) {
  uint32_t length = 1;
    while (num != 1) {
        num = (num % 2 == 0) ? (num / 2) : (num * 3 + 1);
        ++length;
    }
  return length;
}

unsigned int seqCollatz(unsigned int *maxlen,
                        uint64_t lbound,
                        uint64_t rbound) {
  unsigned int max = 0;
  unsigned int startNum = 0;
  for (uint64_t i = lbound; i < rbound; i++) {
    if (collatzLen(i) > max) {
        max = collatzLen(i);
        startNum = i;
      }
    }
    *maxlen = max;
    return startNum;
}
