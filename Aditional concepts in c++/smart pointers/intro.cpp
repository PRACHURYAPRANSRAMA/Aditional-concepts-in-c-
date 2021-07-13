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


int main()

{
    // lets try to create a bucket of integers in heap
    int *ptr = new int(8);
    cout<<*ptr<<nn;
    
    // lets try to create anarray of integers in heap
    int *arr = new int[10];
    
    // initiate an array with all zeroes
    int *zeroes = new int[10]();
    ll i,j;
    for( i=0;i<10;i++)
    {
        cout<<zeroes[i]<<" ";
    }
    // create 2d array in heap
    ll rows,cols;
    cin>>rows>>cols;
    int **grid= new int* [rows];//this will just initialise the primary array
    for(int i=0;i<rows;i++)
    {
        if(i==0)
        {
            grid[i]=new int[1]();
        }
        else{
        grid[i]=new int[cols]();
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<((i==0)?1:cols);j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<nn;
    }
//    int *p;
//    for(i=0;i<1000000000000;i++)
//    {
//        p=new int[10000];
//    }
    int *r = new int(nothrow)[10];
    if(!r){
        cout<<"Memory not allocated"<<nn;
    }
    return 0;
}
