#include <span>
#include <vector>
#include <iostream>

void print_size(std::span<int> s)
{
  std::cout << s.size() << '\n';
}

int main()
{
  {
    int a[] = { 1, 2, 3, 4, 5 };
    int * b = &a[0];
    print_size(a);
    print_size({b, 5});
  }

  {
    std::vector<int> v = { 1, 2, 3, 4, 5 };
    print_size(v);
    print_size({v.data(), v.size()});
  }

  return 0;
}

