#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(void)
{
    int N, W, L;

    queue <int> q;
    vector <int> vTruck;
    int weight = 0;
    int nResult = 0;
    cin >> N >> W >> L;

    for (int i = 0; i < N; i++)
    {
        int nAInput;
        cin >> nAInput;
        vTruck.push_back(nAInput);

    }
    for (int i = 0; i < N; i++)
    {
        if (q.empty())
        {
            q.push(vTruck[i]);
            weight += vTruck[i];
            nResult++;

        }
        else
        {
            while (1)
            {
                if (q.size() == W)
                {
                    weight -= q.front();
                    q.pop();

                }
                if (vTruck[i] + weight <= L)break;

                q.push(0);
                nResult++;

            }

            q.push(vTruck[i]);
            weight += vTruck[i];
            nResult++;
        }



    }


    /*
    for (int i = 0; i < N; i++)
    {
       while (1)
       {
          if (q.size() == W)
          {
             weight -= q.front();
             q.pop();
          }

          if (vTruck[i] + weight <= L) break;
          q.push(0);
          nResult++;

       }
       q.push(vTruck[i]);
       weight += vTruck[i];
       nResult++;


    }*/

    cout << nResult + W << endl;
}