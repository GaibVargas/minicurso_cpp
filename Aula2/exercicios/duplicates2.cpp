#include <iostream>
#include <vector>

void remove_duplicates(std::vector<int>& numbers)
{
  if (numbers.empty()) {
    numbers = {};
  }

  std::vector<int> aux;
  aux.push_back(numbers.front());

  for (auto i = 1u; i < numbers.size(); ++i) {
    if (numbers[i] != numbers[i - 1]) {
      aux.push_back(numbers[i]);
    }
  }

  numbers = aux;
}

int main()
{
  auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

  remove_duplicates(ints);

  for (auto i: ints) {
      std::cout << i << '\n';
  }
}