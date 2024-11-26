function climbingLeaderboard(ranked, player) {
    const rankArr = [...(new Set(ranked))];
    const result = [];
    for (let i =0; i< player.length;i++) {
        const playerScore = player[i];
        const last = rankArr.at(-1);
        if (last > playerScore) {
            result.push(rankArr.length + 1);
            continue;
        }
        for (let j = 0; j< rankArr.length;j++) {
            const playerRank = rankArr[j];
            if (playerRank <= playerScore) {
                result.push(j + 1);
                break;
            }
        }
    }
    return result;
}
