using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RomanToInt;
//Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
public class Solution
{
    public int RomanToInt(string s)
    {
        Dictionary<char, int> romans = new Dictionary<char, int>();
        int prev = 0;
        int total = 0;
        romans.Add('I', 1);
        romans.Add('V', 5);
        romans.Add('X', 10);
        romans.Add('L', 50);
        romans.Add('C', 100);
        romans.Add('D', 500);
        romans.Add('M', 1000);
        foreach (var item in s.ToArray().Reverse())
        {
            //(IIIVV rev MCMXCIV VICXMCM)
            if (prev == 0)
            {
                total = romans[item];
                prev = total;
            }
            else
            {
                if (romans[item] < prev)
                {
                    total = total - romans[item];
                }
                else
                {
                    total = total + romans[item];
                }
                prev = romans[item];
            }
        }
        return total;
    }
}
