

 
function reverse(str) {
    var res = "";
    var len = str.length - 1;
    for (var i = len; i >= 0; i--) {
        res += str[i];
    }
    return res;
}