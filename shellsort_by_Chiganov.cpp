#include <vector>
#include <algorithm>

using namespace std;

vector<int> shellsort(vector<int> aVector)
{
    int end = aVector.size() - 1;
    int h;
    for (h = 1; h <= end; h = 3 * h + 1);

    for (; h > 0; h /= 3)
        for (auto i = h; i <= end; i++)
        {
            int j = i;
            int v = aVector[i];
            while (j >= h && v < aVector[j - h])
            {
                aVector[j] = aVector[j - h];
                j -= h;
            }
            aVector[j] = v;
        }
    return aVector;

}