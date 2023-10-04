// for Loops
const prompt = require("prompt-sync")();

// for loop
/*
for(let i = 0; i < 10; i++)
{
    console.log(i);
}*/

// for in loop
/*
let obj = {
    siddhant: 98,
    manasi : 78,
    om: 77,
    nikita:87
}

for(let i in obj){
    console.log(i);
}

for(let i in obj){
    console.log("Marks of "+i+" are " +obj[i]);
}*/

// for of loop

for(let i of "Siddhant"){
    console.log(i);
}