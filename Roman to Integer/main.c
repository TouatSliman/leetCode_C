int romanToInt(char* s) {
    int res = 0;
    int len = strlen(s);
    for(int i=0; i < len; i++) {
        switch(s[i]) {
            case 'I':
                if(i < len - 1 && (s[i+1] == 'V' || s[i+1] == 'X')){
                    res += (s[i+1] == 'V') ? 4 : 9;
                    i++;
                } else {
                    res += 1;
                }
                break;
            case 'V': res += 5; break;
            case 'X':
                if(i < len - 1 && (s[i+1] == 'L' || s[i+1] == 'C')){
                    res += (s[i+1] == 'L') ? 40 : 90;
                    i++;
                } else {
                    res += 10;
                }
                break;
            case 'L': res += 50; break;
            case 'C':
                if(i < len - 1 && (s[i+1] == 'D' || s[i+1] == 'M')){
                    res += (s[i+1] == 'D') ? 400 : 900;
                    i++;
                } else {
                    res += 100;
                }
                break;
            case 'D': res += 500; break;
            case 'M': res += 1000; break;
        }
    }
    return res;
}
