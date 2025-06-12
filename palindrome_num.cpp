#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "The number is : ";
    cin >> n;
    int rev_num = 0;
    int dup = n;
    while(n > 0){
        int last_digit = n % 10;
        rev_num = (rev_num * 10) + last_digit;
        n = n / 10;
    }
    cout << " The reverse number is : " << rev_num << endl;
    if(rev_num == dup){
        cout << "The number is a palindrome number !";
    }
    else{
        cout << "The number is not a palindrome number !";
    }
    return 0;
}