#include<iostream>
using namespace std;

int AP(int n){
    int f_term = 10;
    int diff = 3;
    return (f_term + (n-1) * diff ) ;
}

int main(){
    int num;
    cout << " \n Enter ur number : ";
    cin >> num;
    int ans = AP(num);
    cout << "\n The nth term is : "<<ans;
    return 0;
}