// Last updated: 1/26/2026, 8:37:09 AM
/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    let res=[];
    for(let i=0;i<arr.length;i++){
        if(fn(arr[i],i)){
            res.push(arr[i]);
        };
    }
    return res;
};