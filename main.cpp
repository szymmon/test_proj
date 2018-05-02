#include <iostream>
#include <numeric>
#include <vector>

int b = 5;

//TODO: shortcuts - wyświetlane - tworzenie pliku ze skrótami
//TODO: todo Todo!
//proste Settings
//FIX_ME FIXME fixme
// multiple screens?
//new class 
// shift-alt-arrow lub ctrl-w
// goto file
//
// automatyczne wypełnianie CmakeLists przy tworzeniu klasy?
// brak pragma once lub Guard - powinien być warning
// save all shortcut ?
// save all przed refactoring? (opcjonalnie)
// TODO function args tooltip
// debbug?
// new source file
// new source folder
// toggle source/header
// rename not updating CmakeLists

// help where are key shortcuts
//

template <typename T>
void printStuff(const T & stuff) {
  std::cout << stuff << std::endl;
}

int main() {
  std::cout << "Hello World!\n";
  b = 10;
  using namespace std;
  vector<int> test = {1, 1, 1};
  auto a = 5;
  auto val = 7;
 auto val2 = & val;
  cout << std::accumulate(test.begin(), test.end(), 0, [](auto l, auto r) {return l + r;}) << endl;
  
}
