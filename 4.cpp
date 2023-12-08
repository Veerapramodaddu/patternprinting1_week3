#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the lines : ";
    cin>>n;
    for(int i=1;i<=n+1;i++){
        if(i%2==0){
        for(int j=1;j<=i;j++){
            cout<<char(64+j);
        }
        }
        else{
            for(int k=1;k<=i;k++){
                cout<<k;
            }
        }
        cout<<endl;
    }

}