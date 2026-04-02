#include<iostream>
#include<stack>
#include<string>
using namespace std;


int main(){
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        stack<bool> st;
        string inStr;
        cin>>inStr;

        for(int j=0; j<inStr.size(); j++){
            if(inStr[j] == '('){
                st.push(true);
            }
            else{
                if(!st.empty()&&st.top()){
                    st.pop();
                }
                else{
                    cout<<"NO\n";
                    break;;
                }

            }
            if(j == inStr.size()-1){
                if(st.size() != 0){
                    cout<<"NO\n";
                }
                else{
                    cout<<"YES\n";
                }
            }
        }
    }



}