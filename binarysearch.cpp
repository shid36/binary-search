#include<iostream>
using namespace std;
int main (){
    int left,right,mid,x,n;
    
    int A[]={10,20,30,40,50,60,70,80,90,100};
    left = 0;
    n = sizeof(A)/sizeof(A[0]);
    right = n-1;
   
    cin >> x;
    while (left<=right){
        mid= (left+right)/2;
        if (A[mid]==x){
            cout <<mid <<endl;
            return 0;
        }
        if (A[mid]>x){
            right=mid+1;
        }
        else {
            left =mid -1;
        }
    }
    cout << "not found"<< endl;
    return 1;


}