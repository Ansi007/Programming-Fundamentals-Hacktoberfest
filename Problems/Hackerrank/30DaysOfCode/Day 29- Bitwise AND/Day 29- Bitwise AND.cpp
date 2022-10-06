#include <iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

string ltrim(const string&);
string rtrim(const string&);
vector<string> split(const string&);

/*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */

int bitwiseAnd(int N, int K)
{
    vector<int> resultsOfBitwiseAnd;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            resultsOfBitwiseAnd.push_back(i & j);
        }
    }
    int max = 0;
    for (int i = 0; i < resultsOfBitwiseAnd.size(); i++)
    {
        if (resultsOfBitwiseAnd[i] > max && resultsOfBitwiseAnd[i] < K)
        {
            max = resultsOfBitwiseAnd[i];
        }
    }
    return max;
}




int main()
{
    int testcases = 0;
    cin >> testcases;
    int n, k;
    for (int i = 0; i < testcases; i++)
    {
        cin >> n >> k;
        cout << bitwiseAnd(n, k) << endl;
    }

    return 0;
}
