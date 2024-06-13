#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minMovesToSeat(vector<int>& seats, vector<int>& students) {
    int ans = 0;
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    for(int i = 0; i < seats.size(); i++) {
        ans = ans + abs(seats[i] - students[i]);
    }
    return ans;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> seats(n);
    vector<int> students(n);
    for(int i = 0; i < n; i++) {
        cin >> seats[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> students[i];
    }
    cout << minMovesToSeat(seats, students);
    return 0;
}