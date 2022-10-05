//This problem is about unit testing.
//
//Your company needs a function that meets the following requirements :
//
//------For a given array of n integers, the function returns the
//index of the element with the minimum value in the array.
//If there is more than one element with the minimum value,
//it returns the smallest one.
//If an empty array is passed to the function, it raises an exception.
//
//                A coworker has prepared functions that will perform
//    the tests and validate return values.Finish the implementation 
//    of 3 classes to provide data and expected results for the tests.
//
//                Complete the following methods.
//
//                In the class TestDataEmptyArray :
//           1) get_array() returns an empty array
//
//                In the class TestDataUniqueValues :
//            2) get_array() returns an array of size at least 2 with all unique elements
//            3) get_expected_result() returns the expected minimum value index for this array
//
//                In the class TestDataExactlyTwoDifferentMinimums :
//                1)  get_array() returns an array where the minimum value occurs at exactly 2 indices
//                2)  get_expected_result() returns the expected index
//                
//









#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq)
{
    if (seq.empty())
    {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i)
    {
        if (seq[i] < seq[min_idx])
        {
            min_idx = i;
        }
    }
    return min_idx;
}


class TestDataEmptyArray
{
public:
    static vector<int> get_array()
    {
        vector<int> vect{};
        return vect;
    }
};


class TestDataUniqueValues
{
public:
    static vector<int> get_array()
    {
        vector<int> vect{ 23,5,8,12,7 };
        return vect;
    }

    static int get_expected_result()
    {
        return 1;
    }

};

class TestDataExactlyTwoDifferentMinimums
{
public:
    static vector<int> get_array()
    {
        vector<int> vect{ 9,23,3,8,12,3,7 };
        return vect;
    }

    static int get_expected_result()
    {
        return 2;
    }
};

void TestWithEmptyArray()
{
    try
    {
        vector<int> seq = TestDataEmptyArray::get_array();
        int result = minimum_index(seq);
    }
    catch (invalid_argument& e)
    {
        return;
    }
    assert(false);
}

void TestWithUniqueValues()
{
    vector<int> seq = TestDataUniqueValues::get_array();
    assert(seq.size() >= 2);

    assert(set<int>(seq.begin(), seq.end()).size() == seq.size());

    int expected_result = TestDataUniqueValues::get_expected_result();
    int result = minimum_index(seq);
    assert(result == expected_result);
}

void TestWithExactlyTwoDifferentMinimums()
{
    vector<int> seq = TestDataExactlyTwoDifferentMinimums::get_array();
    assert(seq.size() >= 2);

    vector<int> tmp = seq;
    sort(tmp.begin(), tmp.end());
    assert(tmp[0] == tmp[1] and (tmp.size() == 2 or tmp[1] < tmp[2]));

    int expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    int result = minimum_index(seq);
    assert(result == expected_result);
}

int main()
{
    TestWithEmptyArray();
    TestWithUniqueValues();
    TestWithExactlyTwoDifferentMinimums();
    cout << "OK" << endl;
    return 0;
}




