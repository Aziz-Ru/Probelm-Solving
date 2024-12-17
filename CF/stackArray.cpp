#include<iostream>
using namespace std;
class Stack
{
    int size;
public:
   int a[10000];
   bool push(int x);
   int pop();
   int top();
   bool empty();
    
};
bool Stack::push(int x){
    a[++size]=x;
    return true;
}
int Stack:: pop(){
    if(size<=0){
        cout<<"empty";
        return false;
    }
    else{
        
        return a[size--];
    }
}
int Stack::top(){
    return a[size];
}
bool Stack::empty(){
    return (size<=0);
}
 int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    class Stack s;
    s.push(6);
   // cout<<s.top()<<' ';
    s.push(8);
   // cout<<s.top()<<' ';
    s.push(100);
   // cout<<s.top()<<' ';
    while(!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
    return 0;
}