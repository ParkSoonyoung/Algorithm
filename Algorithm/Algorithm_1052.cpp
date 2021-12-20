#include<iostream>

using namespace std;


int Algorithm_1052(int N, int K);


int Algorithm_1052(int N, int K)
{
    int result = 0;
    while (1)
    {
        int nTemp = N;
        int cnt = 0;
        while (nTemp)
        {
            if (nTemp % 2 == 1)
                cnt++;

            nTemp /= 2;
        }

        if (cnt <= K)
            return result;

        N++;
        result++;

    }

}

int main(void)
{
	int N, K;
    int result;
	cin >> N >> K;
    result = Algorithm_1052(N, K);

    cout << result;




}