#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;
 
template <typename RandomAccessIterator>
void cocktail_sort(RandomAccessIterator begin, RandomAccessIterator end) {
  bool swapped = true;
  while (begin != end-- && swapped) {
    swapped = false;
    for (auto i = begin; i != end; ++i) {
      if (*(i + 1) < *i) {
        iter_swap(i, i + 1);
        swapped = true;
      }
    }
    if (!swapped) {
      break;
    }
    swapped = false;
    for (auto i = end - 1; i != begin; --i) {
      if (*i < *(i - 1)) {
        iter_swap(i, i - 1);
        swapped = true;
      }
    }
    begin++;
  }
}
 
int main() {
  int a[] = {10, 12, 526, 20, -152, 23, 939, 3, 77, -99};
  cocktail_sort(begin(a), end(a));
  copy(begin(a), end(a), ostream_iterator<int>(cout, " "));
  cout << "\n";
}
