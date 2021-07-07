 if(i >= j)
        return 0;

    long long int res = INT_MAX;
    for(int k =i; k < j; k++){
        long long int temp = solve(arr,k+1,j) + solve(arr,i,k) + arr[i-1]*arr[k]*arr[j];
        res = min(res,temp);
    }   

    return res;