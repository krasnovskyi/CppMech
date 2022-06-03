
using namespace std;


float median(int a, int b, int c)
{
    float n = sqrt(2 * b * b +
        2 * c * c - a * a) / 2;
    return n;
}

int main()
{
    int a, b, c;
    a = 4;
    b = 3;
    c = 5;

    float ans = median(a, b, c);

    cout << fixed << setprecision(2) << ans;
    return 0;
}