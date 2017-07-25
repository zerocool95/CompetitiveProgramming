//Akash basudevan
//Range minimum query by Sparse Table
#include <iostream>

using namespace std;

class SpareTableRmq
{
    long long n;
    long long **rmq;     //main sparse table
    long long *logTable;  // log values table for ease of access

public :
    SpareTableRmq(long long arr[],long long n)
    {
        this->n = n;
        rmq = new long long * [n+1];
        logTable = new long long[n + 5];

        for (int i = 2; i <= n; i++)
          logTable[i] = logTable[i >> 1] + 1;

        for (int i = 0; i < n; i++)
            rmq[i] = new long long[logTable[n] + 1];

        for (int i = 0; i < n; ++i)
            rmq[0][i] = i;

        for (int k = 1; (1 << k) < n; ++k)
        {
            for (int i = 0; i + (1 << k) <= n; i++)
            {
                long long x = rmq[k - 1][i];
                long long y = rmq[k - 1][i + (1 << k - 1)];
                rmq[k][i] = arr[x] <= arr[y] ? x : y;
            }
        }

    }

    long long query(long long i, long long j,long long arr[])   //get the min value between a range
    {
        long long k = logTable[j-i];
        long long x = rmq[k][i];
        long long y = rmq[k][j - (1 << k) + 1];

        return min(arr[x],arr[y]);
    }
};

int main()
{
    long long a[10]={5,4,3,2,5,1,3,15};  //sample array
    SpareTableRmq  obj(a,10LL);
    cout<<obj.query(0,10,a)<<endl;         //returns 1
    return 0;
}
