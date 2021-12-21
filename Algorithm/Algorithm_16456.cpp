#include<iostream>
#include<stack>
#include <vector>
using namespace std;


int Algorithm_16456(int N);

int Algorithm_16456(int N)
{
	int result = 0;
	int div = 1000000009;
	vector<int> v;
	vector<int> temp;
	v.push_back(1);
	v.push_back(1);
	v.push_back(2);
	temp = v;
	
	for (int i = 3; i < N; i++)
		temp.push_back((temp.at(i - 1) + temp.at(i - 3)) % div);
	result = temp.at(N-1);
	return result ;

}



int main(void)
{
	int N;
	
	cin >> N;
	int result =  Algorithm_16456(N);
	cout << result;


}