#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void PopAns(stack<int>& st, queue<char>& ans){
    //cout<<"-\n";
    ans.push('-');
    st.pop();
}
void PushAns(stack<int>& st, int e, queue<char>& ans){
    //cout<<"+\n";
    ans.push('+');
    st.push(e);
}
void Print(stack<int> st){
        cout<<"print st: ";
    int repeat = st.size();
    for(int i=0; i<repeat; i++){
        cout<<st.top();
        st.pop();
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;

    int* arr = new int[N];
    for(int i=0; i<N; i++){
        int e;
        cin>>e;
        arr[i] = e;
    }

    stack<int> st;
    queue<char> ans;

    int cnt = 0;
    int idx = 0;
    for(int i=0; i<2*N; i++){
        cout<<arr[idx]<<'\n';
        if(!st.empty()&&arr[idx]==st.top()){
            PopAns(st, ans);
            idx++;
            continue;
        }
        PushAns(st, ++cnt, ans);
    }
    
    if(st.empty()){
        int repeat = ans.size();
        for(int i=0; i<repeat; i++){
            cout<<ans.front()<<'\n';
            ans.pop();
        }
    }
    else{
        cout<<"NO\n";
    }

    Print(st);

    delete[] arr;

}

/*#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

void PopAns(stack<int>& st){
    cout<<"-\n";
    st.pop();
}
void PushAns(stack<int>& st, int e){
    cout<<"+\n";
    st.push(e);
}
void Print(stack<int> st){
        cout<<"print st: ";
    int repeat = st.size();
    for(int i=0; i<repeat; i++){
        cout<<st.top();
        st.pop();
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin>>N;

    int* inSeq = new int[N];
    int* constQues =  new int[N];

    for(int i=0; i<N; i++){
        int inValue;
        cin>>inValue;
        inSeq[i] = constQues[i] = inValue;
    }


    stack<int> st;
    int cur_idx = N-1;
    for(int i=0; i<N-1; i++){

        if(inSeq[i]==__INT32_MAX__) continue;

        if(!st.empty()&&constQues]==[ist.top()){
            PopAns(st);
            continue;
        }

        const int front_value = inSeq[i];
        

        while(cur_idx>i){
            cout<<"a\n";
            bool flag = false;
            int min = __INT32_MAX__;
            for(int j=cur_idx; j>i; j--){
                if(inSeq[j] < min && front_value > inSeq[j]){
                    //PushAns(st, inSeq[j]);
                    min = inSeq[j];
                    cur_idx = j;
                    flag = true;
                }
            }
            if(!flag){
                break;
            }
            //최소값 min과 그 idx를 얻음. 그 idx부터 다시 시작
            inSeq[cur_idx] = __INT32_MAX__;
            PushAns(st, min);
            cout<<"front_value: "<<front_value<<"\n";
            cout<<"min: "<<min<<'\n';
            cout<<"cur_idx: "<<cur_idx<<", i:"<<i<<'\n';
            Print(st);
        }


        PushAns(st, front_value);
        PopAns(st);

        cout<<"\n\n";
        for(int l=0; l<N; l++){
            cout<<inSeq[l]<<"  ";
        }
        cout<<"\n\n";

        
        

    }

    Print(st);
    delete[] inSeq;
    delete[] constQues;
} */