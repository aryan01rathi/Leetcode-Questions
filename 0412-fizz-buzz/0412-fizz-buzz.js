/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
     let ansArray = []; 

    for (let number = 1; number <= n; number++) {
        if (number % 3 === 0 && number % 5 === 0) {
            ansArray.push('FizzBuzz');
        } else if (number % 3 === 0) {
            ansArray.push('Fizz');
        } else if (number % 5 === 0) {
            ansArray.push('Buzz');
        } else {
            ansArray.push(number.toString()); 
        }
    }

    return ansArray;
};