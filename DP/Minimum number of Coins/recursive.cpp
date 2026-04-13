/*
The idea is to minimize the number of coins recursively by always starting with the highest denomination. To get how many coins of a 
particular denomination are needed, we divide the amount by that denomination (amount / coin). The remaining amount is then found using 
the modulo operator (amount % coin), and the same process continues for the smaller denominations until the amount becomes zero.
*/

function getMin(n, denomination, i) {
    
    // Base case: if amount becomes 0 or i<0
    if(n==0 || i<0)
      return 0;
    return Math.floor(n/denomination[i]) + getMin(n%denomination[i],denomination,i-1);
}
function findMin(n) {
    const denomination = [1, 2, 5, 10];
    return getMin(n, denomination, denomination.length - 1);
}
