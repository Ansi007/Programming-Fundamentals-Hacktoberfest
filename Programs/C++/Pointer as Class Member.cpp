#include <iostream>
using namespace std;
class MyArray
{
private:
	int size;
	int index;
	int* arr;
	void resize();
public:
	MyArray(int s = 10);
	~MyArray();
	MyArray(const MyArray& marks);
	void setElement(int val);
	int getElement(int i)const;
	int getLength()const;
	int getIndex()const;
};
MyArray::MyArray(int s)
{
	size = s;
	index = 0;
	arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}
void MyArray::setElement(int val)
{
	if (index < size)
	{
		arr[index] = val;
		index++;
	}
	else
	{
		resize();
		arr[index] = val;
		index++;
	}

}
void MyArray::resize()
{
	int* temp = new int[size * 2];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	size = size * 2;
	/*delete[] arr;*/
	this->~MyArray();
	arr = temp;
}
int MyArray::getElement(int i)const
{
	if (i > -1 && i < size)
	{
		return arr[i];
	}
	else
	{
		cout << "Index out of bound" << endl;
	}
}
int  MyArray::getLength()const
{
	return size;
}
int MyArray::getIndex()const
{
	return index;
}
MyArray::~MyArray()
{
	if (arr)
	{
		delete[] arr;
		arr = nullptr;
	}
}
int main()
{
	int val;
	MyArray obj;
	cout << "Enter elements of the array:  " << endl;
	for (int i = 0; i < obj.getLength(); i++)
	{
		cin >> val;
		obj.setElement(val);
	}
	for (int i = 0; i < 5; i++)
	{
		cin >> val;
		obj.setElement(val);
	}
	cout << "The values are: " << endl;
	for (int i = 0; i < obj.getIndex(); i++)
	{
		cout << obj.getElement(i) << endl;
	}
	return 0;
}