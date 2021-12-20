#include<iostream>
#include <vector>
#include<queue>
using namespace std;


int Algorithm_13903();
int Algorithm_13903()
{

    queue<pair<int, int>> q;
    vector<vector<int>> vntemp;
    int R, C, N;

    vector<pair<int, int>>   vRule;
    vector<vector<int>>     vBoard;
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        vector<int> v;
        for (int j = 0; j < C; j++)
        {
            int ninput;
            cin >> ninput;
            v.push_back(ninput);

        }
        vBoard.push_back(v);

    }
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int nFirst;
        int nSecond;
        pair<int, int> p;
        cin >> nFirst >> nSecond;
        p = make_pair(nFirst, nSecond);
        vRule.push_back(p);
    }


    for (int i = 0; i < R; i++)
    {
        vector<int> v;
        for (int j = 0; j < C; j++)
        {
            int a = -1;
            v.push_back(a);

        }

        vntemp.push_back(v);
    }


    for (int i = 0; i < vBoard[0].size(); i++)
    {
        if (vBoard[0][i] == 1)
        {
            pair<int, int> tmp;
            int nX, nY;
            int nCnt = 0;
            nX = 0;
            nY = i;
            tmp = make_pair(nX, nY);
            q.push(tmp);
            vntemp[0][i] = 0;
        }

    }
    while (!q.empty())
    {
        int X, Y;
        X = q.front().first;
        Y = q.front().second;
        q.pop();
        if (X == R - 1)
        {
            return vntemp[X][Y];

        }
        for (int i = 0; i < N; i++)
        {
            int nX = X + vRule[i].first;
            int nY = Y + vRule[i].second;

            if ((nX >= 0 && nX < R) && (nY >= 0 && nY < C))
            {
                if (vntemp[nX][nY] == -1 && vBoard[nX][nY] == 1)
                {
                    q.push(make_pair(nX, nY));
                    vntemp[nX][nY] = vntemp[X][Y] + 1;


                }
            }
        }

    }



}

int main(void)
{
    int result;

    result = Algorithm_13903();
    cout << result;



}