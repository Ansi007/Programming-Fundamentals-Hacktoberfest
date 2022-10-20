#include <iostream>
using namespace std; 

class Rectangle
{
public:
	void setLength(int len)
	{
		length = len;
	}

	void setWidth(int wid)
	{
		width = wid;	
	}

	int getLength()
	{
		return length; 
	}

	int getWidth()
	{
		return width;
	}

	int getArea()
	{
		return length * width; 
	}

	int getPerimeter()
	{
		return 2 * (length + width);
	}
	void draw()
	{
		for(int i =0; i<length; i++)
		{
			for(int j=0; j<width; j++)
				cout << "*"
			cout << endl;
		}
	}
private:
	int length; 
	int width;
};

int main()
{
	Rectangle rect;	
	rect.setLength(10); 
	rect.setWidth(30); 
	cout << "Area of the Rectangle: " << rect.getArea() << endl;
	cout << "length: " << rect.getLength() << endl;
	cout << "width: " << rect.getWidth() << endl;
	rect.draw();
	return 0;
}