// Arrays
let arr = [1, 2, null, false, "Siddhant"];
console.log(arr);
console.log(arr[0]);    //1
console.log(arr[1]);    //2
console.log(arr[2]);    //null
console.log(arr[3]);    //false
console.log(arr[4]);    //Siddhant

console.log(arr[5]);    //undefined

console.log("Length of array is :",arr.length);

arr[5] = 7; // Adding a new value
console.log("Length of array is :",arr.length);

arr[0] = 85;    // change element of an array, bcoz arrays are mutable
console.log(arr);

console.log(typeof arr);    // object

for(let i = 0; i < arr.length; i++)
{
    console.log(arr[i]);
}