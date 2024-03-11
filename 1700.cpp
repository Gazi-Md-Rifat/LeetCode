class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> stu;
        stack<int> sand;

        for (int i = 0; i < students.size(); i++){ // student.size() == sandwiches.size()
            stu.push(students[i]);
            sand.push(sandwiches[sandwiches.size() - 1 - i]);
        }

        while (!stu.empty()){
            int n = stu.size();
            for (int i = 0; i < n; i++){ // travel one time for lunch.
                if (stu.front() == sand.top()){ // if lunch we remove the sudent and sandwhices
                    stu.pop();
                    sand.pop();
                }
                else { // if not thats mean lefted student can't lunch because they are not fullfiled condition.so we send to end of the student list for check next student condition..
                    stu.push(stu.front());
                    stu.pop();
                }
            }
            if (stu.size() == n){ // after lunch condition check if my student are not removed thats mean my prev student size == current sudent.so we can return.lefted sutdent cann't lunch.
                break;
            }
        }
        return stu.size();
    }
};