    #include <bits/stdc++.h>
    using namespace std;

    /*
    odd : 1 odd
    even : 2 odd , 1 even
    */
    int main()
    {
        int n;
        cin >> n;
        vector<int>odd,even;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >>x;
            if(x%2)odd.push_back(x);
            else even.push_back(x);
        }
        int teams=0;
        int oddteam = odd.size();
        int eventeam = even.size();
        if(oddteam<=eventeam)
        {
            if(eventeam > oddteam +1)
            {
                cout << 2 * oddteam + 1;
                return 0;
            }
            cout << 2 * oddteam;
            return 0;
        }
        teams += 2 * eventeam;
        oddteam -= eventeam;
        teams += 2*(oddteam / 3);
        oddteam %=3;
        if(oddteam == 2)teams++;
        else if(oddteam == 1) teams--;
        cout << teams;
        return 0;

    }