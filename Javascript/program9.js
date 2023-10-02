const prompt = require("prompt-sync")();

let a = prompt("whats your age?");
console.log(typeof a);      // it will show string

//typecasting
a = Number.parseInt(a);     // Converting the string to number
console.log(typeof a);

if(a > 0)
{
    alert("This is a valid age");
}
else
{
    alert("This is an invalid age");
}