#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int merge(ll int a[] , ll int b[], ll int l,ll int mid,ll int h)
{
    ll int i,j,k,invc;
    i = l;
    j = mid;
    k = l;
    invc = 0;
    while(i <= mid && j <= h){
        if(a[i] < a[j]){
            b[k++] = a[i++];
        }else{
            b[k++] = a[j++];
            invc += mid - i;
        }
    }
    for(; i<= mid; i++){
        b[k++] = a[i];
    }
    for(; j<= h; j++){
        b[k++] = a[j];
    }
    for(int i =l; i <=h; i++){
        a[i] = b[i];
    }

    return invc;
}
ll int mergesort_modified(ll int arr[],ll int b[],ll int l ,ll int h)
{
    int invc = 0;
    if(l < h){
        int mid = l+h /2;
        invc += mergesort_modified(arr,b,l,mid);
        invc += mergesort_modified(arr,b,mid+1,h);
        invc += merge(arr,b,l,mid,h);
    }
    return invc;
}
int main()
{
    ll int arr[] = {2, 4, 1, 3, 5};
    ll int b[5];
    cout << mergesort_modified(arr,b,0,4);
}