 #include <iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=0,i,j,kq;
    cin >> n;
    int a[n][n];
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            cin >> a[i][j];
    for (int i=0;i<n;i++) t1+=a[i][i];
    i=n-1;j=0;
    while (j!=n)
    {
        t2+=a[i][j];
        i--;j++;
    }
    kq=t2-t1;
    if (kq>=0) cout << kq;
    else cout << kq*(-1);
    return 0;
}
