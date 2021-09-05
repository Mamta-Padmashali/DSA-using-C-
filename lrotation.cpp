#include <iostream>
using namespace std;

void left_rotate(int a[],int n, int r)
{
  int i,j,temp;
  for(i=1;i<=r;++i)
  {
    for(j=0;j<=n-2;++j)
    {
      temp=a[j];
      a[j]=a[j+1];
      a[j+1]=temp;
    }
  }
  for(i=0;i<n;++i)
    cout << a[i] << " "; 
}

int main() {
  int n,r,i,temp;
  cin >> n >> r;
  if(r<1 || r>n)
    cout << "Invalid input";
  int a[n];
  for(i=0;i<n;++i)
    cin >> a[i];
  left_rotate(a,n,r);
  return 0;
}