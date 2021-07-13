
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
    int discount;
    
public:
    product() {};// this is the default constructor
    // own constructor
    product(string n, int c)
    {
        name = n;
        cost = c;
        
    }
    
    product(string n, int c, int d)
    {
        name = n;
        cost = c;
        discount = d;
    }

    void display()// this function is hiden from the rest of the class unless anything is written above it like public etc..
    {
        cout<<name<<" "<<cost<<" "<<discount<<nn;// for discount we will get automatically any random value as discount is not used anywhere
    }
    

//    void display2()// this function is accessible only inside the class
//    {
//        display();
//    }
    
    void setCost(int c) // this is called a setter
    {
        if(c<0) return ;// using all this we can set business logic
        cost = c;
    }
    
    int getCost() { // this called a getter
        return cost;
    }
    
};



int main()

{
//    product Iphone("Iphone",189000);
//    product shirt("Blue man shirt",5000);
    product Iphone("Iphone 12 pro max",189000,30);// this will only work when we have declared a defaut constructor otherwise we will be writing the below line of code
    
    //product Iphone("Iphone 12 pro max -", 189000);// calls the default constructor
    
    product shirt("blue means shirt ", 2000);
    
    //shirt.name = "blue mens shirt";
//    Iphone.display();
    shirt.display();
    shirt.setCost(3000);// this shows that we can access cost using functions
    shirt.display();
    shirt.getCost();
    Iphone.display();
    cout<<sizeof(Iphone)<<" "<<sizeof(shirt);
    cout<<nn;
    //cout<<shirt.name<<nn; this line of code will throw an error
    //cout<<shirt.name<<nn;
    //shirt.display2();
    //Iphone.display2();
    cout<<"Ended";
    cout<<nn;
    return 0;
    
}


