#include<iostream>
using namespace std;
int main
{
  int N, i=1, fact=1;
  while(i<=N)
  {
     fact = fact * i;
     i++;
  }
  cout<<fact;
}
