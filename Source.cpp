vector<int> Increment(vector<int> orig, int inc){
  vector<int> newv;
  for( auto i: orig){
    newv.push_back(i+inc);
   }
  return newv;
}
