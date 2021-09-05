#include <iostream>
using namespace std;
bool isPrime(int n)
{
  int i,c=0;
  for(i=n;i>0;--i)
  {
    if(n%i==0)
    {
      c++;
      if(c>2)
        return false;
      else
       continue;
    }
  }
  return true;
}
int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  if(isPrime(n))
    cout << n << " is a Prime number";
  else
    cout << n << " is not a Prime number";

  return 0;
}