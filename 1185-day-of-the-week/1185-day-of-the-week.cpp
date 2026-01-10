class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        // Array of day names
        vector<string> days = {"Sunday", "Monday", "Tuesday", "Wednesday", 
                               "Thursday", "Friday", "Saturday"};
        
        // Adjust month and year for Zeller's formula
        // January and February are counted as months 13 and 14 of the previous year
        if (month < 3) {
            month += 12;
            year--;
        }
        
        // Zeller's Congruence formula
        int q = day;
        int m = month;
        int k = year % 100;  // Year of century
        int j = year / 100;  // Century
        
        int h = (q + (13 * (m + 1) / 5) + k + (k / 4) + (j / 4) - (2 * j)) % 7;
        
        // Convert Zeller's result to our day array index
        // Zeller's: 0=Saturday, 1=Sunday, 2=Monday, ...
        // We need: 0=Sunday, 1=Monday, ..., 6=Saturday
        int dayIndex = (h + 6) % 7;
        
        return days[dayIndex];
    }
};