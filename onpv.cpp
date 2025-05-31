#include <iostream>
using namespace std;

int main(){
    int n, a[50], sum =0;
    cout << "moi nhap:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a[" << i << "]";
        cin>>a[i];
        if(a[i] % 2 == 0)
            sum+=a[i];
    }
    cout << sum << endl;
}