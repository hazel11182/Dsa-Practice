#include<iostream>
using namespace std;
int main(){
    int a[1000][1000]={0};
    int m,n;
    cout<<"enter number of rows";
    cin>>m;
    cout<<"enter numbe rof columns";
    cin>>n;
    int val=1;
    for(int r=0;r<m;r++){
        for(int c=0;c<n;c++){
            a[r][c]=val;
            val=val+1;
            cout<<a[r][c]<<" ";
        }
            cout<<endl;      
    }

    for(int c=0;c<n;c++){

        if(c%2==0){
            for(int r=0;r<m;r++){
        
                cout<<a[r][c]<<" ";
                cout<<endl;
            }
        }
        else{
            for(int r=m-1;r>=0;r--){
                cout<<a[r][c]<<" ";
                cout<<endl;    
            }
        }
        
    }
 
}