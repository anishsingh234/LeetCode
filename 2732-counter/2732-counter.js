/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    var res1=n;
    return function() {
        return res1++;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */