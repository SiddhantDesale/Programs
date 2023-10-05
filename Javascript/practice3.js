// Practice 3
const prompt = require("prompt-sync")();

// Q1
/*
let obj = { Siddhant : 98, Manasi : 78, Nikita : 80};
// Object.keys(obj) stores the keys in an array like Siddhant Manasi & Nikita
for(let i = 0; i < Object.keys(obj).length; i++)
{
    console.log("Marks of " + Object.keys(obj)[i] + " are " + obj[Object.keys(obj)[i]]);
}*/

// Q2
/*
let obj = { Siddhant : 98, Manasi : 78, Nikita : 80};

for(let i in obj)
{
    console.log("Marks of "+ i +" are "+ obj[i]);
}*/

// Q3
/*
let cn = 7;
let i;
while(i != cn)
{
    console.log("Try again");
    i = prompt("Enter a number ");
}
console.log("You have entered the correct number");
*/

// Q4

const mean = (a ,b ,c ,d ,e)=>
{
    return (a+b+c+d+e)/5;
}

console.log(mean(1,2,3,4,5));