
#include "uhal/uhal.hpp"

#include <iostream>
#include <string>

#include <cstdlib>
#include <ctime>

//2.5M words = 10MB
const size_t SIZE=2.5*1024*1024;

void int_performance() {
  std::vector<int> v(SIZE);
  for(size_t i=0;i!=SIZE;++i) {
    v.push_back(rand());
  }
 
}
void valmem_performance() {
  uhal::ValBlock v;
  for(size_t i=0;i!=SIZE;++i) {
    v.push_back(rand());
  }
 
}

void single_read_performance() {

}
void single_write_performance() {

}
void block_read_performance() {

}
void block_write_performance() {

}
void block_read_non_incremental_performance() {

}
void block_write_non_incremental_performance() {

}

int main(int argc, char* argv[]) {
  clock_t start = clock();
  
  valmem_performance();

  clock_t ends = clock();
  std::cout << "Time elapsed " << (double) (ends - start) / CLOCKS_PER_SEC << std::endl;

}
