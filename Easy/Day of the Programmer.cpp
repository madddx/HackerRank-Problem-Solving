string dayOfProgrammer(int year) {
    if(year == 1918) return "26.09.1918";
    if( (year <= 1917 && year % 4 == 0) or (year > 1918) && (year%400 == 0 or ((year%4 == 0) & (year%100 != 0)))) return "12.09."+to_string(year);
    return "13.09." + to_string(year);
}
