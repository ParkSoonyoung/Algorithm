#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int Algorithm_16943();

int Algorithm_16943()
{

    string A, B;
    vector<char> v1;
    vector<int>vnper;
    int nMax;
    int nMin;
    int nB;

    cin >> A >> B;


    int nlen = A.size();
    for (int i = 0; i < nlen; i++)
    {
        char temp = A[i];
        v1.push_back(temp);

    }

    sort(v1.begin(), v1.end());
    do
    {
        string temp;
        int ntemp;
        for (auto i = v1.begin(); i != v1.end(); i++)
        {

            temp += *i;

        }
        if (temp[0] != '0')
        {
            ntemp = atoi(temp.c_str());
            vnper.push_back(ntemp);
        }


    } while (next_permutation(v1.begin(), v1.end()));
    nMin = *min_element(vnper.begin(), vnper.end());
    nMax = *max_element(vnper.begin(), vnper.end());
    nB = atoi(B.c_str());

    if (nMin > nB)
        return -1;
    else
    {
        int nlen = vnper.size();
        for (int i = 0; i < nlen; i++)
        {
            if (vnper[i] > nB)
            {
                int ntemp = i - 1;
                int nReturn = vnper[ntemp];
                return nReturn;
            }
            else if (i == nlen - 1)
            {
                return nMax;

            }


        }
    }


    return -1;

}


int main(void)
{



    int result;
    result = Algorithm_16943();

    cout << result;
    return 0;
}


