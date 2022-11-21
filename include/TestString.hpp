#ifndef TEST_STRING_HPP
#define TEST_STRING_HPP

#include <cstdint>
#include <random>

class TestString{
private:
  std::random_device rd_;
  std::mt19937 rng_;

  // Chars used to generate the random strings.
  const std::string chars = "abcdefghijklmnopqrstuvwxyz   ";

public:
  TestString();
  std::string generateString(uint64_t len);
};

#endif // TEST_STRING_HPP
