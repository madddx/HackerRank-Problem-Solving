function timeConversion(s) {
    // Write your code here
    let getHours = parseInt(s.slice(0, -8))
    const timeString = s.slice(8)
    
    if(timeString === 'PM'){
        if(getHours === 12){
            return `${getHours}${s.slice(2, -2)}`
        }
        return (getHours + 12) + s.slice(2, -2)
    }else if(timeString === 'AM' && getHours === 12){
        return `00${s.slice(2, -2)}`
    }else{
        return s.slice(0, -2)
    }
}
