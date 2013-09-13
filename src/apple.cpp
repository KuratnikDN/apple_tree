/* 
 * File:   apple.cpp
 * Author: VildHet <vildhet@gmail.com>
 *
 * Created on September 13, 2013, 11:25 PM
 */

#include "apple.h"
#include <stdlib.h>

#define MAX_SEEDS_NUMBER 20

Apple::Apple() {
  seeds_number_ = rand() % MAX_SEEDS_NUMBER;
}

uint32_t Apple::GetSeedsNumber() {
  return seeds_number_;
}
