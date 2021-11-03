

#include <iostream>
#include <algorithm>
using namespace std;

class Solution

{

  public:

	void solve()

	{

		string s;

		cin >> s;

		int ans = 0;

		int temp[s.size()];

		for (int i = 0; i < s.size(); i++)

		{

			temp[i] = (int(s[i]) - 96);

			


		}

	

		sort(temp, temp + s.size());

		for (int i = 0; i < s.size(); i++)

		{

			ans += (i + 1) * temp[i];

		}

		cout << ans << endl;

	}

};

int main()

{

	Solution s;

	int t;

	cin >> t;

	while (t--)

	{

		s.solve();

	}

	return 0;

}
			
         
