#include "cpplib.h"
#include "limits"
#include <iostream>
#include <vector>


std::vector<int> CPPLib::Flatten2DVector(const std::vector<std::vector<int>> &input) {
   // std::cout<<input<<std::endl;
    std::vector<int> res={};
    // Please fill up this function.

    if (input.empty()) {
        return {-1};
    }   
    else {
        for (int i = 0; i < input.size(); i++){
            for (int j = 0;j < input[i].size();j++) {
                //std::cout<<i<<j<<input[i][j]<<std::endl;
                res.push_back (input[i][j]);
            }
        }
    }

    return res;
}
