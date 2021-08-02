#include "codeblock.h"

int minJumps ( vector <int> &arr){
    int n = arr.size();
    if(n == 0 || arr[0] == 0)
        return inf;
    
    vector<int> res(n);
    res[0] = 0;

    for(int i =1; i < n; i++){
        res[i] = inf;
        for(int j =0; j < i; j++){
            if(arr[j] >= i-j){ // to check whether jump possible or not
                if(1+res[j] < res[i]){
                    res[i] = 1 + res[j];
                }
            }
        }
    }

    // print(res);

    return res[n-1];
}

int main()
{
    vector<int> arr = input();
    cout << "Min No of Jumps reqd to reach end : " << minJumps(arr);
}