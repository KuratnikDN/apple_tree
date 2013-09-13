/* 
 * File:   apple.h
 * Author: VildHet <vildhet@gmail.com>
 *
 * Created on September 13, 2013, 11:25 PM
 */

#ifndef APPLE_H
#define	APPLE_H

#include <stdint.h>
#include <memory>

class Apple {
 public:
  Apple();
  uint32_t GetSeedsNumber();

 private:
  uint32_t seeds_number_; 
};

typedef std::shared_ptr<Apple> ApplePtr;

#endif	/* APPLE_H */
