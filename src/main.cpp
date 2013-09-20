/* 
 * File:   main.cpp
 * Author: VildHet <vildhet@gmail.com>
 *
 * Created on September 21, 2013, 12:19 AM
 */

#include "apple.h"
#include "apple_tree.h"

int main(int argc, char** argv) {

  AppleTreePtr apple_tree = CreateAppleTree();
  apple_tree->Grow();
  apple_tree->Shake();
  
  return 0;
}

