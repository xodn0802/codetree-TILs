#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

class forecaset{
    public:
        string date;
        string day;
        string weather;

        forecaset(string date = "", string day = "", string weather = ""){
            this->date = date;
            this->day = day;
            this->weather = weather;
        }

};

int main() {
    cin >> n;
    int rainday[100];
    int idx = 0;
    int firtst = 0;
    vector<string> chooseday;
    forecaset* forecaset1 = new forecaset[n];
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
        forecaset1[i] = forecaset(date[i],day[i],weather[i]);
    }
    for(int i = 0; i < n; i++){
        if(forecaset1[i].weather == "Rain"){
            rainday[idx++] = i;
        }
    }
    int min_idx = 0;
    string min_data = forecaset1[rainday[0]].date;
    for(int i = 0; i < idx; i++){
        if(forecaset1[rainday[i]].date < min_data){
            min_data = forecaset1[rainday[i]].date;
            min_idx = i;
        }
    }

    cout << forecaset1[rainday[min_idx]].date << " " << forecaset1[rainday[min_idx]].day << " " << forecaset1[rainday[min_idx]].weather;

    
    // Write your code here!

    return 0;
}