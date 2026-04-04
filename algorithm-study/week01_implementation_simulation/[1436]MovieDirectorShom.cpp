
#include<iostream>
#include<string>
using namespace std;



int main(){
ios::sync_with_stdio(false);
cin.tie(0);

    int N;
    int cnt = 0;
    cin>>N;


    for(long long i=0; i<__LONG_LONG_MAX__; i++){
        string st = to_string(i);
        if(st.find("666") != string::npos){
            cnt++;
        }
        if(cnt==N){
            cout<<st;
            break;
        }
        
    }






}
