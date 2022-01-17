#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
   int N;
   vector <long long> v;
   long long nResult;
   v.push_back(1);
   v.push_back(1);

   std::cin >> N;
   
   for (int i = 2; i < N; i++)
   {
      long long nTemp = v[i - 2] + v[i - 1];
      v.push_back(nTemp);

   }
   nResult = v[N - 1];
   cout << nResult << endl;

}
