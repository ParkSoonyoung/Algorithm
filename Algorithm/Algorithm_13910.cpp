#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;




int main(void)
{


	int N, M;
	vector <int>v;
	vector <int> v2;
	

	int nResult;



	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int nInput;
		cin >> nInput;
		v.push_back(nInput);


	}

	v.push_back(v[0] + v[1]);
	v2 = v;


	int k = 1;

	while (1)
	{
		vector<int> vtemp;
		int ntemp = 0;
		for (int i = 0; i < v2.size(); i++)
		{
			if (v2[i] == N)
			{
				ntemp = v2[i];
				break;

			}
			for (int j = 0; j < v.size(); j++)
			{
				int ntemp2;
				ntemp2 = v2[i] + v[j];
				vtemp.push_back(ntemp2);

			}


		}

		if (ntemp == N)
		{
			nResult = k;
			break;

		}
		else
		{
			v2 = vtemp;
			sort(v2.begin(), v2.end());
			if (v2[0] > N)
			{
				k = -1;
				nResult = k;
				break;
			}
			else
			{
				k++;
			}
		}

	}

	cout << nResult << endl;

	return 0;


}