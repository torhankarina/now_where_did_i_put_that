#include <iostream>

#include "src/where.hpp"
using namespace std;

int main() {
  string text = "The quick brown fox";

  cout << "Index of 'e': " << find(text, 'e') << endl;                    // 2
  cout << "Index of \"e\": " << find(text, "e") << endl;          // 2
  cout << "Index of ' ': " << find(text, ' ') << endl;                    // 3
  cout << "Index of \"quick\": " << find(text, "quick") << endl;  // 4
  cout << "Index of \"quiet\": " << find(text, "quiet") << endl;  // -1

  return 0;
}