#include<iostream>
#include<deque>
using namespace std;

void commandFunc(deque<int>& dq, const string& command){
    int x = 0;
    if(command == "push_front"){
        cin>>x;
        dq.push_front(x);
    }
    else if(command == "push_back"){
        cin>>x;
        dq.push_back(x);
    }
    else if(command == "pop_front"){
        if(dq.empty()){
            cout<<-1<<'\n';
            return;
        }
        cout<<dq.front()<<'\n';
        dq.pop_front();
    }
    else if(command == "pop_back"){
        if(dq.empty()){
            cout<<-1<<'\n';
            return;
        }
        cout<<dq.back()<<'\n';
        dq.pop_back();
    }
    else if(command == "size"){
        cout<<dq.size()<<'\n';
    }
    else if(command == "empty"){
        cout<<dq.empty()<<'\n';
    }
    else if(command == "front"){
        if(dq.empty()){
            cout<<-1<<'\n';
            return;
        }
        cout<<dq.front()<<'\n';
    }
    else if(command == "back"){
        if(dq.empty()){
            cout<<-1<<'\n';
            return;
        }
        cout<<dq.back()<<'\n';
    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;

    deque<int> dq;

    for(int i=0; i<N; i++){
        string command;
        cin>>command;
        commandFunc(dq, command);
    }
}