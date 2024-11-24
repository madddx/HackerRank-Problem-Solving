int jumpingOnClouds(vector<int> c, int k) {
  int energy = 100;
  bool started = false;
  
  auto handleJump = [&energy, &started, &k](vector<int> c, int& index) -> bool {
    // costs of jump
    energy--;
    
    // if thunderhead 
    if(c[index] == 1)
      energy-=2;
    
    // calculate index of next cloud
    index += k;
    if(index >= c.size()) index=index%c.size();
    
    if(!started) started = true;
    
    // if reached start cloud
    if(started && index == 0) {
      return false;
    }

    return true;
  };

  int index = 0;
  while(handleJump(c, index)){}

  return energy;
}
