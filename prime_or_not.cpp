#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "The number is : ";
    cin >> n;
    int count = 0;
   for(int i = 1; i <= n; i++){
    if(n % i == 0){
        count++;
    }
   }
   if(count == 2){
        cout << "The number is prime number !";
    }
    else{
        cout << "The number is not a prime number !";
    }
    return 0;
}