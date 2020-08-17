#include <iostream>
#include <string>

constexpr int fac(int n)
{
	return n > 1 ? n * fac(n - 1) : 1;
}

constexpr int permutation(int a, int b)
{
    return fac(a) / fac(a-b);
}

constexpr int combination(int a, int b)
{
    return permutation(a, b) / fac(b);
}

int main()
{
    std::string s;
    int a = 0, b = 0;
    ONE:
    std::cin >> s >> a >> b;
    int ans = 0;
    
    if(a < b)
    {
        std::cout << "a must same or bigger than b\n";
        goto ONE;
    }
    
    if(s == "permutation")
        ans = permutation(a, b);
    else if(s == "combination")
        ans = combination(a, b);
    else
    {
        std::cout << "write again\n";
        goto ONE;
    }
    
    std::cout << ans;
}	
