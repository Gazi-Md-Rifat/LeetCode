class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        int sum = 0;
        for (int i = 0; i < operations.size(); i++){
            string s = operations[i];
            if (s == "+"){
                int n = record[record.size() - 1] + record[record.size() - 2];
                record.push_back(n);
                sum = sum + n;
            }
            else if (s == "D"){
                int n = record.back() * 2;
                record.push_back(n);
                sum = sum + n;
            }                
            else if (s == "C"){
                sum = sum - record.back();
                record.pop_back();
            }
            else {
                int n = stoi(s);
                record.push_back(n);
                sum = sum + n;
            }
        }
        // i can sum all recond using loop for travel final record array.here...
        return sum;
    }
};