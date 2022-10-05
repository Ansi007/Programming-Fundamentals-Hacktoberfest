//Sample Input
//3       __elements[] size N = 3
//1 2 5   __elements = [1, 2, 5]

//Sample Output
//4

//Explanation
//The scope of the elements array and maximum difference 
// integer is the entire class instance.The class constructor saves
//  the argument passed to the constructor as the elements instance
//  variable(where the computeDifference method can access it).
//To find the maximum difference, computeDifference checks each
//  element in the array and finds the maximum difference between elements .
//




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    Difference(vector<int>elements)
    {
        this->elements = elements;
    }
    void computeDifference()
    {
        int diff = 0;
        maximumDifference = *max_element(elements.begin(), elements.end()) - *min_element(elements.begin(), elements.end());
        for (int i = 0; i < elements.size(); i++)
        {
            for (int j = 0; j < elements.size(); j++)
            {
                diff = -1 * (elements[i] - elements[j]);
                if (diff > maximumDifference)
                {
                    maximumDifference = diff;
                }
            }
        }
    }


}; // End of Difference class

int main() {
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}

