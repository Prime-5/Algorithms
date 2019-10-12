#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	//I used only two variables like in rules LOL
	auto a=make_pair(5,10);
	auto swa= make_pair(a.second,a.first);
	
	cout<<"before: "<<a.first<<" "<<a.second<<" after: "<<swa.first<<" "<<swa.second;

	//or another method
	int c=1, c2=2;
	
	cout<<endl<<"before: "<<c<<" "<<c2<<endl;
	swap(c,c2);
	cout<<" after: "<< c<<" "<<c2;
}
