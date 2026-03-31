#include<iostream>
#include<unordered_set>
#include<string>
using namespace std;



int main(){
    int N, M;
    int cnt = 0;

    cin>>N>>M;

    unordered_set<string> S;

    for(int i=0; i<N; i++){
        string inStr1;
        cin>>inStr1;
        S.insert(inStr1);
    }

    for(int j=0; j<M; j++){
        string inStr2;
        cin>>inStr2;
        if(S.find(inStr2) != S.end()){
            cnt++;
        }

    }


    cout<<cnt<<endl;


}