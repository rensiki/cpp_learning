#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N=0;
    cin>>N;

    set<string> str_lengths[50];

    for(int i=0; i<N; i++){
        string str;
        cin>>str;
        str_lengths[str.size()-1].insert(str);
    }

    for(set<string> vec : str_lengths){
        if(vec.empty()) continue;

        //sort(vec.begin(), vec.end());
        for(string s : vec){
            cout<<s<<'\n';
        }
    }
}