#include<iostream>
#include<stack>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k;
    long long sum = 0;
    cin>>k;

    stack<int> st;

    for(int i=0; i<k; i++){
        int e; 
        cin>>e;
        if(e==0){
            st.pop();
            continue;
        }
        st.push(e);
    }
    while(!st.empty()){
        sum += st.top();
        st.pop();
    }
    
    cout<<sum;
}