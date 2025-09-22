// js_syntax_error.js -- deliberate syntax error
function calculateSum(arr) {
    let total = 0;
    for (let num of arr) {
        total += num;
    }
    return total;
}

let numbers = [1,2,3,4,5];
let result = calculate Sum(numbers);   // <-- invalid identifier (space)
console.log("Sum in JavaScript:", result);
