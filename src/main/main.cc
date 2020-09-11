#include <iostream>
#include "src/lib/cpplib.h"

int main() {

  std::vector<std::vector<int>> vect{ { 1, 2, 3 }, {4, 5, 6 }, { 7, 8, 9 } }; 
  //std::vector<std::vector<int>> vect; 
  
  //std::vector<int> return= s.Flatten2DVector(vect);
  for (auto n:s.Flatten2DVector(vect)){
    std::cout<<n<<std::endl;
  }

    return 0;

}