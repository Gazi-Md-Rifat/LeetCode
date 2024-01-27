class Solution {
public:
    int minSteps(string s, string t) {
        int time = 0;
        unordered_map<char, int> track; // {char ,count for same char}
        multimap<char, int> unmatch; // {unmatch char with s string, indext of unmatch char in t string};
        for (int i = 0; i < s.size(); i++){
            track[s[i]]++;
        }      
        for (int i = 0; i < t.size(); i++){ // je je char s and t te exist kore sai sai char replace korar dorkar porbe ne t string a.tai match char gula skip kortece and track theke same char er count -- korlam.
            if (track.find(t[i]) != track.end() && track.find(t[i])->second != 0){
                track[t[i]]--;
            }
            else { // match na hole ta store korlam idx er shate jate next time a oi idx a jaia replace korte pari.
                unmatch.insert({t[i], i});
            }
        }

        for (auto it = unmatch.begin(); it != unmatch.end(); it++){ // match na how char k access korbo and track list a je char er count != 0 tar shate replace korbo and char count -- korbo.. char count == 0 mane holo same char s and t stirng er modde same time ace..
            for (auto tt = track.begin(); tt != track.end(); tt++){
                if (tt->second != 0){ // cahr count  0 na hole oi char k t er unmatch cahr er jaygay assaing korbo and replace time++ korbo and track theke same char er count -- korbo for jate oi char same time t te assing kora hoy noy to deka jabe same char s er theke t string a besi ber hoye gece..
                    t[it->second] = tt->first;
                    track[tt->first]--;
                    time++;
                    break;
                }
            }
        }
        
        return time;
    }
};