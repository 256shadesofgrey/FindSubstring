#ifndef STRING_SEARCH_HPP
#define STRING_SEARCH_HPP

#include <vector>
#include <cstdint>
#include <string>

class StringSearch{
public:
  static std::vector<size_t> findSubstr(std::string text, std::string match);
};

#endif // STRING_SEARCH_HPP
