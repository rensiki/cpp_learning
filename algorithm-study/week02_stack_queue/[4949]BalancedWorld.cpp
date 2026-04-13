#include<iostream>
#include<istream>
#include<stack>
#include<string>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;   
    getline(cin, s);
    


    while(s != "."){
        stack<char> st;
        bool loopCompleted = true;

        for(char ch : s){
            if(ch=='\n'){continue;}
            //cout<<ch<<' ';
            if(ch == '(' || ch == '['){
                st.push(ch);
            }
            else if(ch == ')'){
                if(!st.empty()&&st.top() == '('){
                    st.pop();
                }
                else{
                    cout<<"no\n";
                    loopCompleted = false;
                    break;
                }
            }
            else if(ch == ']'){
                if(!st.empty()&&st.top() == '['){
                    st.pop();
                }
                else{
                    cout<<"no\n";
                    loopCompleted = false;
                    break;
                }
            }
        }

        if(loopCompleted){
            if(st.empty()){
                cout<<"yes\n";
            }
            else{
                cout<<"no\n";
            }
        }
        getline(cin, s);
    }
}