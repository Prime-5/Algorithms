#include "bits/stdc++.h"
using namespace std;

int main(){
	int a=5;
	int b=9;
	cout<<"a :"<<a<<" b :"<<b<<endl;
	a= a<<b;
	b =a>>b;
	a = log2(a/b); //just a little bit of math hahaha, hope it's right
	cout<<"a :"<<a<<" b :"<<b<<endl;
}
