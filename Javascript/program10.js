const prompt = require("prompt-sync")();

let age = prompt("Enter yout age?");

if(age > 0)
{
    console.log("You can", (age < 18? "not drive" :"drive"));
}
else
{
    console.log("Invalid Input");
}