#include<iomanip>
#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<string>
#include <iterator>
#include <map>
#include<math.h>
#include<memory>
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




struct player//in struct everything is public but in classes we have different visibility modifiers
{
    int a,b;
    void display(){
        cout<<a<<" "<<b<<nn;
    }
    ~player(){
        
        cout<<"Player destructed"<<nn;
    }
};

int main()

{
    {
        //player* ptr1=new player;// in this case no destructor will be called,basically in this case we get the complete control to call the player/object
    unique_ptr<player> ptr1=make_unique<player>();// created in heap
        //cout<<ptr1.use_count()<<nn;
    ptr1->a=10;
    ptr1->b=20;
    ptr1->display();
       // unique_ptr<player> ptr2=ptr1; this line will throw an error because unique pointers can not be shared
        // player* ptr1=ptr2 (will also throw an error)
        shared_ptr<player> ptr2=make_shared<player>();
        cout<<ptr2.use_count()<<nn;
        shared_ptr<player> ptr3=ptr2;
        cout<<ptr2.use_count()<<nn;
        cout<<ptr3.use_count()<<nn;
        weak_ptr<player> ptw(ptr3);//=make_weak<player>();
        cout<<ptw.use_count()<<nn;// we can create a weak pointer using another shared pointer or shared pointer
       // cout<<ptw->a<<nn; weak pointer even doenot allow to access the objects
        //expired function is used to check if an object was manually deleted or not
        cout<<ptw.expired()<<" hi"<<nn;// if the output is zero it means false or the object has not been deleted
        //cout<<ptr2.expired()<<nn; not available with shared pointers
    }
    cout<<"final"<<nn;
    unique_ptr<int> p1=make_unique<int>();
    unique_ptr<int[]> p2(new int[9]);
//    shared_ptr<player> ptr2=make_shared<player>();
//    cout<<ptr2.use_count()<<nn;
//    shared_ptr<player> ptr3=ptr2;
//    cout<<ptr2.use_count()<<nn;
//    cout<<ptr3.use_count()<<nn;
//   // weak_prt<player> ptrw= make_weak<player>();
//    //weak_ptr<player> ptrw(new player);
//    weak-ptr<player> ptw(ptr3);
    bool b=true;
    cout<<b<<nn;
    return 0;
}
