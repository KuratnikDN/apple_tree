/* 
 * File:   apple_tree.h
 * Author: VildHet <vildhet@gmail.com>
 *
 * Created on September 13, 2013, 11:41 PM
 */

#ifndef APPLE_TREE_H
#define	APPLE_TREE_H

#include "apple.h"
#include <list>

class AppleTree {
 public:
  AppleTree();
  void Grow();
  void Shake();
  
 private:
  std::list<ApplePtr> apples_; 
};

#endif	/* APPLE_TREE_H */
