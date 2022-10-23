#include "iostream"
#include "fstream"
#include "ctime"

using namespace std;

//Add necessary instructions to count the Number of Key Comparsisons and Data Movements
//You are NOT Allowed to add any input/output instructions in sorting algorithms 

//Bubble Sort
int count1 =0;
void swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
	count1++;
}
int bubbleSort(int a[], int size)
{
	int count = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (++count && a[j] > a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
	return count;
}

//Selection Sort
void selectionSort(int a[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int min = i;

		for (int j = i + 1; j < size; j++)
		{
			if (a[min] > a[j])
				min = j;
		}

		swap(a[i], a[min]);
	}
}

//Insertion Sort
void insertionSort(int a[], int size)
{
	int j = 0;

	for (int i = 0; i < size - 1; i++)
	{
		j = i + 1;

		while (j > 0 && a[j] < a[j - 1])
		{
			swap(a[j], a[j - 1]);
			j--;
		}
	}
}
int main()
{
	//Read the data from file here
	ifstream file("in00.txt");
	int size;
	file >> size;
	int *arr = new int[size];
/*	int *arr1 = new int[size];
	int *arr2 = new int[size];
	int *arr3 = new int[size];
	int *arr4 = new int[size];
	int *arr5 = new int[size];*/
	for (int i = 0; i < size; i++){
		file >> arr[i];
	//	arr1[i] = arr2[i] = arr3[i] = arr4[i] = arr5[i];
	}
	clock_t startTime = clock();
	//Make a call to sorting algorithm. DO NOT perform any other operation here 
int c =	bubbleSort(arr, size);
/*	bubbleSort(arr1, size);
	bubbleSort(arr2, size);
	bubbleSort(arr3, size);
	bubbleSort(arr4, size);
	bubbleSort(arr5, size);*/
/*	insertionSort(arr,size);
	insertionSort(arr1,size);
	insertionSort(arr2,size);
	insertionSort(arr3,size);
	insertionSort(arr4,size);
	insertionSort(arr5,size);*/
	clock_t endTime = clock();
	double elapse = ((double)endTime - (double)startTime) / CLOCKS_PER_SEC;
//	cout << "The operation took " << elapse/6.0 << " seconds";
//int c=bubbleSort(arr, size);


	//Add any other instructions here, if required
cout<<"no of key comp "<<c<<endl;
//cout<<"swap wala:"<<count1<<endl;
	return 0;
}
