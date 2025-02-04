#include <iostream>
#include <string>

#define MAX_N 5

using namespace std;

string codename[MAX_N];
int score[MAX_N];

class aigent{
    public:
        string code;
        int score;

        aigent(string code = "", int score = 0){
            this->code = code;
            this->score = score;
        }
};

int main() {
    aigent aigents[5];
    int minval = 0;
    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
        aigents[i] = aigent(codename[i],score[i]);
    }
    int min = aigents[0].score;
    for(int i = 0; i < 5; i++){

        if(min > aigents[i].score){
            minval = i;
            min = aigents[i].score;
        }
    }

    cout << aigents[minval].code << " " << aigents[minval].score;

    // Write your code here!

    return 0;
}
