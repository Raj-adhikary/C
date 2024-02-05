#include<iostream>
using namespace std;
int main(){

int n;
cout<<"input the array size = ";
cin>>n;
int arr[n];
cout<<"input the elements = ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int max1=arr[0],max2=arr[0],max3=arr[0],index1,index2,index3;
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    if(max1<arr[i]){
        max1=arr[i];
        index1=i;
    }
    
}
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    if(index1==i){
        continue;
    }
    else if(max2<arr[i]){
                max2=arr[i];
                index2=i;
    }
    
}
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    if(index1==i||index2==i){
        continue;
    }
    else if(max3<arr[i]){
                max3=arr[i];
                index3=i;
    }
    
}

cout<<"max1 = "<<max1<<endl<<"index1 = "<<index1<<endl;
cout<<"max2 = "<<max2<<endl<<"index2 = "<<index2<<endl;
cout<<"max3 = "<<max3<<endl<<"index3 = "<<index3<<endl;

    



}
