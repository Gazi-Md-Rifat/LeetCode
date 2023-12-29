class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) { // time O(n long n)
        int move = 0;
        sort(seats.begin(), seats.end()); // O(n long n);
        sort(students.begin(), students.end()); // O(n long n);
        int n = seats.size(); // seats size and students size same;
        for (int i = 0; i < n; i++){ // O(n).
            move = move + abs(seats[i] - students[i]);
        }
        return move;
    }
};