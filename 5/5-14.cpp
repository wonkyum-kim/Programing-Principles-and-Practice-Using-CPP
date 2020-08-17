#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<int> v(7);

    std::vector<std::vector<std::string>> days{ {"Sun", "sun", "Sunday", "sunday"}, 
        {"Mon", "mon", "Monday", "monday"}, 
        {"Tue", "tue", "Tuesday", "tuesday"}, 
        {"Wen", "wen", "Wednesday", "wednesday"},
        {"Thu", "thu", "Thursday", "thursday"},
        {"Fri", "fri", "Friday", "friday"},
        {"Sat", "sat", "Saturday", "saturday"} };
    

    // days.size() == 7 !!

    std::string s;
    int n = 0;
    while (std::cin >> s >> n) 
    {

        for (int i = 0; i < days.size(); i++) 
        {
            auto result = std::find(days[i].begin(), days[i].end(), s);
            if (result != days[i].end())
                v[i] += n;
        }
    }
    for (int i = 0; i < days.size(); i++)
        std::cout << days[i][2] << " sum of num : " << v[i] << '\n';
}
