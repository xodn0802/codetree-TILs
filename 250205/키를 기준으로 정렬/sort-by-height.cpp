#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int n;
string name;
int height;
int weight;

class student{
    public:
        string name;
        int height;
        int weight;

        student(string name = "", int height = 0, int weight = 0){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(student a, student b){
    return a.height < b.height;
}
int main() {
    cin >> n;

    student* s = new student[n];
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> height;
        cin >> weight;
        s[i] = student(name,height,weight);
    }

    sort(s,s + n, cmp);

    for(int i = 0; i < n; i++){
        cout << s[i].name << " " << s[i].height << " " << s[i].weight << endl;
    }

    



    // Write your code here!

    return 0;
}