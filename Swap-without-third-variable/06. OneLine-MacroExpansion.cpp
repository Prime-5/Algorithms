#include<bits/stdc++.h>
using namespace std;

#define SWAP(x,y) x^=y^=x^=y;

int main(){
    long long x,y;
    cout<<"Enter the two numbers x, y to be swapped\n";
    cin>>x>>y;
    SWAP(x,y);
    cout<<"After swapping x= "<<x<<" and y= "<<y;
}
