#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    
    int N, L;
    cin>>N>>L;

    vector<string> vec(N);
    for(int i=0; i<N; i++){
        cin>>vec[i]; 
    }
    sort(vec.begin(), vec.end());

    for(string s : vec){
        cout<<s;
    }

}