#include <iostream>
#include <random>


using namespace std;


void check_sim(int arr[],int n,int num, bool flag){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            flag = false;
            create_num(arr[], n, num, flag)
        }
    }
}

void create_num(int arr[],int n,int num, bool flag){
    
}



int main(){
    int a, b;
    cin >> a;
    cin >> b;
    int n = a + b;
    random_device rseed;
    mt19937 rng(rseed());
    uniform_int_distribution<int> dist(-10^9, 10^9);
    int arr[a + b];
    
    bool flag = true;
    if(a == 1 && b == 1){
        arr[0] = 1;
        arr[1] = -1;
    }
    else{
        for(int i = 0; i < a + b; i++){
            int num = dist(rng);
            check_sim(arr[], i, num, flag);
        arr[i] = num;
        cout << arr[i] << "\n";
        }
    }
    
    
}
