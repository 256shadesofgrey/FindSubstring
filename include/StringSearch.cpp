#include "StringSearch.hpp"

std::vector<size_t> StringSearch::findSubstr(std::string text, std::string match)
{
  std::vector<size_t> matchPos;
  size_t lastPos = -1;

  do{
    ++lastPos;
    lastPos = text.find(match, lastPos);
    if(lastPos != std::string::npos){
      matchPos.push_back(lastPos);
    }
  }while(lastPos != std::string::npos);

  return matchPos;
}
