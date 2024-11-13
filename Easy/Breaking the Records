vector<int> breakingRecords(vector<int> scores) {
    int lowest = scores[0], highest = scores[0], lowestCount = 0, highestCount = 0;
    for(int score: scores){
        if(score < lowest){lowestCount++; lowest = score;}
        if(score > highest){highestCount++; highest = score;}
    }
    return {highestCount, lowestCount};
}
