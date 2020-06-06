#include <iostream>
#include <unordered_map>
using namespace std;


void findLongestArraySnippetBasedOnSum(int arr[], int n, int S)
{
	unordered_map<int, int> map;

	map[0] = -1;

	int sum = 0;

	int len = 0;

	int ending_index = -1;

	for (int i = 0; i < n; i++)
	{
		
		sum += arr[i];

		if (map.find(sum) == map.end()) {
			map[sum] = i;
		}


		if (map.find(sum - S) != map.end() && len < i - map[sum - S])
		{
			len =  i - map[sum - S];
			ending_index = i;
		}
	}


	cout << "[" << (ending_index - len + 1) << "," << ending_index << "]";
}

int main()
{
	int arr[10000];
  int i;
  count<<"Enter Array";
  for(i=0;i<n;i++)
  {
   cin>>arr[i];
  }
	int sum;
  cout<<"Enter Sum";
  cin>>sum;

	int n = sizeof(arr) / sizeof(arr[0]);

	findLongestArraySnippetBasedOnSum(arr, n, sum);

	return 0;
}
