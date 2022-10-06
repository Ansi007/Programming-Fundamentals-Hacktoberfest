#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, choice;
    
    cout<<"Enter n : ";
    cin>>n;
    
    cout<<"Enter choice 1. for summation from 1 to "<<n<<" or 2. for product of 1 to "<<n<<" : ";
    cin>>choice;
    
    if(choice == 1) {
        
        long long sum = (n*(n+1))/2;
        cout<<"Sum is : "<<sum;
        
    }
    else if(choice == 2) {
        
        long long product = 1;
        for(int i=1; i<=n; i++) {
            product *= i;
        }
        
        cout<<"Product is : "<<product;
    }
    else {
        cout<<"Wrong Choice Entered !!";
    }
    
    return 0;
}