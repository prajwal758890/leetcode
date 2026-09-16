using namespace std;
class Solution {
public:
   int small(vector <int> num)
	  {
        int s = num[0];
     for(int i = 0;i<num.size()-1;i++)
        {   
            if(num[i] < num[i+1])
            {
                if(num[i] < s )
                {
                	s = num[i];
				}	
            }
            if(num[i+1]<num[i]){
                if(num[i+1] <= s){
				s = num[i+1];
				}
            }
        }
        return s;
        }
        int large(vector <int> num)
        {
        {
            int l = num[0];
            for(int i = 0;i<num.size()-1;i++)
        {   
            if(num[i] > num[i+1])
            {
                if(num[i] >= l )
                { 
                	l = num[i];
				}	
            }

            if(num[i+1]>num[i]){
                if(num[i+1] >= l){
				l = num[i+1];
				}
            }
        }
        return l;
        }
        }
    vector<int> divisors(int n)
    {
        vector <int> div;
    for(int i =1;i<=n;i++)
    {
        if(n % i == 0)
        {
          div.push_back(i);
        }
    }
    return div;
    }
    vector<int> com(vector <int> v1,vector <int> v2)
    {   vector <int> cm;
        for(int i=0;i< v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(v1[i] == v2[j])
                {
                    cm.push_back(v1[i]);
                    break;
                }
            }
        }
        return cm;
    }

    int findGCD(vector<int>& nums) {
        int small1 = small(nums);
        int large1 = large(nums);
        vector <int> ds=divisors(small1);
        vector <int> dl = divisors(large1);
        vector <int> common = com(ds,dl);
        int gdc = large(common);
        return gdc;
    }
};