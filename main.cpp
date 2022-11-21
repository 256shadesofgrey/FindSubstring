#include <iostream>
#include <string>
#include <chrono>
#include <vector>

#include <sys/select.h>

#include <TestString.hpp>
#include <StringSearch.hpp>

using namespace std;

int main(int argc, char *argv[]){
  TestString ts;
  std::vector<std::string> strings(2);

  // TODO: implement getopt interface.
  // TODO: check if inputs are correct.
  if(argc == 3){
    for(int i = 0; i < 2; ++i){
      bool paramInt = true;
      uint64_t len;

      try{
        len = stoull(argv[1+i]);
      }catch(invalid_argument){
        paramInt = false;
      }

      if(paramInt){
        strings[i] = ts.generateString(len);
      }else{
        strings[i] = std::string(argv[1+i]);
      }
    }
  }else{
    strings[0] = ts.generateString(1000);
    strings[1] = ts.generateString(10);
  }

  cout<<strings[0]<<endl<<strings[1]<<endl;

  auto start = chrono::high_resolution_clock::now();

  //std::string result = HighestNumberCombination::combine(ta->getArray(), ta->len());

  auto runtime = chrono::high_resolution_clock::now() - start;
  uint64_t runtime_us = chrono::duration_cast<std::chrono::microseconds>(runtime).count();

  cout<<double(runtime_us)<<endl;

  return 0;
}
