#include "gtest/gtest.h"
#include "lib.h"

 ComplexNumber a{-2,1},b{1,1},c;

TEST(oper,sum){
  c=a+b;
  EXPECT_EQ(-1, c.x);
  EXPECT_EQ(2, c.y);
}

TEST(oper,sub){
  c=a-b;
  EXPECT_EQ(-3, c.x);
  EXPECT_EQ(0, c.y);
}

TEST(oper,mul){
  c=a*b;
  EXPECT_EQ(-3, c.x);
  EXPECT_EQ(-1, c.y);
}

TEST(oper,div){
  c=a/b;
  EXPECT_EQ(-0.5, c.x);
  EXPECT_EQ(1.5, c.y);
}

TEST(oper,equality){
  EXPECT_EQ(false, a==b);
  EXPECT_EQ(true, a!=b);
  ComplexNumber a{-2,1},b{-2,1};
  EXPECT_EQ(true, a==b);
  EXPECT_EQ(false, a!=b);

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}