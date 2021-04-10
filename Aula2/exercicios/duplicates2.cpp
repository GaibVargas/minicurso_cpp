#include <iostream>
#include <vector>

void remove_duplicates(std::vector<int>& numbers)
{
  for (auto i = numbers.begin(); i != numbers.end(); ++i) {
    if (*i > 0 and numbers[*i] == numbers[*i - 1]) {
      numbers.erase(i);
    }
  }
}

int main()
{
  auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

  remove_duplicates(ints);

  for (auto i: ints) {
      std::cout << i << '\n';
  }
}