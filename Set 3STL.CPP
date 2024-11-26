void add_value(map<int,int> &m,int x,int y)
{
    m[x]=y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  if(m.find(x)!=m.end()){
      cout<<m[x]<<" ";
  }
  else{
      cout<< -1 <<" ";
  }
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
   for(auto it=m.begin();it!=m.end();it++){
       cout<<it->first<<" "<<it->second<<" ";
   }
}
