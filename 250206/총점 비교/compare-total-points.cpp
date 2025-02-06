#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;
string name;
int score1;
int score2;
int score3;

class Student{
    public:
    string name;
    int score1;
    int score2;
    int score3;

    Student(string name, int s1,int s2, int s3){
        this->name = name;
        this->score1 = s1;
        this->score2 = s2;
        this->score3 = s3;
    }
    Student(){}
};

bool cmp(Student a, Student b){
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    cin >> n;

    Student S[10];

    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> score1;
        cin >> score2;
        cin >> score3;
        S[i] = Student(name,score1,score2,score3);
    }

    sort(S,S + n,cmp);

    for(int i = 0; i < n; i++){
        cout << S[i].name << " " << S[i].score1 << " " << S[i].score2 << " " << S[i].score3 << endl; 
    }

    // Write your code here!

    return 0;
}