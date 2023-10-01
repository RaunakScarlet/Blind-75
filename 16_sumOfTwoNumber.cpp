class Solution
{
public:
    int getSum(int a, int b)
    {
        int sum = a ^ b;
        int carry = a & b;
        while (carry != 0)
        {
            carry = carry << 1;
            int newsum = sum ^ carry;
            carry = sum & carry;
            sum = newsum;
        }
        return sum;
    }
};