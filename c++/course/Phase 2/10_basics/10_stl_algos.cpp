#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);

  cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

  cout << "Lower Bound --> " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;

  cout << "Upper Bound --> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

  int a = 3;
  int b = 5;

  cout << "max " << max(a, b) << endl;
  cout << "min " << min(a, b) << endl;

  swap(a, b);

  cout << a << endl;
  cout << b << endl;

  string abcd = "abcd";
  reverse(abcd.begin(), abcd.end());

  cout << abcd << endl;

  rotate(v.begin(), v.begin() + 1, v.end());

  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;

  sort(v.begin(), v.end());
  // based on intro sort (combinatrion of 3 algorithms --> quick sort,  heap sort and insertion sort whhich is working behind the scene )
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;
}