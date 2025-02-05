#include <iostream>
#include <string>
#include <algorithm>

#define MAXN 100
using namespace std;



int n;
string name;
int korean;
int english;
int math;

class Score{
    public:
        string name;
        int korean;
        int english;
        int math;

        Score(string name, int korean, int english, int math){
            this->name = name;
            this->korean = korean;
            this->english = english;
            this->math = math;
        }
        Score(){}

};

bool cmp(Score a, Score b){
    if(a.korean == b.korean){
        if(a.english == b.english){
            return a.math > b.math;
        }
        return a.english > b.english;
    }
    return a.korean > b.korean;
}

int main() {
    cin >> n;

    Score s[100];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> korean;
        cin >> english;
        cin >> math;
        s[i] = Score(name,korean,english,math);
    }

    sort(s,s+n,cmp);

    for(int i = 0; i < n; i++){
        cout << s[i].name << " " << s[i].korean << " " << s[i].english << " " << s[i].math << endl;

    }

    // Write your code here!

    return 0;
}