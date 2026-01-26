// Last updated: 1/26/2026, 8:37:08 AM
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let res=[];
    for(let i=0;i<arr.length;i++){
        res[i]=fn(arr[i],i);    
    }
    return res;
};