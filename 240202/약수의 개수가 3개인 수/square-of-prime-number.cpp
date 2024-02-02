#include <iostream>
using namespace std;
int main() {
    int s, e;
    int sum = 0;
    cin >> s >> e;
    for(int i = s; i <= e; i++){
        int sum_2 = 0;
        for(int j = 1; j <= i; j++){
            
            if(i % j == 0){
                sum_2++;
            }


        }
        if(sum_2 == 3){
            sum++;
        }
    }
    cout << sum;

    // 여기에 코드를 작성해주세요.
    return 0;
}