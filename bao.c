#include "stdio.h"

int caculatorS(int u1)
{
    static int pre_pos = 0;
    int x1 = 0;
    int x2 = 3;
    int x3 = 5;
    int x4 = 6;
    int s = 0;
    while(1)    // thoát khi pre_pos khác 1 và khác 0
    {
        switch (pre_pos)
        {
        case 0:
            while(u1 != x2)     // chờ u1 = x2
            {
                s = x2;
            }
            s = x3;
            pre_pos++;

            break;
            
        case 1:
            while (u1 != x3) // chờ u1 = x3
            {
                s = x3;
            }
            s = x4;
            pre_pos++;

            break;
        default:
            return -1;  // Thoat khởi vòng lặp - thoát khỏi hàm
            break;
        }        
    }
}
int main()
{

    return 0;
}