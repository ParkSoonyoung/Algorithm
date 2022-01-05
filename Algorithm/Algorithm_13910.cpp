#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void)
{

	int N, M;
	vector <int>v;


	cin >> N >> M;


	for (int i = 0; i < M; i++)
	{
		int Input;
		cin >> Input;
		v.push_back(Input);

	}

	sort(v.begin(), v.end());








	return 0;



}