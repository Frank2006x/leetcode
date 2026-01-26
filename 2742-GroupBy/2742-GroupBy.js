// Last updated: 1/26/2026, 8:37:10 AM
/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    const newObject={};
    for(const i of this){
        let key=fn(i);
        newObject[key]??=[];
        newObject[key].push(i);
    }
    return newObject;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */