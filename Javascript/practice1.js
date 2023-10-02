// Practice 1
// Q1
let string = "Siddhant";
let no = 7;
console.log(string + no);

// Q2
console.log(typeof (string+no));

// Q3
const obj ={
    name: "Siddhant",
    Rno: 1,
    male: true
}
// obj = 7;

// Q4
obj["surname"] = "Desale";
console.log(obj);

obj["Rno"] = 2;         //we can do this bcoz whole object is not constant only obj which the variable it is constant
console.log(obj);

// Q5
const dict ={
    profligate: "recklessly extravagant or wasteful in the use of resources",
    delict: "a violation of the law",
    love: "an intense feeling of deep affection",
    carpool: "an arrangement between people to make a regular journey in a single vehicle, typically with each person taking turns to drive the others",
    misuse: "use (something) in the wrong way or for the wrong purpose"
}

console.log(dict);
console.log(dict.love);