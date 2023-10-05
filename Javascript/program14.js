const prompt = require("prompt-sync")();

let a = 1;
let b = 2;
let c = 3;

console.log("Avg of a and b is :",(a + b)/2);
console.log("Avg of b and c is :",(b + c)/2);
console.log("Avg of c and a is :",(c + a)/2);

// Functions
// 1) first way
function Avg(x,y)
{
    return (x + y)/2;
}

console.log("Avg of a and b is :",Avg(a,b));
console.log("Avg of b and c is :",Avg(b,c));
console.log("Avg of c and a is :",Avg(c,a));

// 2) second way ( Arrow function )
const sum = (p,q)=>
{
    return p+q;
}

console.log(sum(9,7));

const hi = ()=>
{
    console.log("Hi, my name is Siddhant Desale");
    return "Hello World";
}

let Ans = hi();
console.log(Ans);