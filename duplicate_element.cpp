//Return the duplicate element in an array

// arr - input array
// size - size of array

int MissingNumber(int arr[], int size){

    int ans, i;
    int b[10000000] = {0};
    for(i = 0 ;i < size; i++){
        int x = arr[i];
        b[x] += 1;
    }
    for(i = 0 ;i < size-1; i++){
        if(b[i] > 1){
            ans = i;
            return ans;
        }
    }

}
