#include <iostream>
#include <string>

int count_occurences(char c, std::string const& word)
{
  auto total = 0;

  for (auto& i: word) {
    if (c == i) {
      total++;
    }
  }

  return total;
}

int main()
{
  using namespace std::string_literals;

  const auto word = "evidentemente"s;
  const auto letter = 'e';
  std::cout << "number of " << letter << " in " << word << ": "
            << count_occurences(letter, word) << '\n';
}