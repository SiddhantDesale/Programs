// operators in js

// Arithematic operators
let a = 20;
let b = 10;
console.log("a + b =",a+b);
console.log("a - b =",a-b);
console.log("a / b =",a/b);
console.log("a * b =",a*b);

a = 15;
b = 4;
// o/p will be 3.75 and not 3
console.log("a / b =",a/b);     // its not like c lang

console.log("a ** b = ",a**b);      // a to the power b
console.log("a % b = ",a%b);        // 3

console.log("a++ = ",a++);      //15
console.log(a);                 //16
console.log("++a = ",++a);      //17

// Assignment operators
a = 7;
a += 5;      // same as a = a+ 5
console.log(a);

// Comparison operators
let No1 = 6;
let No2 = 7;
console.log("No1 == No2 is ",No1 == No2);
console.log("No1 != No2 is ",No1 != No2);
console.log("No1 === No2 is ",No1 === No2);
console.log("No1 !== No2 is ",No1 !== No2);

No1 = 6;
No2 = "6";
console.log("No1 == No2 is ",No1 == No2);
console.log("No1 != No2 is ",No1 != No2);
console.log("No1 === No2 is ",No1 === No2);     //false bcoz no1 is number and no2 is string
console.log("No1 !== No2 is ",No1 !== No2);

// Logical operators
No1 = 5;
No2 = 7;
console.log(No1<No2 && No1==5);
console.log(No1>No2 || No1==5);
console.log(!true);