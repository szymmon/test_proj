#include <iostream>
#include <numeric>
#include <vector>

int b = 5;

// multiple screens?
// auto pragma once
// tooltips bez type:
// cała funkcja w tooltips
// goto file
// automatyczne wypełnianie CmakeLists przy tworzeniu klasy?
// rename CMakeList sync
// extra windows
// auto - tooltip
// toggle source/header
// funkcja - podpowiedzi - usprawnij
// improve context menu  ?
// search everywhere
// auto indent on paste
// refactor: extract local
// refactor: extract function

template <typename T>
void printStuff(const T & stuff) {
  std::cout << stuff << std::endl;
}
int x = 5;

int main() {
  std::cout << "Hello World!\n";
  b = 10;
  
  using namespace std;
  
  vector<int> test(1000, 1);
  vector<vector<int>> test2(2, test);
  x = 10;
  
  auto val = 7;
  auto val2 = & val;
  
  cout << std::accumulate(test.begin(), test.end(), 1, std::multiplies<int>()) << endl;  
}
