vector<pair<int,int>>kSmallestSum(vector<int>&a,vector<int>&b,int k)
{
  priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
  
  q.push({a[0]+b[0],{0,0}});
  
  unordered_set<pair<int,int>>vis;
  vis.insert({0,0});
  
  
  vector<pair<int,int>>ans;
  
  while(!q.empty() && k--)
  {
    auto curr=q.top();
    q.pop();
    
    int x=curr.second.first;
    int y=curr.second.second
    ans.push_back({x,y});
    
    if(x+1 < a.size())
    {
      pair<int,int>temp={x+1,y};
      
      if(vis.find(temp) == vis.end())
      {
        q.push({a[x+1]+b[y],{x+1,y}});
        vis.insert({x+1,y});
      }
    }
    if(y+1 < b.size())
    {
      pair<int,int>temp={x,y+1};
      
      if(vis.find(temp) == vis.end())
      {
        q.push({a[x]+b[y+1],{x,y+1}});
        vis.insert({x,y+1});
      }
    }
  }
  return ans;
}
