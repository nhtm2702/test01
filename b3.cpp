 #include <iostream>
using namespace std;
int main()
{
    int n;
    long int kq=0;
    cin >> n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i];
        kq+=a[i];
    }
    cout << kq;
    return 0;
}
