#include <iostream>   

void reverseArray(int* arr,int size){
    // starting point
    std::cout << "Start:";
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }

    //arithmetic way of swapping two vars
    for(int i = 0; i < size/2; i++){
        int temp = size - i - 1; 
        arr[i] = arr[i] + arr[temp];
        arr[temp] = arr[i] - arr[temp];
        arr[i] = arr[i] - arr[temp];
    }

    // final result
    std::cout << "\nResult:";
    for(int i = 0; i < size; i++){
        std::cout << arr[i] << " ";;
    }
};

int main() {
    int num;
    std::cout<<"Enter how long the array is: ";
    std::cin>>num;

    int* arr = new int[num];

    //makes an array reaching from 0 to num-1 just for demonstartion purposes
    for(int i = 0; i < num; i++){
        arr[i] = i;
    }
    
    reverseArray(arr, num);

    //prevents memory leak
    delete[] arr;

    return 0;
}

