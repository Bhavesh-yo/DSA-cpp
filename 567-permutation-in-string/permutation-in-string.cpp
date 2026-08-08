class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length()) {
            return false;
        }

        int count1[26] = {0};
        int count2[26] = {0};

        // s1 ka frequency count
        for (int i = 0; i < s1.length(); i++) {
            count1[s1[i] - 'a']++;
        }

        // s2 ki first window ka frequency count
        for (int i = 0; i < s1.length(); i++) {
            count2[s2[i] - 'a']++;
        }

        // FIRST WINDOW CHECK
        bool same = true;

        for (int j = 0; j < 26; j++) {
            if (count1[j] != count2[j]) {
                same = false;
                break;
            }
        }

        if (same) {
            return true;
        }

        // Ab window slide karo
        int window = s1.length();

        for (int i = window; i < s2.length(); i++) {

            // Naya character add
            count2[s2[i] - 'a']++;

            // Purana character remove
            count2[s2[i - window] - 'a']--;

            same = true;

            // Counts compare
            for (int j = 0; j < 26; j++) {
                if (count1[j] != count2[j]) {
                    same = false;
                    break;
                }
            }

            if (same) {
                return true;
            }
        }

        return false;
    }
};