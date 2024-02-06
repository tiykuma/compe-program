#include <iostream>

#include <algorithm>


using namespace std;

int main()
 
{
freopen("JUMP.INP", "r", stdin);
// freopen("JUMP.OUT", "w", stdout);
  int n, m;
  cin >> n >> m;

  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);
// 
  int count = 0;
  int i = 0;
  int j = n - 1;
  while (i <= j) {
    if (a[i] + a[j] <= m) {
      count++;
      i++;
      j--;
    } else {
      count++;
      j--;
    }
  }

  cout << count << endl;

  return 0;
}