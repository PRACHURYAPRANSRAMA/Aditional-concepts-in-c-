//
//  main.cpp
//  Aditional concepts in c++
//
//  Created by PRACHURYA PRAN SARMA'SVELAR on 16/05/21.
//

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



class product
{// this is a blueprint
    string name;// data members
    int cost;
    
    void display()// this function is hiden from the rest of the class unless anything is written above it like public etc..
    {
        cout<<name<<" "<<cost<<nn;
    }
    
    void display2()// this function is accessible only inside the class
    {
        display();
    }
    
};



int main()

{
//    product Iphone("Iphone",189000);
//    product shirt("Blue man shirt",5000);
    product Iphone;
    product shirt;
//    Iphone.display();
//    shirt.display();
    //cout<<shirt.name<<nn; this line of code will throw an error
    
    
}
