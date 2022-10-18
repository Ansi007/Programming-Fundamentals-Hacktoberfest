#include <iosstream>
using namespace std;

int main{
	int m,n,k,l,i,j,f;
	cout<<"Enter the size of first array\n";
	cin>>m>>n;
	cout<<"Enter the size of second array\n";
	cin>>k>>l;
	
	if(n!=k)
	cout<<"Array multiplication is not possible\n";
	goto h;
	
	int arr[m][l],a1[m][n],a2[k][l];
	
	cout<<"Enter the elements of first matrix\n";
	for(i=0;i<m;i++)
	 for(j=0;j<n;j++)
	 cin>>a1[i][j];
	 cout<<"Enter the elemetns of second matrix\n";
	 for(i=0;i<k;i++)
	  for(j=0;j<l;j++)
	  cin>>a2[i][j];
	  
	  for(i=0;i<m;i++)
	  { for(j=0<l;i++)
	     {
	       for(f=0;f<)
		 }
	  }	
	
   h:return 0;
}

