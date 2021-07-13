#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include<math.h>

using namespace std;

#define pb     push_back
#define nn     endl
#define pll    pair<int,int>
#define ll     long long int
#define vll    vector<int>
#define all(a) (a).begin(),(a).end()
#define x       first
#define y      second
#define sz(x)  (int)x.size()
#define hell   1000000007
#define lbnd   lower_bound
#define ubnd   upper_bound
#define bs     binary_search
#define mi     map<int,int>
#define gcd(a,b)  __gcd((a),(b))
#define lcm(a,b)  ((a)*(b)) / gcd((a),(b))
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ios     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie

void hello()
{
    cout<<"hello world"<<nn;
}

int fun(int n){
    cout<<"fun with"<<n<<nn;
    return n;
}

void print(int v)
{
    cout<<"Value is "<<v<<nn;
}


void for_each(vector<ll>&v,void(*func)(int))//here we are passing a function as a parameter to other function
{
    for(int value:v)
    {
        func(value);
    }
}



int main()

{
//    int i=10;
//    int *p=&i;
//    cout<<p<<nn;
//    cout<<*p<<nn;
//    void(*ptr)()=hello;
//    //auto ptr =hello;
//    ptr();
//    cout<<ptr<<nn;
//    cout<<*ptr<<nn;
//
//    int(*fptr)(int)=fun;
//    fptr(7);
    
    
    vector<ll> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    
    
    for_each(v,print);
   // for_each(v, fun);
    
    return 0;
}
