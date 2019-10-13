#include<bits/stdc++.h>
using namespace std;

int countSubstrings(string s) {
    int n = s.length();
    if(n == 0)
        return 0;
    vector<vector<bool>> tab(n,vector<bool>(n,false));
    int cnt=0,i,j,l;
    for(i=0;i<n;++i){
        tab[i][i]=true;
        cnt++;
    }
    for(i=0;i<n-1;++i){
        if(s[i]==s[i+1]){
            tab[i][i+1]=true;
            cnt++;
        }                
    }
    for(l=3;l<=n;++l){
        for(i=0;i<=n-l;++i){
            j=i+l-1;
            if(s[i]==s[j] && tab[i+1][j-1]){
                tab[i][j]=true;
                cnt++;
            }
        }            
    }
    return cnt;        
}

int main(){
	string s;
	cin>>s;
	int result = countSubstrings(s);
	cout<<"\nTotal palindromic substrings : "<<result;
}