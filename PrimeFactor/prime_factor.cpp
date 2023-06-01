#include <vector>
using namespace std;
class PrimeFactor
{
public:
	PrimeFactor() = default;
	vector<int> of(int number)
	{
		vector<int> result = {};
		if (number == 2)
		{
			result.push_back(2);
		}
		return result;
	}
};