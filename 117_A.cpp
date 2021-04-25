#include <iostream>
#include <random>


using namespace std;

int main(){
    int A, B;
    cin >> A >> B;

    int sum = 0;
    
    //contents of A
    for(int i = 1; i < A; ++i){
        cout << i << " ";
        sum += i;
    }
    //contents of B
    for(int i = 1; i < B; ++i){
        cout << -i << " ";
        sum -= i;
    }

    if (sum == 0 ){
        cout << A << " " << -B << endl;
    }else if(sum > 0){
        cout << A << " ";
        sum += A;
        cout << -sum << endl;
    }else{
        cout << -B << " ";
        sum -= B;
        cout << -sum << endl;
    }


}
