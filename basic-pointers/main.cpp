#include <iostream>   

int main() {
    int num;
    std::cout << "Enter how many elements array consists of: ";
    std::cin >> num;

    int* arr = new int[num];

    std::cout << "Enter number 1: ";
    std::cin >> arr[0];
    int* maxpointer = &arr[0];

    for(int i = 1; i < num; i++){
        int temp;
        std::cout << "Enter number " << (i+1) << ": ";
        std::cin >> temp;
        arr[i] = temp;
        
        if(temp > *maxpointer){
            maxpointer = &arr[i];
        }
    }
    std::cout << maxpointer << std::endl; // shows the referenced memory
    std::cout << *maxpointer << std::endl; // shows the dereferenced number to check if everything is allright
    delete[] arr;
    return 0;
}