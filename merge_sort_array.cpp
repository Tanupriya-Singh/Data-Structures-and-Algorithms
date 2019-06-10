/**
Given two sorted arrays of Size M and N respectively, merge them into a third array such that the third array is also sorted.
**/


void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){

    int i = 0, j = 0, k = 0;
    //Traverse through both the arrays
    while(i < size1 && j < size2){
      //From the two arrays, copy the smaller element to the new array
        if(arr1[i] <= arr2[j]){
            ans[k] = arr1[i];
            i++;
            k++;
        }
        else{
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
    //Add rest of the elements from array 1
    while(i < size1){
        ans[k] = arr1[i];
            i++;
            k++;
    }
    //Add rest of the elements from array 2
    while(j < size2){
        ans[k] = arr2[j];
            j++;
            k++;
    }


}
