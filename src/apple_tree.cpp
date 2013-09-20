/* 
 * File:   apple_tree.h
 * Author: VildHet <vildhet@gmail.com>
 *
 * Created on September 13, 2013, 11:41 PM
 */

#include "apple_tree.h"
#include <cstdlib>
#include <iostream>

#define MAX_APPLES_NUMBER 100

AppleTree::AppleTree() {
}

void AppleTree::Grow() {
  Bloom();
  for (int i = 0; i < flowers_number_; ++i) {
    apples_.push_back(std::make_shared<Apple>());
  }
}

void AppleTree::Shake() {
  uint32_t fallen = rand() % (apples_.size() + 1);
  uint32_t seeds_fallen = 0;
  for (int i = 0; i < fallen; ++i) {
    seeds_fallen += apples_.front()->GetSeedsNumber();
    apples_.pop_front();
  }
  std::cout << fallen << " apples and " << seeds_fallen
      << " seeds has fallen from tree." << std::endl;
}

void AppleTree::Bloom() {
  flowers_number_ = rand() % MAX_APPLES_NUMBER;
}

AppleTreePtr CreateAppleTree() {
  return std::make_shared<AppleTree>();
}
