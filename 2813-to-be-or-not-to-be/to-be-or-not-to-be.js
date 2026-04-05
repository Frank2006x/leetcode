/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val) {
    var v = val;
    return {
        toBe: function toBe(num) {
            if (num === val) return true;
            else throw new Error("Not Equal");
        },
        notToBe: function notToBe(num) {
            if (num !== val) return true;
            else throw new Error("Equal");
        }
    }
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */