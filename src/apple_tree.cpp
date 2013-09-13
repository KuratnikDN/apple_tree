/* 
 * File:   apple_tree.h
 * Author: VildHet <vildhet@gmail.com>
 *
 * Created on September 13, 2013, 11:41 PM
 */

#include "apple_tree.h"
#include <stdlib.h>

#define MAX_APPLES_NUMBER 100

AppleTree::AppleTree() {
}

void AppleTree::Grow() {
  uint32_t size = rand() % MAX_APPLES_NUMBER;
  for (int i = 0; i < size; ++i) {
    apples_.push_back(std::make_shared<Apple>());
  }
}
