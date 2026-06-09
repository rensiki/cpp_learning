#include<iostream>
#include<string>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);


    string s; cin>>s;

    int max{0}, cur{0};
    for(char ch : s){
        if(ch=='A'||ch=='C'||ch=='G'||ch=='T'){
            cur++;
            if(cur>max){max = cur;}
        }
        else{
            cur = 0;
        }
    }

    cout<<max;
}