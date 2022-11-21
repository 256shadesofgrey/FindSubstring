#include <cstdlib>
#include <string>
#include "TestString.hpp"

TestString::TestString()
{
  rng_.seed(rd_());
}

std::string TestString::generateString(uint64_t len)
{
  std::string str("");

  for(uint64_t i = 0; i < len; ++i){
    std::uniform_int_distribution<char> charDist(0, chars.length()-1);
    str += chars[charDist(rng_)];
  }

  return str;
}
