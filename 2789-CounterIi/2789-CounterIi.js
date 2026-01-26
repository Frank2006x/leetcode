// Last updated: 1/26/2026, 8:37:06 AM
/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let counter=init;
    return {
        increment:()=>{
            return counter+=1;
        },decrement:()=>{
            return counter-=1;
        },reset:()=>{
            return counter=init;
        }
    }
    
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */