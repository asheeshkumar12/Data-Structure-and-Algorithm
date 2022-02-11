
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st1;
        for(int i=0;i<asteroids.size();i++)
        {
            if(st1.empty() || asteroids[i]>0)
            {
                st1.push(asteroids[i]);
            }
            else
            {
                while(true)
                {
                    int temp=st1.top();
                    if(temp< 0)
                    {
                        st1.push(asteroids[i]);
                        break;
                     }
                    else if(temp==-asteroids[i])
                    {
                        st1.pop();
                        break;
                    }
                    else if(temp > (-asteroids[i]))
                    {
                        break;
                    }
                    else
                    {
                        st1.pop();
                        if(st1.empty())
                        {
                            st1.push(asteroids[i]);
                            break;
                        }
                    }
                }
            }
        }
        
        vector<int> v(st1.size(),0);
        for (int i=st1.size()-1;i>=0;--i)
        {
             v[i]=st1.top();
            st1.pop();
        }
        return v;
    }
};
