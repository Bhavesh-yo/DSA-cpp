class Solution {
public:
    int compress(vector<char>& chars) {

        int i = 0;
        int index = 0;

        while (i < chars.size()) {

            char current = chars[i];
            int count = 0;

            // Count consecutive same characters
            while (i < chars.size() && chars[i] == current) {
                count++;
                i++;
            }

            // Write character
            chars[index++] = current;

            // Write count if greater than 1
            if (count > 1) {
                string cnt = to_string(count);

                for (char ch : cnt) {
                    chars[index++] = ch;
                }
            }
        }

        return index;
    }
};