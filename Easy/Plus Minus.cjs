function plusMinus(arr) {
    const result = [[], [], []]
    
    arr.forEach(i => {
        if(i > 0) result[0].push(i)
        if(i < 0) result[1].push(i)
        if(i == 0) result[2].push(i)
    })

    console.log(result[0].length / arr.length)
    console.log(result[1].length / arr.length)
    console.log(result[2].length / arr.length)
}
