#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
    }
    stack<int> st;
    int l[n + 5], r[n + 5];
    for (int i = 1; i <= n; i++)
    {
        while (!st.empty() && h[st.top()] >= h[i])
            st.pop();
        if (st.empty())
            l[i] = 1;
        else
            l[i] = st.top() + 1;
        st.push(i);
    }
    while (st.size())
        st.pop();
    for (int i = n; i >= 1; i--)
    {
        while (st.size() && h[st.top()] >= h[i])
            st.pop();
        if (st.empty())
            r[i] = n;
        else
            r[i] = st.top() - 1;
        st.push(i);
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans = max(ans, (r[i] - l[i] + 1) * h[i]);
    }
    cout << ans;
    return 0;
}