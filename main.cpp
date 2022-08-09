#include <iostream>

void input(float arr[],int arrSize){
    std::cout << "Input 15 number: " << std::endl;
    for (int i=0;i<arrSize;++i){
        std::cin >> arr[i];
    }
}

void print(float arr[],int arrSize){

    for (int i=0;i<arrSize;++i){
        std::cout << arr[i]<<"   ";
    }
    std::cout <<std::endl;
}

// Shaker sort
void sort(float arr[],int arrSize){
    bool notSorted= true;
    int count=0;
    while (notSorted) {
        ++count;
        int moves = 0, start = 0, end = arrSize - 1;
        for (int i = start; i <= end; ++i) {
            if (arr[i] < arr[i + 1]) {
//                float a=arr[i],b=arr[i+1];
                std::swap(arr[i], arr[i + 1]);
                ++moves;
            }
        }
        --end;
        for (int i = end; i > 0; --i) {
            if (arr[i - 1] < arr[i]) {
//                float a = arr[i],b=arr[i-1];
                std::swap(arr[i], arr[i - 1]);
                ++moves;
            }
        }
        ++start;
        if (moves==0) notSorted=false;
//        else  std::cout << "Swaps: " << moves << std::endl;
//        print(arr, arrSize);
    }
    std::cout << "Total iterations: " << count <<std::endl;
}
void test(float arr[],int arrSize){
    print(arr,arrSize);
    sort(arr,arrSize);
    print(arr,arrSize);
}
int main() {
    int arrSize = 15;
    float arr[]={1, 15,2,7,3,5,1,9,8,9,14,26,89,22,90};
    test(arr,arrSize);
    input(arr,arrSize);
    sort(arr,arrSize);
    print(arr,arrSize);
    return 0;
}
