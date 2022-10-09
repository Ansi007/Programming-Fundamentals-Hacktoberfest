//Task
//Given an array, a, of size n distinct elements, sort the array in
//ascending order using the Bubble Sort algorithm above.
//Once sorted, print the following  lines :
//
//Array is sorted in numSwaps swaps.
//where numSwaps is the number of swaps that took place.
//First Element : firstElement
//where firstElement is the first element in the sorted array.
//Last Element : lastElement
//where lastElement is the last element in the sorted array.
//
//
//
//Example
//original a : 4 3 1 2
//round 1  a : 3 1 2 4 swaps this round : 3
//round 2  a : 1 2 3 4 swaps this round : 2
//round 3  a : 1 2 3 4 swaps this round : 0
//In the first round, the  is swapped at each of the  comparisons, ending in the last position.In the second round, the  is swapped at  of the  comparisons.Finally, in the third round, no swaps are made so the iterations stop.The output is the following :
//
//Array is sorted in 5 swaps.
//First Element : 1
//Last Element : 4
//
//
//Sample Input 0
//3
//1 2 3
//
//Sample Output 0
//Array is sorted in 0 swaps.
//First Element : 1
//Last Element : 3
//
//Sample Input 1
//3
//3 2 1
//
//Sample Output 1
//Array is sorted in 3 swaps.
//First Element : 1
//Last Element : 3
//
//


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int totalNumberOfSwaps = 0;
    for (int i = 0; i < n; i++) {
        // Track number of elements swapped during a single array traversal
        int numberOfSwaps = 0;

        for (int j = 0; j < n - 1; j++)
        {
            // Swap adjacent elements if they are in decreasing order
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }

        totalNumberOfSwaps += numberOfSwaps;
        // If no elements were swapped during a traversal, array is sorted
        if (numberOfSwaps == 0)
        {
            break;
        }
    }


    cout << "Array is sorted in " << totalNumberOfSwaps << " swaps.\n";
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n - 1] << endl;
    return 0;
}
