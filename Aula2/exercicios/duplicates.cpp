#include <iostream>
#include <vector>

std::vector<int> remove_duplicates(std::vector<int> const& numbers)
{
  if (numbers.empty()) {
    return {};
  }

  std::vector<int> aux;
  aux.push_back(numbers.front());

  for (auto i = 1u; i < numbers.size(); ++i) {
    if (aux.back() != numbers[i]) {
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