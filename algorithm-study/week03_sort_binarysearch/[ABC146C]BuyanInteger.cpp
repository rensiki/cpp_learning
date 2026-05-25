#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool CalculateYen(long long a,
     long long b, long long val, long long x){
    long long temp =a*val + b*to_string(abs(val)).length();
    /*cout<<"cal func test: temp,a,b,val ->"<<temp<<", "
    << a <<", "<<  b <<", "<<  val <<'\n';*/
    return x >= temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b, x;
    cin>>a>>b>>x;

    //cout<<"test: "<<a+b<<'\n';

    if(a+b>x){
        cout<<0<<'\n';
        return 0;
    }

    long long lo =1;
    long long hi = 1000000000;
    while(lo<hi){
        long long mid = lo + (hi-lo)/2;
        if(CalculateYen(a, b, mid, x)){
            lo = mid+1;
        }
        else{
            hi = mid -1;
        }
        
    }
    cout<<lo-1<<'\n';

    
}

/*#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

bool CalculateYen(long long a,
     long long b, long long val, long long x){
    
    return x >= temp;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b, x;
    cin>>a>>b>>x;

    //cout<<"test: "<<a+b<<'\n';

    if(a+b>x){
        cout<<0<<'\n';
        return 0;
    }

    long long lo =1;
    long long hi = 1000000000;
    while(lo<hi){
        long long mid = lo + (hi-lo+1)/2;
        if(CalculateYen(a, b, mid, x)){
            lo = mid;
        }
        else{
            hi = mid-1;
        }
        
    }
    cout<<lo<<'\n';

    
}*/