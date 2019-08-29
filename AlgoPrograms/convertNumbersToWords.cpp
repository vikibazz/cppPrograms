#include <iostream>
#include <string.h>

using namespace std;

void Convert_To_Words(char *num)
{
    cout<<num<<" : ";
    int length = strlen(num);
    
    if(length == 0)
    {
        cout<<"null";
    }
    
    if(length > 4)
        {
            cout<<"Numbers greater than the length four is not allowed";
        }
    
    string single_digit []   = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    string ten_value []      = {"","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string ten_multiples []  = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string exponentiation [] = {"hundred","thousand"};
    
    if(length == 1)
    {
        cout<<single_digit[num[0] - '0']<<"\n\n";
        return;
    }
    
    int x = 0;
    
    while(x < strlen(num))
    {
        if(length >= 3)
        {
            if(num[x] - '0' != 0)
            {
            cout<<single_digit[num[x] - '0']<<" ";
            cout<<exponentiation[length - 3]<<" ";
            }
            --length;
        }
        else
        {
            if(num[x] - '0' == 1)
            {
                int sum = num[x] - '0' + num[x + 1] - '0';
                cout<<ten_value[sum]<<"\n\n";
                return;
            }
            else
            {
                int i = num[x] - '0';
                
                if(i > 0)
                {
                    cout<<ten_multiples[i]<<" ";
                }
                else
                {
                    cout<<" ";
                }
                ++x;
                
                if(num[x] - '0' != 0)
                {
                    cout<<single_digit[num[x] - '0'];
                }
            }
        }
        ++x;
    }
    cout<<"\n\n";
}

int main() 
{
    Convert_To_Words("9989");
    Convert_To_Words("12");
    Convert_To_Words("20");
    Convert_To_Words("1247");
    Convert_To_Words("24");
    Convert_To_Words("120");
    Convert_To_Words("47");
    Convert_To_Words("5");
    Convert_To_Words("89");
    Convert_To_Words("17");
    Convert_To_Words("15");
    Convert_To_Words("10");
    Convert_To_Words("11");
    Convert_To_Words("13");
    Convert_To_Words("18");
    Convert_To_Words("19");
    
	return 0;
}