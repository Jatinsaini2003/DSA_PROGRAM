#include<bits/stdc++.h>
using namespace std;
//print 1 to n using recursion
void print(int i, int n){
    if(i > n){
        return;
    }
    else{
        cout << i << endl;
    }
    print(i+1,n);
}
// print n to 1 using recursion
void print1(int i, int n){
    if(i < 1){
        return;
    }
    else{
        cout << i << endl;
    }
    print1(i-1,n);
}
// print 1 to n using recursion from backtrack
void print2(int i, int n){
    if( i < 1){
        return;
    }
    print2(i-1,n);
    cout << i << endl;
}
// print n to 1 using recursion from backtrack
void print3(int i, int n){
    if(i > n){
        return;
    }
    print3(i+1,n);
    cout << i << endl;
}
int main(){
    int n;
    cout << "The number is :";
    cin >> n;
    print3(1,n);
    return 0;
}