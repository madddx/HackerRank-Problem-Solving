vector<int> acmTeam(vector<string> topic) {
    int h = 0, cp = 0;
    for(int i = 0; i < topic.size() - 1; i++){
        bitset<500> a = bitset<500>(topic[i]);
        for(int j = i + 1; j < topic.size(); j++){
         bitset<500> b = bitset<500>(topic[j]);
         bitset<500> c = a | b;
         int x = c.count();
         if( x > h){h = x; cp = 1;}
         else if( x == h) cp++;
        }
    }
    return {h, cp};

}  
