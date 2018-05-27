#include<iostream>
using namespace std;

#define M 10
#define N 10

find_max_sum(int input[M][N])
{
    int tmp[100], n, x1, x2;
    int cur, max_sum, fx1, fx2, fy1, fy2;
    int i,j,k;
    fx1 = fx2 = fy1 = fy2 = max_sum = cur = -1;

    for (i=0; i< M; i++)
    {
        for(k=0; k<N; k++)
            tmp[k] = 0;

        for (j=i; j<M; j++)
        {
            for(k=0; k<N; k++)
                tmp[k] += input[j][k];
            kadane(tmp, N, x1, x2, cur);

            if (cur > max_sum)
            {
                fy1 = x1;
                fy2 = x2;
                fx1 = i;
                fx2 = j;
                max_sum = cur;
            }
        }
    }
    cout << "max Sum = " << max_sum << " from (" << fx1 << "," << fy1 << ") to ("
        << fx2 << "," << fy2 << ")" << endl;
}
