// Last updated: 1/26/2026, 8:37:03 AM
/**
 * @return {Function}
 */
var createHelloWorld = function() {
    let msg="Hello World"
    return function(...args) {
        return msg;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */