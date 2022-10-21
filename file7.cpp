#include <iostream>
#include<string>
using namespace std;
bool isprime(int h)
{
    int count=1;
    for(int i=2;i<=h;i++)
    {
        if(h%i==0)
        count++;
    }
    if(count==2)
    return true;
    else
    return false;
}
int rotate(string& m)
{
    string tempo="";
    for(int i=1;i<m.size();i++)
    {
        tempo=tempo+m[i];
    }
    tempo=tempo+m[0];
    int value=stoi(tempo);
    
    return value;
}
int main() {
    int n;
    cin>>n;
    string temp=to_string(n);
    int counter=0;
    if(isprime(n))
    {
    for(int i=0;i<temp.size();i++)
    {
        int number=rotate(temp);
        temp=to_string(number);
        if(isprime(number))
        counter++;
    }
    if(counter==temp.size())
    cout<<"It is circular prime\n";
    else
    cout<<"It is not circular prime\n";
    }
    else
    cout<<"It is not circular prime\n";
    return 0;
}