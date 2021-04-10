#include <iostream>
#include <vector>

std::vector<int> remove_duplicates(std::vector<int> const& numbers)
{
  std::vector<int> aux;
  for (auto i = 0u; i < numbers.size(); ++i) {
    if (i == 0) {
      aux.push_back(numbers[i]);
    } else if (aux.back() != numbers[i]) {
      aux.push_back(numbers[i]);
    }
  }

  return aux;
}

int main()
{
  for (auto i: remove_duplicates({1, 1, 1, 2, 3, 3, 4, 1, 1})) {
      std::cout << i << '\n';
    }
}