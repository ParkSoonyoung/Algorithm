


#include<iostream>
#include <stack>
using namespace std;
int main(void)
{
    int N, P;
    std::stack <int> NStack[6];
    int nResult = 0;

    cin >> N >> P;

    for (int i = 0; i < N; i++)
    {
        int nN;
        int nP;
        cin >> nN >> nP;

        if (NStack[nN - 1].empty())
        {

            NStack[nN - 1].push(nP);
            nResult++;

        }
        else if (NStack[nN - 1].top() < nP)
        {

            NStack[nN - 1].push(nP);
            nResult++;
        }
        else if (NStack[nN - 1].top() > nP)
        {

            while (1)
            {
                if (NStack[nN - 1].empty())
                {
                    NStack[nN - 1].push(nP);
                    nResult++;
                    break;

                }
                else if (NStack[nN - 1].top() > nP)
                {
                    NStack[nN - 1].pop();
                    nResult++;

                }
                else if (NStack[nN - 1].top() < nP)
                {
                    NStack[nN - 1].push(nP);
                    nResult++;
                    break;
                }
                else
                {
                    break;

                }
            }
        }
        else
            continue;


    }

    cout << nResult << endl;
    return 0;

}