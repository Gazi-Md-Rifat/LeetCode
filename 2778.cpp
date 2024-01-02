class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (int i = 0; i < details.size(); i++){
            string data = details[i];
            int age = stoi(data.substr(12, 14));
            if (age > 60){
                count++;
            }
        }
        return count;
    }
};