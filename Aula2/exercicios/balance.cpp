#include <string>
#include <vector>
#include <iostream>

bool balanced(std::string const& expression)
{
  std::vector<char> aux;

  for (auto& i: expression) {
    if (i == '(' or i == '[' or i == '{') {
      aux.push_back(i);
      continue;
    }

    if (aux.empty() or i == ')') {
      if (aux.back() != '(') {
        return false;
      }

      aux.pop_back();
    }

    if (aux.empty() or i == ']') {
      if (aux.back() != '[') {
        return false;
      }

      aux.pop_back();
    }

    if (aux.empty() or i == '}') {
      if (aux.back() != '{') {
        return false;
      }

      aux.pop_back();
    }
  }

  if(aux.empty()) {
    return true;
  }

  return false;
}

int main()
{
  using namespace std::string_literals;

  auto cases = std::vector<std::string>{
    "int main(int argv, char** argv) { std::cout << argv[0] << '\n'; }"s,
    "([[]]{[]}{()})"s,
    ""s,
    ")"s,
    "([)()(])({}{)(})"s,
    "[[](){](()"s,
  };

  for (auto c: cases) {
    std::cout << "Case " << c << " is " 
              << (balanced(c) ? "balanced" : "not balanced")
              << '\n';
  }
}
