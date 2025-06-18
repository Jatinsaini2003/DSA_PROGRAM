#include<bits/stdc++.h>
using namespace std;
// parameterized way to sum using recursion
void print(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    }
    print(i-1,sum+i);
}
// fumctional way to sum using recursion
int print1(int n){
    if(n == 0){
        return 0;
    }
    return n + print1(n-1);
}
// factorial of n using recursion
int factorial(int n){
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int n;
    cout << "The number are :";
    cin >> n;
    cout << (factorial(n));
    return 0;
}