#include <iostream>
#include <random>


using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;
    random_device rseed;
    mt19937 rng(rseed());
    uniform_int_distribution<int> dist(-10^9, 10^9);
    int arr[a + b];
    if(a == 1 && b == 1){
        arr[0] = 1;
        arr[1] = -1;
    }
    else{
        for(int i = 0; i < a + b; i++){
            int num = dist(rng);
            for(int j = 0; j < i; j++){
                if(arr[j] == num){
                    num = dist(rng);
                }
            }
        arr[i] = num;
        cout << arr[i] << "\n";
        }
    }
    
    
}
