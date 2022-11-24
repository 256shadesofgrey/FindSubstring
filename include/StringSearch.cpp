#include "StringSearch.hpp"

std::vector<size_t> StringSearch::findSubstr(std::string text, std::string match)
{
  // We don't know how many matches there will be, so using a vector for
  // dynamic memory allocation.
  std::vector<size_t> matchPos;
  // Start at -1 because the first thing we do in the loop will be
  // incrementing this, but we need to start at 0.
  size_t lastPos = -1;

  do{
    // Increment lastPos by 1 to search the rest of the text for another match.
    ++lastPos;
    // Find the first match in the rest of the text.
    lastPos = text.find(match, lastPos);
    // If there is a match, add it to the matchPos vector.
    if(lastPos != std::string::npos){
      matchPos.push_back(lastPos);
    }
  // If there is no match, exit the loop.
  }while(lastPos != std::string::npos);

  // Return all the matches found.
  return matchPos;
}
