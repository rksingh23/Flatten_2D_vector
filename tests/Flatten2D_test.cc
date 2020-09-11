#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Student, ReturnIntro) {
  CPPLib object1;
  std::vector<std::vector<int>> vect{{1,2,3},{4,5,6},{7,8,9}};
  std::vector<int> vect1{1,2,3,4,5,6,7,8,9};
  std::vector<int> cmp;
  for (auto n:object1.Flatten2DVector(vect)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}
  
TEST(Q6_Student, HandlesNegativeItemArray) {
  CPPLib object1;
  std::vector<std::vector<int>> vect{{-1,-2,-3},{-4,5,6},{7,8,9}};
  std::vector<int> vect1{-1,-2,-3,-4,5,6,7,8,9};
  std::vector<int> cmp;
  for (auto n:object1.Flatten2DVector(vect)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}

TEST(Q6_Student, HandlesSingleItemArray) {
  CPPLib object1;
  std::vector<std::vector<int>> vect{{1},{2},{3},{4},{5},{6},{7}};
  std::vector<int> vect1 {1,2,3,4,5,6,7};
  std::vector<int> cmp;
  for (auto n:object1.Flatten2DVector(vect)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}



TEST(Q6_Student, HanlesSingleOne) {
  CPPLib object1;
  std::vector<std::vector<int>> vect{{1}};
  std::vector<int> vect1{1};
  std::vector<int> cmp;
  for (auto n:object1.Flatten2DVector(vect)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}

TEST(Q6_Student, HandlesEmptyVector) {
  CPPLib object1;
  std::vector<std::vector<int>> vect;
  std::vector<int> vect1{-1};
  std::vector<int> cmp;
  for (auto n:object1.Flatten2DVector(vect)){
    cmp.push_back (n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}


