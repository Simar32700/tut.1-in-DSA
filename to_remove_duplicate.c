#include<stdio.h>

int main(){
    int count=9;

    int arr[]={6,2,4,6,8,6,5,4,1};

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            for(int k=i;k<count-1;k++){
                arr[k]=arr[k+1];
            }
            count--;
        }
       }
    }

    for(int i=0;i<count;i++){
        printf("%d",arr[i]);
    }
    return 0;
}