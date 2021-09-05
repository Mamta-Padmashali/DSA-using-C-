#include <iostream>
using namespace std;

int main() {
  int n,i,first,second;
  cout << "Enter n: ";
  cin >> n;
  if(n<=2)
    cout << "Invalid input";
  else
  {
    int a[n];
    cout << "Enter n elements with space in between: ";
    for(i=0; i<n; ++i)
      cin >> a[i];
    for(i=0; i<n; ++i)
    {
      if(i==0)
        first=a[i];
      if(a[i]>first)
      {
        second = first;
        first = a[i];
      }
      else if(a[i]>second && a[i]!=first)
        second = a[i];    
    }
    cout << "Second largest element: " << second;
  }

  return 0;
}