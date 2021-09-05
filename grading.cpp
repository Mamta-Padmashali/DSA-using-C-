#include <iostream>
using namespace std;

int main() {
  int n,i;
  cin >> n;
  int grades[n],g[n];
  for(i=0;i<n;++i)
    cin >> grades[i];
  for(i=0;i<n;++i)
  {
    if(grades[i]<38)
      cout << grades[i] << "\n";
    else
    {
      n = ((grades[i] + 4)/5) * 5;
      if(n-grades[i]>=3)
        cout << grades[i] << "\n";
      else
        cout << n << "\n";
    }
  }  
  return 0;
}